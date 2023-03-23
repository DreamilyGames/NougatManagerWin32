#pragma once

class CAppStyleManager
{
	SINGLETON(CAppStyleManager)

	QString mLightStyleRawData;
	QString mDarkStyleRawData;
public:
	enum class EStyle
	{
		LIGHT = 0,
		DARK = 1
	};

	void SetStyle(EStyle style);
	~CAppStyleManager();
};

