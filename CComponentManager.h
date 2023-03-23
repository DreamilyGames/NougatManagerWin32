#pragma once

class CComponentManager
{
	const QString mDateTimeFormat = "dd/MM/yyyy-hh:mm";
protected:
	QString GetStringFromDateTime(QDateTime dt);
	bool GetDateTimeFromString(QString str, QDateTime& dt);
public:
	virtual void New();
	virtual bool Load(QString path);
	virtual bool Save();
	virtual bool SaveAs(QString path);
};

