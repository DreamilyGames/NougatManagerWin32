#pragma once

class CUserPrefs
{
	SINGLETON(CUserPrefs)
public:
	QString mLastOpenedOrdersDirectory;
	QString mLastSavedOrdersDirectory;

	void Save();

	~CUserPrefs();
};

