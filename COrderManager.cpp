#include "stdafx.h"
#include "COrderManager.h"
#include "CCustomerListModel.h"
#include "COrderManagerDelegate.h"

COrderManager::COrderManager()
{
	
}

void COrderManager::New()
{
	mPath = "";
	pOrder.reset(new FOrder);

	pCustomerListView->setModel(pOrder->pCustomerList.get());
	if (pDelegate)
	{
		pDelegate->OrderDelegate_OrderChanged();
	}
}

//write the order manager!

bool COrderManager::Load(QString path)
{
	QFile f(path);
	if (!f.exists())
	{
		return false;
	}
	f.open(QIODeviceBase::ReadOnly);
	QXmlStreamReader xml(&f);
	while (xml.readNextStartElement())
	{
		if (xml.name() == L"Order")
		{
			pOrder.reset(new FOrder);
			while (xml.readNextStartElement())
			{
				if (xml.name() == L"Name")
				{
					pOrder->mName = xml.readElementText();
				}
				else if (xml.name() == L"Customer")
				{
					FCustomer customer;
					while (xml.readNextStartElement())
					{
						if (xml.name() == L"Name")
						{
							customer.mName = xml.readElementText();
						}
						else if (xml.name() == L"Phone")
						{
							customer.mPhoneNum = xml.readElementText();
						}
						else if (xml.name() == L"Address")
						{
							customer.mAddress = xml.readElementText();
						}
						else if (xml.name() == L"MeetDateTime")
						{
							bool b = GetDateTimeFromString(xml.readElementText(), customer.mMeetingDateTime);
							if (pDelegate && !b)
							{
								pDelegate->OrderDelegate_OrderReadingError(1);
							}
						}
						else if (xml.name() == L"PercentagePrice")
						{
							customer.mPercentageOfPrice = xml.readElementText().toFloat();
						}
						else if (xml.name() == L"Payment")
						{
							customer.mPayment = static_cast<EPayment>((xml.readElementText().toInt()));
						}
						else
						{
							xml.skipCurrentElement();
						}
					}
					pOrder->pCustomerList->GetData().push_back(customer);
				}
				else
				{
					xml.skipCurrentElement();
				}
			}
		}
	}

	mPath = path;
	//create the customer list model
	pCustomerListView->setModel(pOrder->pCustomerList.get());
	if (pDelegate)
	{
		pDelegate->OrderDelegate_OrderChanged();
	}

	return true;
}

bool COrderManager::Save()
{
	if (mPath.isEmpty())
	{
		return false;
	}
	QFile f(mPath);
	f.open(QIODeviceBase::Truncate | QIODeviceBase::WriteOnly);
	QXmlStreamWriter xml(&f);
	xml.setAutoFormatting(true);
	xml.writeStartDocument();

	xml.writeStartElement("Order");

	xml.writeStartElement("Name");
	xml.writeCharacters(pOrder->mName.isEmpty() ? "Untitled" : pOrder->mName);
	xml.writeEndElement();

	if (pOrder->pCustomerList->GetCount() > 0)
	{
		for (auto customer : pOrder->pCustomerList->GetData())
		{
			xml.writeStartElement("Customer");

			xml.writeStartElement("Name");
			xml.writeCharacters(customer.mName);
			xml.writeEndElement();

			xml.writeStartElement("Phone");
			xml.writeCharacters(customer.mPhoneNum);
			xml.writeEndElement();

			xml.writeStartElement("Address");
			xml.writeCharacters(customer.mAddress);
			xml.writeEndElement();

			xml.writeStartElement("MeetDateTime");
			xml.writeCharacters(GetStringFromDateTime(customer.mMeetingDateTime));
			xml.writeEndElement();

			xml.writeStartElement("PercentagePrice");
			xml.writeCharacters(QString::number(customer.mPercentageOfPrice));
			xml.writeEndElement();

			xml.writeStartElement("Payment");
			xml.writeCharacters(QString::number(static_cast<int>(customer.mPayment)));
			xml.writeEndElement();

			xml.writeEndElement();
		}
	}

	xml.writeEndElement();

	xml.writeEndDocument();

	return true;
}

bool COrderManager::SaveAs(QString path)
{
	mPath = path;
	return Save();
}

void COrderManager::AddCustomer(QString name)
{
	//notify customers' list
	pOrder->pCustomerList->Add(FCustomer(name));
}

void COrderManager::DelCustomer(int index)
{
	if (index < 0 || index >= pOrder->pCustomerList->GetCount())
		return;

	pOrder->pCustomerList->Del(index);
}

COrderManager::~COrderManager()
{
	if(mPromptSaveAtClose)
		Save();
}