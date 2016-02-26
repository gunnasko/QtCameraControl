/****************************************************************************
** Meta object code from reading C++ file 'Equalizer.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.5.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../src/core/Equalizer.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'Equalizer.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.5.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_VlcEqualizer_t {
    QByteArrayData data[12];
    char stringdata0[133];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_VlcEqualizer_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_VlcEqualizer_t qt_meta_stringdata_VlcEqualizer = {
    {
QT_MOC_LITERAL(0, 0, 12), // "VlcEqualizer"
QT_MOC_LITERAL(1, 13, 12), // "presetLoaded"
QT_MOC_LITERAL(2, 26, 0), // ""
QT_MOC_LITERAL(3, 27, 14), // "loadFromPreset"
QT_MOC_LITERAL(4, 42, 5), // "index"
QT_MOC_LITERAL(5, 48, 25), // "setAmplificationForBandAt"
QT_MOC_LITERAL(6, 74, 3), // "amp"
QT_MOC_LITERAL(7, 78, 9), // "bandIndex"
QT_MOC_LITERAL(8, 88, 10), // "setEnabled"
QT_MOC_LITERAL(9, 99, 7), // "enabled"
QT_MOC_LITERAL(10, 107, 19), // "setPreamplification"
QT_MOC_LITERAL(11, 127, 5) // "value"

    },
    "VlcEqualizer\0presetLoaded\0\0loadFromPreset\0"
    "index\0setAmplificationForBandAt\0amp\0"
    "bandIndex\0setEnabled\0enabled\0"
    "setPreamplification\0value"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_VlcEqualizer[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       5,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,   39,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       3,    1,   40,    2, 0x0a /* Public */,
       5,    2,   43,    2, 0x0a /* Public */,
       8,    1,   48,    2, 0x0a /* Public */,
      10,    1,   51,    2, 0x0a /* Public */,

 // signals: parameters
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void, QMetaType::UInt,    4,
    QMetaType::Void, QMetaType::Float, QMetaType::UInt,    6,    7,
    QMetaType::Void, QMetaType::Bool,    9,
    QMetaType::Void, QMetaType::Float,   11,

       0        // eod
};

void VlcEqualizer::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        VlcEqualizer *_t = static_cast<VlcEqualizer *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->presetLoaded(); break;
        case 1: _t->loadFromPreset((*reinterpret_cast< uint(*)>(_a[1]))); break;
        case 2: _t->setAmplificationForBandAt((*reinterpret_cast< float(*)>(_a[1])),(*reinterpret_cast< uint(*)>(_a[2]))); break;
        case 3: _t->setEnabled((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 4: _t->setPreamplification((*reinterpret_cast< float(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (VlcEqualizer::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&VlcEqualizer::presetLoaded)) {
                *result = 0;
            }
        }
    }
}

const QMetaObject VlcEqualizer::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_VlcEqualizer.data,
      qt_meta_data_VlcEqualizer,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *VlcEqualizer::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *VlcEqualizer::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_VlcEqualizer.stringdata0))
        return static_cast<void*>(const_cast< VlcEqualizer*>(this));
    return QObject::qt_metacast(_clname);
}

int VlcEqualizer::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 5)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 5;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 5)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 5;
    }
    return _id;
}

// SIGNAL 0
void VlcEqualizer::presetLoaded()
{
    QMetaObject::activate(this, &staticMetaObject, 0, Q_NULLPTR);
}
QT_END_MOC_NAMESPACE
