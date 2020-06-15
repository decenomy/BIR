/****************************************************************************
** Meta object code from reading C++ file 'navmenuwidget.h'
**
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "qt/pivx/navmenuwidget.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'navmenuwidget.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.13.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_NavMenuWidget_t {
    QByteArrayData data[13];
    char stringdata0[210];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_NavMenuWidget_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_NavMenuWidget_t qt_meta_stringdata_NavMenuWidget = {
    {
QT_MOC_LITERAL(0, 0, 13), // "NavMenuWidget"
QT_MOC_LITERAL(1, 14, 14), // "selectSettings"
QT_MOC_LITERAL(2, 29, 0), // ""
QT_MOC_LITERAL(3, 30, 28), // "onShowHideColdStakingChanged"
QT_MOC_LITERAL(4, 59, 4), // "show"
QT_MOC_LITERAL(5, 64, 13), // "onSendClicked"
QT_MOC_LITERAL(6, 78, 18), // "onDashboardClicked"
QT_MOC_LITERAL(7, 97, 16), // "onAddressClicked"
QT_MOC_LITERAL(8, 114, 20), // "onMasterNodesClicked"
QT_MOC_LITERAL(9, 135, 20), // "onColdStakingClicked"
QT_MOC_LITERAL(10, 156, 17), // "onSettingsClicked"
QT_MOC_LITERAL(11, 174, 16), // "onReceiveClicked"
QT_MOC_LITERAL(12, 191, 18) // "updateButtonStyles"

    },
    "NavMenuWidget\0selectSettings\0\0"
    "onShowHideColdStakingChanged\0show\0"
    "onSendClicked\0onDashboardClicked\0"
    "onAddressClicked\0onMasterNodesClicked\0"
    "onColdStakingClicked\0onSettingsClicked\0"
    "onReceiveClicked\0updateButtonStyles"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_NavMenuWidget[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
      10,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   64,    2, 0x0a /* Public */,
       3,    1,   65,    2, 0x0a /* Public */,
       5,    0,   68,    2, 0x08 /* Private */,
       6,    0,   69,    2, 0x08 /* Private */,
       7,    0,   70,    2, 0x08 /* Private */,
       8,    0,   71,    2, 0x08 /* Private */,
       9,    0,   72,    2, 0x08 /* Private */,
      10,    0,   73,    2, 0x08 /* Private */,
      11,    0,   74,    2, 0x08 /* Private */,
      12,    0,   75,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void, QMetaType::Bool,    4,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void NavMenuWidget::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<NavMenuWidget *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->selectSettings(); break;
        case 1: _t->onShowHideColdStakingChanged((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 2: _t->onSendClicked(); break;
        case 3: _t->onDashboardClicked(); break;
        case 4: _t->onAddressClicked(); break;
        case 5: _t->onMasterNodesClicked(); break;
        case 6: _t->onColdStakingClicked(); break;
        case 7: _t->onSettingsClicked(); break;
        case 8: _t->onReceiveClicked(); break;
        case 9: _t->updateButtonStyles(); break;
        default: ;
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject NavMenuWidget::staticMetaObject = { {
    &PWidget::staticMetaObject,
    qt_meta_stringdata_NavMenuWidget.data,
    qt_meta_data_NavMenuWidget,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *NavMenuWidget::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *NavMenuWidget::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_NavMenuWidget.stringdata0))
        return static_cast<void*>(this);
    return PWidget::qt_metacast(_clname);
}

int NavMenuWidget::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = PWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 10)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 10;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 10)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 10;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
