#include "stdafx.h"
#include "CMainWindow.h"
#include "COrderManager.h"
#include "CUserPrefs.h"

int main(int argc, char *argv[])
{
    QResource::registerResource("lightstyle.rcc");
    QResource::registerResource("darkstyle.rcc");
    QResource::registerResource("NougatResources.rcc");

    //initialize components
    CUserPrefs::Get();
    COrderManager::Get();

    QApplication a(argc, argv);
    CMainWindow w;
    w.show();
    return a.exec();
}
