/****************************************************************************
** Meta object code from reading C++ file 'mainwindow.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.12.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../GroundStation1/mainwindow.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'mainwindow.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.12.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_MainWindow_t {
    QByteArrayData data[18];
    char stringdata0[267];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_MainWindow_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_MainWindow_t qt_meta_stringdata_MainWindow = {
    {
QT_MOC_LITERAL(0, 0, 10), // "MainWindow"
QT_MOC_LITERAL(1, 11, 8), // "atualiza"
QT_MOC_LITERAL(2, 20, 0), // ""
QT_MOC_LITERAL(3, 21, 23), // "on_btnStartStop_clicked"
QT_MOC_LITERAL(4, 45, 16), // "on_Modo1_clicked"
QT_MOC_LITERAL(5, 62, 16), // "on_Modo2_clicked"
QT_MOC_LITERAL(6, 79, 16), // "on_Modo3_clicked"
QT_MOC_LITERAL(7, 96, 16), // "on_Modo4_clicked"
QT_MOC_LITERAL(8, 113, 16), // "on_Modo5_clicked"
QT_MOC_LITERAL(9, 130, 16), // "on_Modo6_clicked"
QT_MOC_LITERAL(10, 147, 16), // "on_Modo7_clicked"
QT_MOC_LITERAL(11, 164, 16), // "on_Modo8_clicked"
QT_MOC_LITERAL(12, 181, 16), // "on_Modo9_clicked"
QT_MOC_LITERAL(13, 198, 9), // "WriteData"
QT_MOC_LITERAL(14, 208, 4), // "data"
QT_MOC_LITERAL(15, 213, 8), // "ReadData"
QT_MOC_LITERAL(16, 222, 20), // "on_pbConnect_clicked"
QT_MOC_LITERAL(17, 243, 23) // "on_pbDesconnect_clicked"

    },
    "MainWindow\0atualiza\0\0on_btnStartStop_clicked\0"
    "on_Modo1_clicked\0on_Modo2_clicked\0"
    "on_Modo3_clicked\0on_Modo4_clicked\0"
    "on_Modo5_clicked\0on_Modo6_clicked\0"
    "on_Modo7_clicked\0on_Modo8_clicked\0"
    "on_Modo9_clicked\0WriteData\0data\0"
    "ReadData\0on_pbConnect_clicked\0"
    "on_pbDesconnect_clicked"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_MainWindow[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
      15,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   89,    2, 0x08 /* Private */,
       3,    0,   90,    2, 0x08 /* Private */,
       4,    0,   91,    2, 0x08 /* Private */,
       5,    0,   92,    2, 0x08 /* Private */,
       6,    0,   93,    2, 0x08 /* Private */,
       7,    0,   94,    2, 0x08 /* Private */,
       8,    0,   95,    2, 0x08 /* Private */,
       9,    0,   96,    2, 0x08 /* Private */,
      10,    0,   97,    2, 0x08 /* Private */,
      11,    0,   98,    2, 0x08 /* Private */,
      12,    0,   99,    2, 0x08 /* Private */,
      13,    1,  100,    2, 0x08 /* Private */,
      15,    0,  103,    2, 0x08 /* Private */,
      16,    0,  104,    2, 0x08 /* Private */,
      17,    0,  105,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QByteArray,   14,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void MainWindow::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<MainWindow *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->atualiza(); break;
        case 1: _t->on_btnStartStop_clicked(); break;
        case 2: _t->on_Modo1_clicked(); break;
        case 3: _t->on_Modo2_clicked(); break;
        case 4: _t->on_Modo3_clicked(); break;
        case 5: _t->on_Modo4_clicked(); break;
        case 6: _t->on_Modo5_clicked(); break;
        case 7: _t->on_Modo6_clicked(); break;
        case 8: _t->on_Modo7_clicked(); break;
        case 9: _t->on_Modo8_clicked(); break;
        case 10: _t->on_Modo9_clicked(); break;
        case 11: _t->WriteData((*reinterpret_cast< const QByteArray(*)>(_a[1]))); break;
        case 12: _t->ReadData(); break;
        case 13: _t->on_pbConnect_clicked(); break;
        case 14: _t->on_pbDesconnect_clicked(); break;
        default: ;
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject MainWindow::staticMetaObject = { {
    &QMainWindow::staticMetaObject,
    qt_meta_stringdata_MainWindow.data,
    qt_meta_data_MainWindow,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *MainWindow::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *MainWindow::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_MainWindow.stringdata0))
        return static_cast<void*>(this);
    return QMainWindow::qt_metacast(_clname);
}

int MainWindow::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QMainWindow::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 15)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 15;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 15)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 15;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
