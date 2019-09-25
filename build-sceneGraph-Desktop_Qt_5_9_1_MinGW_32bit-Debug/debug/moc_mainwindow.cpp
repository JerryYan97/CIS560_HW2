/****************************************************************************
** Meta object code from reading C++ file 'mainwindow.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.9.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../assignment_package/src/mainwindow.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'mainwindow.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.9.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_MainWindow_t {
    QByteArrayData data[18];
    char stringdata0[222];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_MainWindow_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_MainWindow_t qt_meta_stringdata_MainWindow = {
    {
QT_MOC_LITERAL(0, 0, 10), // "MainWindow"
QT_MOC_LITERAL(1, 11, 23), // "on_actionQuit_triggered"
QT_MOC_LITERAL(2, 35, 0), // ""
QT_MOC_LITERAL(3, 36, 24), // "slot_addItemToTreeWidget"
QT_MOC_LITERAL(4, 61, 17), // "slot_wakeUpPinBox"
QT_MOC_LITERAL(5, 79, 16), // "QTreeWidgetItem*"
QT_MOC_LITERAL(6, 96, 5), // "iItem"
QT_MOC_LITERAL(7, 102, 7), // "iColNum"
QT_MOC_LITERAL(8, 110, 10), // "slot_setTX"
QT_MOC_LITERAL(9, 121, 5), // "value"
QT_MOC_LITERAL(10, 127, 10), // "slot_setTY"
QT_MOC_LITERAL(11, 138, 10), // "slot_setRM"
QT_MOC_LITERAL(12, 149, 10), // "slot_setSX"
QT_MOC_LITERAL(13, 160, 10), // "slot_setSY"
QT_MOC_LITERAL(14, 171, 12), // "slot_createT"
QT_MOC_LITERAL(15, 184, 12), // "slot_createR"
QT_MOC_LITERAL(16, 197, 12), // "slot_createS"
QT_MOC_LITERAL(17, 210, 11) // "slot_setGeo"

    },
    "MainWindow\0on_actionQuit_triggered\0\0"
    "slot_addItemToTreeWidget\0slot_wakeUpPinBox\0"
    "QTreeWidgetItem*\0iItem\0iColNum\0"
    "slot_setTX\0value\0slot_setTY\0slot_setRM\0"
    "slot_setSX\0slot_setSY\0slot_createT\0"
    "slot_createR\0slot_createS\0slot_setGeo"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_MainWindow[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
      12,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   74,    2, 0x08 /* Private */,
       3,    0,   75,    2, 0x0a /* Public */,
       4,    2,   76,    2, 0x0a /* Public */,
       8,    1,   81,    2, 0x0a /* Public */,
      10,    1,   84,    2, 0x0a /* Public */,
      11,    1,   87,    2, 0x0a /* Public */,
      12,    1,   90,    2, 0x0a /* Public */,
      13,    1,   93,    2, 0x0a /* Public */,
      14,    0,   96,    2, 0x0a /* Public */,
      15,    0,   97,    2, 0x0a /* Public */,
      16,    0,   98,    2, 0x0a /* Public */,
      17,    0,   99,    2, 0x0a /* Public */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 5, QMetaType::Int,    6,    7,
    QMetaType::Void, QMetaType::Double,    9,
    QMetaType::Void, QMetaType::Double,    9,
    QMetaType::Void, QMetaType::Double,    9,
    QMetaType::Void, QMetaType::Double,    9,
    QMetaType::Void, QMetaType::Double,    9,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void MainWindow::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        MainWindow *_t = static_cast<MainWindow *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->on_actionQuit_triggered(); break;
        case 1: _t->slot_addItemToTreeWidget(); break;
        case 2: _t->slot_wakeUpPinBox((*reinterpret_cast< QTreeWidgetItem*(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 3: _t->slot_setTX((*reinterpret_cast< double(*)>(_a[1]))); break;
        case 4: _t->slot_setTY((*reinterpret_cast< double(*)>(_a[1]))); break;
        case 5: _t->slot_setRM((*reinterpret_cast< double(*)>(_a[1]))); break;
        case 6: _t->slot_setSX((*reinterpret_cast< double(*)>(_a[1]))); break;
        case 7: _t->slot_setSY((*reinterpret_cast< double(*)>(_a[1]))); break;
        case 8: _t->slot_createT(); break;
        case 9: _t->slot_createR(); break;
        case 10: _t->slot_createS(); break;
        case 11: _t->slot_setGeo(); break;
        default: ;
        }
    }
}

const QMetaObject MainWindow::staticMetaObject = {
    { &QMainWindow::staticMetaObject, qt_meta_stringdata_MainWindow.data,
      qt_meta_data_MainWindow,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *MainWindow::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *MainWindow::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_MainWindow.stringdata0))
        return static_cast<void*>(const_cast< MainWindow*>(this));
    return QMainWindow::qt_metacast(_clname);
}

int MainWindow::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QMainWindow::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 12)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 12;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 12)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 12;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
