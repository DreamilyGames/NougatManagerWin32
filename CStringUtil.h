#pragma once

class CStringUtil
{
public:
	static bool IsCompletelyDigits(QString str);
	static QString GetDirFromPath(QString path);
	static QString GetNameFromPath(QString path);
};

