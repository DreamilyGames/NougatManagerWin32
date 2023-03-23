#include "stdafx.h"
#include "CUserPrefs.h"

CUserPrefs::CUserPrefs()
{
	QFile f(".userpref");
	if (f.exists())
	{
		f.open(QIODeviceBase::ReadOnly);
		QXmlStreamReader xml(&f);
		while (xml.readNextStartElement())
		{
			if (xml.name() == L"UserPrefs")
			{
				while (xml.readNextStartElement())
				{
					if (xml.name() == L"LastOpenedOrdersDirectory")
					{
						mLastOpenedOrdersDirectory = xml.readElementText();
					}
					else if (xml.name() == L"LastSavedOrdersDirectory")
					{
						mLastSavedOrdersDirectory = xml.readElementText();
					}
					else
					{
						xml.skipCurrentElement();
					}
				}
			}
		}
	}
}

void CUserPrefs::Save()
{
	QFile f(".userpref");
	if (!f.exists())
	{
		//create
		f.open(QIODeviceBase::WriteOnly);
	}
	else
	{
		f.open(QIODeviceBase::Truncate | QIODeviceBase::WriteOnly);
	}

	QXmlStreamWriter xml(&f);
	xml.setAutoFormatting(true);
	xml.writeStartDocument();

	xml.writeStartElement("UserPrefs");

	xml.writeStartElement("LastOpenedOrdersDirectory");
	xml.writeCharacters(mLastOpenedOrdersDirectory);
	xml.writeEndElement();

	xml.writeStartElement("LastSavedOrdersDirectory");
	xml.writeCharacters(mLastSavedOrdersDirectory);
	xml.writeEndElement();

	xml.writeEndElement();

	xml.writeEndDocument();
}

CUserPrefs::~CUserPrefs()
{
	//save
	Save();
}