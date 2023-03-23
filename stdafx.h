#pragma once

#include <qfile.h>
#include <qapplication.h>
#include <qstring.h>
#include <qtextstream.h>
#include <qscopedpointer.h>
#include <qsharedpointer.h>
#include <qdialog.h>
#include <qfiledialog.h>
#include <qxmlstream.h>
#include <qmessagebox.h>
#include <qresource.h>
#include <qregularexpression.h>
#include <qevent.h>
#include <qabstractitemmodel.h>
#include <qabstractitemview.h>
#include <qstyleditemdelegate.h>
#include <qinputdialog.h>
#include <qlistview.h>
#include <qitemselectionmodel.h>

#define SINGLETON(c) private: c(); public: static c& Get(){static c _c; return _c;} c(const c&) = delete;\
void operator=(const c&) = delete;
