#include "stdafx.h"
#include "CMainWindow.h"
#include "ui_CMainWindow.h"
#include "CAppStyleManager.h"
#include "COrderManager.h"
#include "CUserPrefs.h"
#include "CMsgBoxUtil.h"
#include "CStringUtil.h"

CMainWindow::CMainWindow(QWidget *parent)
    : QMainWindow(parent)
    , pMainWindow(new Ui::CMainWindow)
{
    CAppStyleManager::Get().SetStyle(CAppStyleManager::EStyle::LIGHT);
    pMainWindow->setupUi(this);
	pMainWindow->widget_CustomerInfo->setVisible(false);

	COrderManager::Get().SetCustomerListView(pMainWindow->list_Customers);
	COrderManager::Get().SetDelegate(this);
	COrderManager::Get().New();

	connect(pMainWindow->tab_Tools_p1_button_NewOrder, SIGNAL(clicked()), this, SLOT(UserNewOrder()));
	connect(pMainWindow->tab_Tools_p1_button_OpenOrder, SIGNAL(clicked()), this, SLOT(UserOpenOrder()));
	connect(pMainWindow->tab_Tools_p1_button_SaveOrder, SIGNAL(clicked()), this, SLOT(UserSaveOrder()));
	connect(pMainWindow->tab_Tools_p1_button_SaveAsOrder, SIGNAL(clicked()), this, SLOT(UserSaveAsOrder()));

	connect(pMainWindow->tab_Tools_p1_button_NewCustomer, SIGNAL(clicked()), this, SLOT(UserNewCustomer()));
	connect(pMainWindow->tab_Tools_p1_button_DelCustomer, SIGNAL(clicked()), this, SLOT(UserDelCustomer()));

	pMainWindow->lineEdit_CusPhone->setValidator(new QIntValidator()); // validate phone number!
}

void CMainWindow::OrderDelegate_OrderChanged()
{
	connect(pMainWindow->list_Customers->selectionModel(),
		SIGNAL(selectionChanged(const QItemSelection&, const QItemSelection&)),
		this,
		SLOT(UserSelectedCustomer(const QItemSelection&, const QItemSelection&)));
}

bool CMainWindow::SaveOrder()
{
	if (COrderManager::Get().IsReadingFile())
	{
		//just save it
		if (!COrderManager::Get().Save())
		{
			CMsgBoxUtil::Critical(this, tr("Cannot save file!"),
				tr("File cannot be saved. Try \"Save As\" another file."));
			return false;
		}

		mOrderUnsavedChangesFlag = false;
		return true;
	}


	//prompt user for location to save it
	return SaveAsOrder();
}

bool CMainWindow::SaveAsOrder()
{
	QString previousDir = CUserPrefs::Get().mLastSavedOrdersDirectory;
	QString path = QFileDialog::getSaveFileName(this, tr("Save the order as..."),
		previousDir, tr("Order File (*.order)"));
	if (!path.isNull())
	{
		if (!COrderManager::Get().SaveAs(path))
		{
			CMsgBoxUtil::Critical(this, tr("Cannot save file!"),
				tr("File cannot be saved. Try use other names or locations, or maybe computer has no space"));
			return false;
		}
		

		mOrderUnsavedChangesFlag = false;
		CUserPrefs::Get().mLastSavedOrdersDirectory = CStringUtil::GetDirFromPath(path);
	}

	return true;
}

void CMainWindow::ShowCustomerInfo(int index)
{
	auto customer = COrderManager::Get().GetOrder()->pCustomerList->GetData()[index];
	pMainWindow->lineEdit_CusName->setText(customer.mName);

	pMainWindow->widget_CustomerInfo->setVisible(true);
}

void CMainWindow::HideCustomerInfo()
{
	pMainWindow->widget_CustomerInfo->setVisible(false);
}

