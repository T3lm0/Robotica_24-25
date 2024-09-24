/****************************************************************************
** Meta object code from reading C++ file 'ejemplo1.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.2.4)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../ejemplo1.h"
#include <QtGui/qtextcursor.h>
#include <QScreen>
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'ejemplo1.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 68
#error "This file was generated using the moc from 6.2.4. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_ejemplo1_t {
    const uint offsetsAndSize[12];
    char stringdata0[64];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(offsetof(qt_meta_stringdata_ejemplo1_t, stringdata0) + ofs), len 
static const qt_meta_stringdata_ejemplo1_t qt_meta_stringdata_ejemplo1 = {
    {
QT_MOC_LITERAL(0, 8), // "ejemplo1"
QT_MOC_LITERAL(9, 12), // "doButtonStop"
QT_MOC_LITERAL(22, 0), // ""
QT_MOC_LITERAL(23, 13), // "updateCounter"
QT_MOC_LITERAL(37, 13), // "doButtonReset"
QT_MOC_LITERAL(51, 12) // "updateSlider"

    },
    "ejemplo1\0doButtonStop\0\0updateCounter\0"
    "doButtonReset\0updateSlider"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_ejemplo1[] = {

 // content:
      10,       // revision
       0,       // classname
       0,    0, // classinfo
       4,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags, initial metatype offsets
       1,    0,   38,    2, 0x0a,    1 /* Public */,
       3,    0,   39,    2, 0x0a,    2 /* Public */,
       4,    0,   40,    2, 0x0a,    3 /* Public */,
       5,    0,   41,    2, 0x0a,    4 /* Public */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void ejemplo1::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<ejemplo1 *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->doButtonStop(); break;
        case 1: _t->updateCounter(); break;
        case 2: _t->doButtonReset(); break;
        case 3: _t->updateSlider(); break;
        default: ;
        }
    }
    (void)_a;
}

const QMetaObject ejemplo1::staticMetaObject = { {
    QMetaObject::SuperData::link<QWidget::staticMetaObject>(),
    qt_meta_stringdata_ejemplo1.offsetsAndSize,
    qt_meta_data_ejemplo1,
    qt_static_metacall,
    nullptr,
qt_incomplete_metaTypeArray<qt_meta_stringdata_ejemplo1_t
, QtPrivate::TypeAndForceComplete<ejemplo1, std::true_type>
, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>


>,
    nullptr
} };


const QMetaObject *ejemplo1::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *ejemplo1::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_ejemplo1.stringdata0))
        return static_cast<void*>(this);
    if (!strcmp(_clname, "Ui_Counter"))
        return static_cast< Ui_Counter*>(this);
    return QWidget::qt_metacast(_clname);
}

int ejemplo1::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 4)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 4;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 4)
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
        _id -= 4;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
