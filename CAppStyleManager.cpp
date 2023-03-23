#include "stdafx.h"
#include "CAppStyleManager.h"

CAppStyleManager::CAppStyleManager()
{
    QFile lightFile(":/qdarkstyle/light/style.qss");
    
    lightFile.open(QFile::ReadOnly | QFile::Text);
    QTextStream lightts(&lightFile);
    mLightStyleRawData = lightts.readAll();
    qApp->setStyleSheet(mLightStyleRawData);

    QFile darkFile(":/qdarkstyle/dark/style.qss");
    darkFile.open(QFile::ReadOnly | QFile::Text);
    QTextStream darkts(&darkFile);
    mDarkStyleRawData = darkts.readAll();
}

void CAppStyleManager::SetStyle(EStyle style)
{
    style == EStyle::LIGHT ? qApp->setStyleSheet(mLightStyleRawData) : qApp->setStyleSheet(mDarkStyleRawData);
}

CAppStyleManager::~CAppStyleManager()
{

}