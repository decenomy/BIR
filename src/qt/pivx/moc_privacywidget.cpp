/****************************************************************************
** Meta object code from reading C++ file 'privacywidget.h'
**
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "qt/pivx/privacywidget.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'privacywidget.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.13.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_PrivacyWidget_t {
    QByteArrayData data[15];
    char stringdata0[198];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_PrivacyWidget_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_PrivacyWidget_t qt_meta_stringdata_PrivacyWidget = {
    {
QT_MOC_LITERAL(0, 0, 13), // "PrivacyWidget"
QT_MOC_LITERAL(1, 14, 11), // "changeTheme"
QT_MOC_LITERAL(2, 26, 0), // ""
QT_MOC_LITERAL(3, 27, 12), // "isLightTheme"
QT_MOC_LITERAL(4, 40, 8), // "QString&"
QT_MOC_LITERAL(5, 49, 5), // "theme"
QT_MOC_LITERAL(6, 55, 20), // "onCoinControlClicked"
QT_MOC_LITERAL(7, 76, 20), // "onRescanMintsClicked"
QT_MOC_LITERAL(8, 97, 18), // "onResetZeroClicked"
QT_MOC_LITERAL(9, 116, 18), // "onTotalZpivClicked"
QT_MOC_LITERAL(10, 135, 17), // "updateDisplayUnit"
QT_MOC_LITERAL(11, 153, 8), // "showList"
QT_MOC_LITERAL(12, 162, 13), // "onSendClicked"
QT_MOC_LITERAL(13, 176, 14), // "onMintSelected"
QT_MOC_LITERAL(14, 191, 6) // "isMint"

    },
    "PrivacyWidget\0changeTheme\0\0isLightTheme\0"
    "QString&\0theme\0onCoinControlClicked\0"
    "onRescanMintsClicked\0onResetZeroClicked\0"
    "onTotalZpivClicked\0updateDisplayUnit\0"
    "showList\0onSendClicked\0onMintSelected\0"
    "isMint"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_PrivacyWidget[] = {

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
       1,    2,   59,    2, 0x08 /* Private */,
       6,    0,   64,    2, 0x08 /* Private */,
       7,    0,   65,    2, 0x08 /* Private */,
       8,    0,   66,    2, 0x08 /* Private */,
       9,    0,   67,    2, 0x08 /* Private */,
      10,    0,   68,    2, 0x08 /* Private */,
      11,    0,   69,    2, 0x08 /* Private */,
      12,    0,   70,    2, 0x08 /* Private */,
      13,    1,   71,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void, QMetaType::Bool, 0x80000000 | 4,    3,    5,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Bool,   14,

       0        // eod
};

void PrivacyWidget::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<PrivacyWidget *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->changeTheme((*reinterpret_cast< bool(*)>(_a[1])),(*reinterpret_cast< QString(*)>(_a[2]))); break;
        case 1: _t->onCoinControlClicked(); break;
        case 2: _t->onRescanMintsClicked(); break;
        case 3: _t->onResetZeroClicked(); break;
        case 4: _t->onTotalZpivClicked(); break;
        case 5: _t->updateDisplayUnit(); break;
        case 6: _t->showList(); break;
        case 7: _t->onSendClicked(); break;
        case 8: _t->onMintSelected((*reinterpret_cast< bool(*)>(_a[1]))); break;
        default: ;
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject PrivacyWidget::staticMetaObject = { {
    &PWidget::staticMetaObject,
    qt_meta_stringdata_PrivacyWidget.data,
    qt_meta_data_PrivacyWidget,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *PrivacyWidget::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *PrivacyWidget::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_PrivacyWidget.stringdata0))
        return static_cast<void*>(this);
    return PWidget::qt_metacast(_clname);
}

int PrivacyWidget::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
