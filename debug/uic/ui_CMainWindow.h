/********************************************************************************
** Form generated from reading UI file 'CMainWindow.ui'
**
** Created by: Qt User Interface Compiler version 6.0.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CMAINWINDOW_H
#define UI_CMAINWINDOW_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCalendarWidget>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDoubleSpinBox>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QListView>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPlainTextEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSplitter>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QTimeEdit>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_CMainWindow
{
public:
    QWidget *centralwidget;
    QHBoxLayout *horizontalLayout_2;
    QSplitter *splitter;
    QWidget *widget;
    QHBoxLayout *horizontalLayout;
    QTabWidget *tab_Tools;
    QWidget *tab_Tools_p1;
    QGroupBox *tab_Tools_p1_Grp_Order;
    QPushButton *tab_Tools_p1_button_NewOrder;
    QPushButton *tab_Tools_p1_button_OpenOrder;
    QPushButton *tab_Tools_p1_button_SaveOrder;
    QPushButton *tab_Tools_p1_button_SaveAsOrder;
    QGroupBox *tab_Tools_p1_Grp_Customer;
    QPushButton *tab_Tools_p1_button_NewCustomer;
    QPushButton *tab_Tools_p1_button_DelCustomer;
    QWidget *widget_2;
    QHBoxLayout *horizontalLayout_3;
    QSplitter *splitter_2;
    QListView *list_Customers;
    QGroupBox *group_CustomerInfo;
    QHBoxLayout *horizontalLayout_4;
    QWidget *widget_CustomerInfo;
    QLabel *label_CusName;
    QLineEdit *lineEdit_CusName;
    QLabel *label_CusPhone;
    QLineEdit *lineEdit_CusPhone;
    QLabel *label_CusAddr;
    QPlainTextEdit *plainTextEdit_CusAddr;
    QDoubleSpinBox *doubleSpinBox_CusPercent;
    QLabel *label_CusPercent;
    QLabel *label_CusPayment;
    QComboBox *comboBox_CusPayment;
    QLabel *label_CusMeetDate;
    QCalendarWidget *calendarWidget_CusMeetDate;
    QLabel *label_CusMeetTime;
    QTimeEdit *timeEdit_CusMeetTime;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *CMainWindow)
    {
        if (CMainWindow->objectName().isEmpty())
            CMainWindow->setObjectName(QString::fromUtf8("CMainWindow"));
        CMainWindow->resize(1280, 720);
        centralwidget = new QWidget(CMainWindow);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        horizontalLayout_2 = new QHBoxLayout(centralwidget);
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        splitter = new QSplitter(centralwidget);
        splitter->setObjectName(QString::fromUtf8("splitter"));
        splitter->setOrientation(Qt::Vertical);
        widget = new QWidget(splitter);
        widget->setObjectName(QString::fromUtf8("widget"));
        widget->setMaximumSize(QSize(16777215, 130));
        horizontalLayout = new QHBoxLayout(widget);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        tab_Tools = new QTabWidget(widget);
        tab_Tools->setObjectName(QString::fromUtf8("tab_Tools"));
        tab_Tools_p1 = new QWidget();
        tab_Tools_p1->setObjectName(QString::fromUtf8("tab_Tools_p1"));
        tab_Tools_p1_Grp_Order = new QGroupBox(tab_Tools_p1);
        tab_Tools_p1_Grp_Order->setObjectName(QString::fromUtf8("tab_Tools_p1_Grp_Order"));
        tab_Tools_p1_Grp_Order->setGeometry(QRect(10, 0, 171, 81));
        tab_Tools_p1_button_NewOrder = new QPushButton(tab_Tools_p1_Grp_Order);
        tab_Tools_p1_button_NewOrder->setObjectName(QString::fromUtf8("tab_Tools_p1_button_NewOrder"));
        tab_Tools_p1_button_NewOrder->setGeometry(QRect(10, 30, 31, 31));
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/MainWnd/TabToolsP1/NewOrder.png"), QSize(), QIcon::Normal, QIcon::Off);
        tab_Tools_p1_button_NewOrder->setIcon(icon);
        tab_Tools_p1_button_NewOrder->setIconSize(QSize(30, 30));
        tab_Tools_p1_button_NewOrder->setFlat(false);
        tab_Tools_p1_button_OpenOrder = new QPushButton(tab_Tools_p1_Grp_Order);
        tab_Tools_p1_button_OpenOrder->setObjectName(QString::fromUtf8("tab_Tools_p1_button_OpenOrder"));
        tab_Tools_p1_button_OpenOrder->setGeometry(QRect(50, 30, 31, 31));
        QIcon icon1;
        icon1.addFile(QString::fromUtf8(":/MainWnd/TabToolsP1/OpenOrder.png"), QSize(), QIcon::Normal, QIcon::Off);
        tab_Tools_p1_button_OpenOrder->setIcon(icon1);
        tab_Tools_p1_button_OpenOrder->setIconSize(QSize(30, 30));
        tab_Tools_p1_button_SaveOrder = new QPushButton(tab_Tools_p1_Grp_Order);
        tab_Tools_p1_button_SaveOrder->setObjectName(QString::fromUtf8("tab_Tools_p1_button_SaveOrder"));
        tab_Tools_p1_button_SaveOrder->setGeometry(QRect(90, 30, 31, 31));
        QIcon icon2;
        icon2.addFile(QString::fromUtf8(":/MainWnd/TabToolsP1/SaveOrder.png"), QSize(), QIcon::Normal, QIcon::Off);
        tab_Tools_p1_button_SaveOrder->setIcon(icon2);
        tab_Tools_p1_button_SaveOrder->setIconSize(QSize(30, 30));
        tab_Tools_p1_button_SaveAsOrder = new QPushButton(tab_Tools_p1_Grp_Order);
        tab_Tools_p1_button_SaveAsOrder->setObjectName(QString::fromUtf8("tab_Tools_p1_button_SaveAsOrder"));
        tab_Tools_p1_button_SaveAsOrder->setGeometry(QRect(130, 30, 31, 31));
        QIcon icon3;
        icon3.addFile(QString::fromUtf8(":/MainWnd/TabToolsP1/SaveAsOrder.png"), QSize(), QIcon::Normal, QIcon::Off);
        tab_Tools_p1_button_SaveAsOrder->setIcon(icon3);
        tab_Tools_p1_button_SaveAsOrder->setIconSize(QSize(30, 30));
        tab_Tools_p1_Grp_Customer = new QGroupBox(tab_Tools_p1);
        tab_Tools_p1_Grp_Customer->setObjectName(QString::fromUtf8("tab_Tools_p1_Grp_Customer"));
        tab_Tools_p1_Grp_Customer->setGeometry(QRect(190, 0, 171, 80));
        tab_Tools_p1_button_NewCustomer = new QPushButton(tab_Tools_p1_Grp_Customer);
        tab_Tools_p1_button_NewCustomer->setObjectName(QString::fromUtf8("tab_Tools_p1_button_NewCustomer"));
        tab_Tools_p1_button_NewCustomer->setGeometry(QRect(10, 30, 31, 31));
        QIcon icon4;
        icon4.addFile(QString::fromUtf8(":/MainWnd/TabToolsP1/NewCustomer.png"), QSize(), QIcon::Normal, QIcon::Off);
        tab_Tools_p1_button_NewCustomer->setIcon(icon4);
        tab_Tools_p1_button_NewCustomer->setIconSize(QSize(30, 30));
        tab_Tools_p1_button_NewCustomer->setFlat(false);
        tab_Tools_p1_button_DelCustomer = new QPushButton(tab_Tools_p1_Grp_Customer);
        tab_Tools_p1_button_DelCustomer->setObjectName(QString::fromUtf8("tab_Tools_p1_button_DelCustomer"));
        tab_Tools_p1_button_DelCustomer->setGeometry(QRect(50, 30, 31, 31));
        QIcon icon5;
        icon5.addFile(QString::fromUtf8(":/MainWnd/TabToolsP1/DeleteCustomer.png"), QSize(), QIcon::Normal, QIcon::Off);
        tab_Tools_p1_button_DelCustomer->setIcon(icon5);
        tab_Tools_p1_button_DelCustomer->setIconSize(QSize(30, 30));
        tab_Tools_p1_button_DelCustomer->setFlat(false);
        tab_Tools->addTab(tab_Tools_p1, QString());

        horizontalLayout->addWidget(tab_Tools);

        splitter->addWidget(widget);
        widget_2 = new QWidget(splitter);
        widget_2->setObjectName(QString::fromUtf8("widget_2"));
        horizontalLayout_3 = new QHBoxLayout(widget_2);
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        splitter_2 = new QSplitter(widget_2);
        splitter_2->setObjectName(QString::fromUtf8("splitter_2"));
        splitter_2->setOrientation(Qt::Horizontal);
        list_Customers = new QListView(splitter_2);
        list_Customers->setObjectName(QString::fromUtf8("list_Customers"));
        list_Customers->setMinimumSize(QSize(100, 0));
        list_Customers->setMaximumSize(QSize(400, 16777215));
        splitter_2->addWidget(list_Customers);
        group_CustomerInfo = new QGroupBox(splitter_2);
        group_CustomerInfo->setObjectName(QString::fromUtf8("group_CustomerInfo"));
        group_CustomerInfo->setMinimumSize(QSize(600, 0));
        horizontalLayout_4 = new QHBoxLayout(group_CustomerInfo);
        horizontalLayout_4->setObjectName(QString::fromUtf8("horizontalLayout_4"));
        widget_CustomerInfo = new QWidget(group_CustomerInfo);
        widget_CustomerInfo->setObjectName(QString::fromUtf8("widget_CustomerInfo"));
        label_CusName = new QLabel(widget_CustomerInfo);
        label_CusName->setObjectName(QString::fromUtf8("label_CusName"));
        label_CusName->setGeometry(QRect(10, 10, 31, 16));
        lineEdit_CusName = new QLineEdit(widget_CustomerInfo);
        lineEdit_CusName->setObjectName(QString::fromUtf8("lineEdit_CusName"));
        lineEdit_CusName->setGeometry(QRect(70, 10, 201, 21));
        label_CusPhone = new QLabel(widget_CustomerInfo);
        label_CusPhone->setObjectName(QString::fromUtf8("label_CusPhone"));
        label_CusPhone->setGeometry(QRect(10, 50, 49, 16));
        lineEdit_CusPhone = new QLineEdit(widget_CustomerInfo);
        lineEdit_CusPhone->setObjectName(QString::fromUtf8("lineEdit_CusPhone"));
        lineEdit_CusPhone->setGeometry(QRect(70, 50, 201, 21));
        lineEdit_CusPhone->setMaxLength(8);
        label_CusAddr = new QLabel(widget_CustomerInfo);
        label_CusAddr->setObjectName(QString::fromUtf8("label_CusAddr"));
        label_CusAddr->setGeometry(QRect(10, 90, 49, 16));
        plainTextEdit_CusAddr = new QPlainTextEdit(widget_CustomerInfo);
        plainTextEdit_CusAddr->setObjectName(QString::fromUtf8("plainTextEdit_CusAddr"));
        plainTextEdit_CusAddr->setGeometry(QRect(70, 90, 201, 71));
        doubleSpinBox_CusPercent = new QDoubleSpinBox(widget_CustomerInfo);
        doubleSpinBox_CusPercent->setObjectName(QString::fromUtf8("doubleSpinBox_CusPercent"));
        doubleSpinBox_CusPercent->setGeometry(QRect(70, 180, 62, 22));
        doubleSpinBox_CusPercent->setMaximum(100.000000000000000);
        doubleSpinBox_CusPercent->setValue(100.000000000000000);
        label_CusPercent = new QLabel(widget_CustomerInfo);
        label_CusPercent->setObjectName(QString::fromUtf8("label_CusPercent"));
        label_CusPercent->setGeometry(QRect(10, 180, 49, 16));
        label_CusPayment = new QLabel(widget_CustomerInfo);
        label_CusPayment->setObjectName(QString::fromUtf8("label_CusPayment"));
        label_CusPayment->setGeometry(QRect(10, 220, 49, 16));
        comboBox_CusPayment = new QComboBox(widget_CustomerInfo);
        comboBox_CusPayment->addItem(QString());
        comboBox_CusPayment->addItem(QString());
        comboBox_CusPayment->addItem(QString());
        comboBox_CusPayment->addItem(QString());
        comboBox_CusPayment->addItem(QString());
        comboBox_CusPayment->setObjectName(QString::fromUtf8("comboBox_CusPayment"));
        comboBox_CusPayment->setGeometry(QRect(70, 220, 68, 22));
        label_CusMeetDate = new QLabel(widget_CustomerInfo);
        label_CusMeetDate->setObjectName(QString::fromUtf8("label_CusMeetDate"));
        label_CusMeetDate->setGeometry(QRect(320, 80, 71, 16));
        calendarWidget_CusMeetDate = new QCalendarWidget(widget_CustomerInfo);
        calendarWidget_CusMeetDate->setObjectName(QString::fromUtf8("calendarWidget_CusMeetDate"));
        calendarWidget_CusMeetDate->setGeometry(QRect(400, 80, 256, 190));
        calendarWidget_CusMeetDate->setGridVisible(true);
        label_CusMeetTime = new QLabel(widget_CustomerInfo);
        label_CusMeetTime->setObjectName(QString::fromUtf8("label_CusMeetTime"));
        label_CusMeetTime->setGeometry(QRect(320, 10, 71, 16));
        timeEdit_CusMeetTime = new QTimeEdit(widget_CustomerInfo);
        timeEdit_CusMeetTime->setObjectName(QString::fromUtf8("timeEdit_CusMeetTime"));
        timeEdit_CusMeetTime->setGeometry(QRect(400, 10, 118, 22));
        timeEdit_CusMeetTime->setTime(QTime(16, 0, 0));

        horizontalLayout_4->addWidget(widget_CustomerInfo);

        splitter_2->addWidget(group_CustomerInfo);

        horizontalLayout_3->addWidget(splitter_2);

        splitter->addWidget(widget_2);

        horizontalLayout_2->addWidget(splitter);

        CMainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(CMainWindow);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 1280, 22));
        CMainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(CMainWindow);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        CMainWindow->setStatusBar(statusbar);

        retranslateUi(CMainWindow);

        QMetaObject::connectSlotsByName(CMainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *CMainWindow)
    {
        CMainWindow->setWindowTitle(QCoreApplication::translate("CMainWindow", "CMainWindow", nullptr));
        tab_Tools_p1_Grp_Order->setTitle(QCoreApplication::translate("CMainWindow", "Order", nullptr));
        tab_Tools_p1_button_NewOrder->setText(QString());
        tab_Tools_p1_button_OpenOrder->setText(QString());
        tab_Tools_p1_button_SaveOrder->setText(QString());
        tab_Tools_p1_button_SaveAsOrder->setText(QString());
        tab_Tools_p1_Grp_Customer->setTitle(QCoreApplication::translate("CMainWindow", "Customer", nullptr));
        tab_Tools_p1_button_NewCustomer->setText(QString());
        tab_Tools_p1_button_DelCustomer->setText(QString());
        tab_Tools->setTabText(tab_Tools->indexOf(tab_Tools_p1), QCoreApplication::translate("CMainWindow", "Tools", nullptr));
        group_CustomerInfo->setTitle(QCoreApplication::translate("CMainWindow", "Info", nullptr));
        label_CusName->setText(QCoreApplication::translate("CMainWindow", "Name", nullptr));
        label_CusPhone->setText(QCoreApplication::translate("CMainWindow", "Phone", nullptr));
        label_CusAddr->setText(QCoreApplication::translate("CMainWindow", "Address", nullptr));
        label_CusPercent->setText(QCoreApplication::translate("CMainWindow", "Percent", nullptr));
        label_CusPayment->setText(QCoreApplication::translate("CMainWindow", "Payment", nullptr));
        comboBox_CusPayment->setItemText(0, QCoreApplication::translate("CMainWindow", "Cash", nullptr));
        comboBox_CusPayment->setItemText(1, QCoreApplication::translate("CMainWindow", "Alipay", nullptr));
        comboBox_CusPayment->setItemText(2, QCoreApplication::translate("CMainWindow", "Bank", nullptr));
        comboBox_CusPayment->setItemText(3, QCoreApplication::translate("CMainWindow", "PayMe", nullptr));
        comboBox_CusPayment->setItemText(4, QCoreApplication::translate("CMainWindow", "FPS", nullptr));

        label_CusMeetDate->setText(QCoreApplication::translate("CMainWindow", "Meet Date", nullptr));
        label_CusMeetTime->setText(QCoreApplication::translate("CMainWindow", "Meet Time", nullptr));
    } // retranslateUi

};

namespace Ui {
    class CMainWindow: public Ui_CMainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CMAINWINDOW_H
