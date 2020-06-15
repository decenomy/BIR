/****************************************************************************
** Meta object code from reading C++ file 'masternodeswidget.h'
**
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "qt/pivx/masternodeswidget.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'masternodeswidget.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.13.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_MasterNodesWidget_t {
    QByteArrayData data[18];
    char stringdata0[228];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_MasterNodesWidget_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_MasterNodesWidget_t qt_meta_stringdata_MasterNodesWidget = {
    {
QT_MOC_LITERAL(0, 0, 17), // "MasterNodesWidget"
QT_MOC_LITERAL(1, 18, 17), // "onCreateMNClicked"
QT_MOC_LITERAL(2, 36, 0), // ""
QT_MOC_LITERAL(3, 37, 17), // "onStartAllClicked"
QT_MOC_LITERAL(4, 55, 4), // "type"
QT_MOC_LITERAL(5, 60, 11), // "changeTheme"
QT_MOC_LITERAL(6, 72, 12), // "isLightTheme"
QT_MOC_LITERAL(7, 85, 8), // "QString&"
QT_MOC_LITERAL(8, 94, 5), // "theme"
QT_MOC_LITERAL(9, 100, 11), // "onMNClicked"
QT_MOC_LITERAL(10, 112, 11), // "QModelIndex"
QT_MOC_LITERAL(11, 124, 5), // "index"
QT_MOC_LITERAL(12, 130, 15), // "onEditMNClicked"
QT_MOC_LITERAL(13, 146, 17), // "onDeleteMNClicked"
QT_MOC_LITERAL(14, 164, 15), // "onInfoMNClicked"
QT_MOC_LITERAL(15, 180, 15), // "updateListState"
QT_MOC_LITERAL(16, 196, 20), // "updateModelAndInform"
QT_MOC_LITERAL(17, 217, 10) // "informText"

    },
    "MasterNodesWidget\0onCreateMNClicked\0"
    "\0onStartAllClicked\0type\0changeTheme\0"
    "isLightTheme\0QString&\0theme\0onMNClicked\0"
    "QModelIndex\0index\0onEditMNClicked\0"
    "onDeleteMNClicked\0onInfoMNClicked\0"
    "updateListState\0updateModelAndInform\0"
    "informText"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_MasterNodesWidget[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       9,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   59,    2, 0x08 /* Private */,
       3,    1,   60,    2, 0x08 /* Private */,
       5,    2,   63,    2, 0x08 /* Private */,
       9,    1,   68,    2, 0x08 /* Private */,
      12,    0,   71,    2, 0x08 /* Private */,
      13,    0,   72,    2, 0x08 /* Private */,
      14,    0,   73,    2, 0x08 /* Private */,
      15,    0,   74,    2, 0x08 /* Private */,
      16,    1,   75,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,    4,
    QMetaType::Void, QMetaType::Bool, 0x80000000 | 7,    6,    8,
    QMetaType::Void, 0x80000000 | 10,   11,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString,   17,

       0        // eod
};

void MasterNodesWidget::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<MasterNodesWidget *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->onCreateMNClicked(); break;
        case 1: _t->onStartAllClicked((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 2: _t->changeTheme((*reinterpret_cast< bool(*)>(_a[1])),(*reinterpret_cast< QString(*)>(_a[2]))); break;
        case 3: _t->onMNClicked((*reinterpret_cast< const QModelIndex(*)>(_a[1]))); break;
        case 4: _t->onEditMNClicked(); break;
        case 5: _t->onDeleteMNClicked(); break;
        case 6: _t->onInfoMNClicked(); break;
        case 7: _t->updateListState(); break;
        case 8: _t->updateModelAndInform((*reinterpret_cast< QString(*)>(_a[1]))); break;
        default: ;
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject MasterNodesWidget::staticMetaObject = { {
    &PWidget::staticMetaObject,
    qt_meta_stringdata_MasterNodesWidget.data,
    qt_meta_data_MasterNodesWidget,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *MasterNodesWidget::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *MasterNodesWidget::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_MasterNodesWidget.stringdata0))
        return static_cast<void*>(this);
    return PWidget::qt_metacast(_clname);
}

int MasterNodesWidget::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = PWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 9)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 9;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 9)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 9;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
