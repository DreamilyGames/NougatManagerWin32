#include "stdafx.h"
#include "CStringUtil.h"

bool CStringUtil::IsCompletelyDigits(QString str)
{
	bool flag = true;
	for (size_t i = 0; i < str.size(); ++i)
	{
		QChar c = str[i];
		if (c != '0' && c != '1' && c != '2' && c != '3' && c != '4' && c != '5' && c != '6' && c != '7' &&
			c != '8' && c != '9')
		{
			flag = false;
		}
	}
	return flag;
}

QString CStringUtil::GetDirFromPath(QString path)
{
	qsizetype lastSplashPos = path.lastIndexOf(QRegularExpression("[\\/]"));
	if (lastSplashPos != -1)
	{
		QString dir = path;
		dir = dir.mid(0, lastSplashPos + 1);
		return dir;
	}

	return QString();
}

QString CStringUtil::GetNameFromPath(QString path)
{
	qsizetype lastSplashPos = path.lastIndexOf(QRegularExpression("[\\/]"));
	if (lastSplashPos != -1)
	{
		QString dir = path;
		dir = dir.right(dir.length() - lastSplashPos - 1);
		return dir;
	}

	return QString();
}