void CMainWindow::UserOpenOrder()
{
	//check if user is opening an order
	if (COrderManager::Get().IsReadingFile() || mOrderUnsavedChangesFlag)
	{
		int saveFlag = QMessageBox::question(this, tr("Current order not saved!!!!!"),
			tr("Your current order is NOT saved, save first?"), "Cancel", "Save", "Don't Save", 0, 0
		);
		if (saveFlag == 0)
		{
			//return
			return;
		}
		else if (saveFlag == 1)
		{
			//save order first
			if (!SaveOrder())
			{
				return; //abort if any error occurred
			}

			//open another order
		}

		//saveFlag == 2, just continue without saving
	}

	QString previousDir = CUserPrefs::Get().mLastOpenedOrdersDirectory;
	QString path = QFileDialog::getOpenFileName(this, tr("Choose an order"), 
		previousDir, tr("Order File (*.order)"));
	if (!path.isNull())
	{
		if (COrderManager::Get().Load(path))
		{
			//RefreshCustomerList();

			previousDir = CStringUtil::GetDirFromPath(path);
			CUserPrefs::Get().mLastOpenedOrdersDirectory = previousDir;
			mOrderUnsavedChangesFlag = false;
		}
		else
		{
			CMsgBoxUtil::Critical(this, tr("Incorrect File!"), 
				tr("File cannot be opened possibly due to corruption or incorrect file"));
		}
	}
}

void CMainWindow::UserSaveOrder()
{
	SaveOrder();
}

void CMainWindow::UserSaveAsOrder()
{
	SaveAsOrder();
}

void CMainWindow::UserNewOrder()
{
	if (COrderManager::Get().IsReadingFile() || mOrderUnsavedChangesFlag)
	{
		//there's an order opened and we need to prompt for saving
		if (!SaveOrder())
		{
			return; //abort if any error occurred
		}
	}

	COrderManager::Get().New();
	mOrderUnsavedChangesFlag = false;
}

void CMainWindow::UserNewCustomer()
{
	bool flag = false;
	QString name = QInputDialog::getText(this, tr("Customer's name"), tr("Name:"), 
		QLineEdit::Normal, "", &flag);
	if (flag && !name.isEmpty())
	{
		COrderManager::Get().AddCustomer(name);

		mOrderUnsavedChangesFlag = true;
	}
}

void CMainWindow::UserDelCustomer()
{
	auto selectionModel = pMainWindow->list_Customers->selectionModel();
	if (selectionModel->hasSelection())
	{
		if (CMsgBoxUtil::Warning(this, tr("Be AWARE!"),
			"Are you sure about deleting \""
			+ selectionModel
			->currentIndex().data(Qt::DisplayRole).toString()
			+ "\"?"))
		{
			COrderManager::Get().DelCustomer(selectionModel->currentIndex().row());

			mOrderUnsavedChangesFlag = true;
		}
	}
}

void CMainWindow::UserSelectedCustomer(const QItemSelection& selected, const QItemSelection& deselected)
{
	if (selected.count() > 0)
	{
		//select
		ShowCustomerInfo(selected.first().top());
	}
	else
	{
		//deselect
		HideCustomerInfo();
	}
}

void CMainWindow::UserEnteredCusName(){}
void CMainWindow::UserEnteredCusPhone(){}
void CMainWindow::UserEnteredCusAddr(){}
void CMainWindow::UserEnteredCusPercentagePrice(){}
void CMainWindow::UserChangedCusPayment(){}
void CMainWindow::UserEnteredCusMeetTime(){}
void CMainWindow::UserSelectedCusMeetDate(){}

void CMainWindow::keyPressEvent(QKeyEvent* event)
{
	if (event->modifiers() & Qt::KeyboardModifier::ControlModifier)
	{
		if (event->key() == Qt::Key::Key_Z)
		{
			if (event->modifiers() & Qt::KeyboardModifier::ShiftModifier)
			{
				//redo
			}
			else
			{
				//undo
			}
		}

		if (event->key() == Qt::Key::Key_S)
		{
			SaveOrder();
		}
	}
	QMainWindow::keyPressEvent(event);
}

void CMainWindow::closeEvent(QCloseEvent* event)
{
	if (COrderManager::Get().IsReadingFile() || mOrderUnsavedChangesFlag)
	{
		int saveFlag = QMessageBox::question(this, tr("Current order not saved!!!!!"),
			tr("Your current order is NOT saved, save first?"), "Cancel", "Save", "Don't Save", 0, 0
		);
		if (saveFlag == 0)
		{
			//ignore the close event
			event->ignore();
		}
		else if (saveFlag == 1)
		{
			//save order first
			if (!SaveOrder())
			{
				event->ignore();
			}
			else
			{
				COrderManager::Get().mPromptSaveAtClose = false; //order is already saved, no need to save again
			}
		}
		else if(saveFlag == 2)
		{
			COrderManager::Get().mPromptSaveAtClose = false;
		}
	}
}

CMainWindow::~CMainWindow()
{

}

