#include "stdafx.h"
#include "CComponentManager.h"

QString CComponentManager::GetStringFromDateTime(QDateTime dt)
{
	return dt.toString(mDateTimeFormat);
}

bool CComponentManager::GetDateTimeFromString(QString str, QDateTime& dt)
{
	auto _dt = QDateTime::fromString(str, mDateTimeFormat);
	if (_dt.isValid())
	{
		dt = _dt;
		return true;
	}

	return false;
}

void CComponentManager::New()
{

}

bool CComponentManager::Load(QString path)
{
	return false;
}

bool CComponentManager::Save()
{
	return false;
}

bool CComponentManager::SaveAs(QString path)
{
	return false;
}