/****************************************************************************
** Meta object code from reading C++ file 'CMainWindow.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.0.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../CMainWindow.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'CMainWindow.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 68
#error "This file was generated using the moc from 6.0.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_CMainWindow_t {
    const uint offsetsAndSize[38];
    char stringdata0[315];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(offsetof(qt_meta_stringdata_CMainWindow_t, stringdata0) + ofs), len 
static const qt_meta_stringdata_CMainWindow_t qt_meta_stringdata_CMainWindow = {
    {
QT_MOC_LITERAL(0, 11), // "CMainWindow"
QT_MOC_LITERAL(12, 13), // "UserOpenOrder"
QT_MOC_LITERAL(26, 0), // ""
QT_MOC_LITERAL(27, 13), // "UserSaveOrder"
QT_MOC_LITERAL(41, 15), // "UserSaveAsOrder"
QT_MOC_LITERAL(57, 12), // "UserNewOrder"
QT_MOC_LITERAL(70, 15), // "UserNewCustomer"
QT_MOC_LITERAL(86, 15), // "UserDelCustomer"
QT_MOC_LITERAL(102, 20), // "UserSelectedCustomer"
QT_MOC_LITERAL(123, 14), // "QItemSelection"
QT_MOC_LITERAL(138, 8), // "selected"
QT_MOC_LITERAL(147, 10), // "deselected"
QT_MOC_LITERAL(158, 18), // "UserEnteredCusName"
QT_MOC_LITERAL(177, 19), // "UserEnteredCusPhone"
QT_MOC_LITERAL(197, 18), // "UserEnteredCusAddr"
QT_MOC_LITERAL(216, 29), // "UserEnteredCusPercentagePrice"
QT_MOC_LITERAL(246, 21), // "UserChangedCusPayment"
QT_MOC_LITERAL(268, 22), // "UserEnteredCusMeetTime"
QT_MOC_LITERAL(291, 23) // "UserSelectedCusMeetDate"

    },
    "CMainWindow\0UserOpenOrder\0\0UserSaveOrder\0"
    "UserSaveAsOrder\0UserNewOrder\0"
    "UserNewCustomer\0UserDelCustomer\0"
    "UserSelectedCustomer\0QItemSelection\0"
    "selected\0deselected\0UserEnteredCusName\0"
    "UserEnteredCusPhone\0UserEnteredCusAddr\0"
    "UserEnteredCusPercentagePrice\0"
    "UserChangedCusPayment\0UserEnteredCusMeetTime\0"
    "UserSelectedCusMeetDate"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_CMainWindow[] = {

 // content:
       9,       // revision
       0,       // classname
       0,    0, // classinfo
      14,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags, initial metatype offsets
       1,    0,   98,    2, 0x0a,    0 /* Public */,
       3,    0,   99,    2, 0x0a,    1 /* Public */,
       4,    0,  100,    2, 0x0a,    2 /* Public */,
       5,    0,  101,    2, 0x0a,    3 /* Public */,
       6,    0,  102,    2, 0x0a,    4 /* Public */,
       7,    0,  103,    2, 0x0a,    5 /* Public */,
       8,    2,  104,    2, 0x0a,    6 /* Public */,
      12,    0,  109,    2, 0x0a,    9 /* Public */,
      13,    0,  110,    2, 0x0a,   10 /* Public */,
      14,    0,  111,    2, 0x0a,   11 /* Public */,
      15,    0,  112,    2, 0x0a,   12 /* Public */,
      16,    0,  113,    2, 0x0a,   13 /* Public */,
      17,    0,  114,    2, 0x0a,   14 /* Public */,
      18,    0,  115,    2, 0x0a,   15 /* Public */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 9, 0x80000000 | 9,   10,   11,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void CMainWindow::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<CMainWindow *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->UserOpenOrder(); break;
        case 1: _t->UserSaveOrder(); break;
        case 2: _t->UserSaveAsOrder(); break;
        case 3: _t->UserNewOrder(); break;
        case 4: _t->UserNewCustomer(); break;
        case 5: _t->UserDelCustomer(); break;
        case 6: _t->UserSelectedCustomer((*reinterpret_cast< const QItemSelection(*)>(_a[1])),(*reinterpret_cast< const QItemSelection(*)>(_a[2]))); break;
        case 7: _t->UserEnteredCusName(); break;
        case 8: _t->UserEnteredCusPhone(); break;
        case 9: _t->UserEnteredCusAddr(); break;
        case 10: _t->UserEnteredCusPercentagePrice(); break;
        case 11: _t->UserChangedCusPayment(); break;
        case 12: _t->UserEnteredCusMeetTime(); break;
        case 13: _t->UserSelectedCusMeetDate(); break;
        default: ;
        }
    }
}

const QMetaObject CMainWindow::staticMetaObject = { {
    QMetaObject::SuperData::link<QMainWindow::staticMetaObject>(),
    qt_meta_stringdata_CMainWindow.offsetsAndSize,
    qt_meta_data_CMainWindow,
    qt_static_metacall,
    nullptr,
qt_incomplete_metaTypeArray<qt_meta_stringdata_CMainWindow_t

, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<const QItemSelection &, std::false_type>, QtPrivate::TypeAndForceComplete<const QItemSelection &, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>


>,
    nullptr
} };


const QMetaObject *CMainWindow::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *CMainWindow::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_CMainWindow.stringdata0))
        return static_cast<void*>(this);
    if (!strcmp(_clname, "COrderManagerDelegate"))
        return static_cast< COrderManagerDelegate*>(this);
    return QMainWindow::qt_metacast(_clname);
}

int CMainWindow::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QMainWindow::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 14)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 14;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 14)
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
        _id -= 14;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
