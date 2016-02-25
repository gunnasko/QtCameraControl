/****************************************************************************
** Meta object code from reading C++ file 'Media.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.5.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../src/core/Media.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'Media.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.5.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_VlcMedia_t {
    QByteArrayData data[17];
    char stringdata0[162];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_VlcMedia_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_VlcMedia_t qt_meta_stringdata_VlcMedia = {
    {
QT_MOC_LITERAL(0, 0, 8), // "VlcMedia"
QT_MOC_LITERAL(1, 9, 11), // "metaChanged"
QT_MOC_LITERAL(2, 21, 0), // ""
QT_MOC_LITERAL(3, 22, 9), // "Vlc::Meta"
QT_MOC_LITERAL(4, 32, 4), // "meta"
QT_MOC_LITERAL(5, 37, 12), // "subitemAdded"
QT_MOC_LITERAL(6, 50, 15), // "libvlc_media_t*"
QT_MOC_LITERAL(7, 66, 7), // "subitem"
QT_MOC_LITERAL(8, 74, 15), // "durationChanged"
QT_MOC_LITERAL(9, 90, 8), // "duration"
QT_MOC_LITERAL(10, 99, 13), // "parsedChanged"
QT_MOC_LITERAL(11, 113, 6), // "status"
QT_MOC_LITERAL(12, 120, 5), // "freed"
QT_MOC_LITERAL(13, 126, 5), // "media"
QT_MOC_LITERAL(14, 132, 12), // "stateChanged"
QT_MOC_LITERAL(15, 145, 10), // "Vlc::State"
QT_MOC_LITERAL(16, 156, 5) // "state"

    },
    "VlcMedia\0metaChanged\0\0Vlc::Meta\0meta\0"
    "subitemAdded\0libvlc_media_t*\0subitem\0"
    "durationChanged\0duration\0parsedChanged\0"
    "status\0freed\0media\0stateChanged\0"
    "Vlc::State\0state"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_VlcMedia[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       6,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       6,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   44,    2, 0x06 /* Public */,
       5,    1,   47,    2, 0x06 /* Public */,
       8,    1,   50,    2, 0x06 /* Public */,
      10,    1,   53,    2, 0x06 /* Public */,
      12,    1,   56,    2, 0x06 /* Public */,
      14,    1,   59,    2, 0x06 /* Public */,

 // signals: parameters
    QMetaType::Void, 0x80000000 | 3,    4,
    QMetaType::Void, 0x80000000 | 6,    7,
    QMetaType::Void, QMetaType::Int,    9,
    QMetaType::Void, QMetaType::Int,   11,
    QMetaType::Void, 0x80000000 | 6,   13,
    QMetaType::Void, 0x80000000 | 15,   16,

       0        // eod
};

void VlcMedia::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        VlcMedia *_t = static_cast<VlcMedia *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->metaChanged((*reinterpret_cast< const Vlc::Meta(*)>(_a[1]))); break;
        case 1: _t->subitemAdded((*reinterpret_cast< libvlc_media_t*(*)>(_a[1]))); break;
        case 2: _t->durationChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 3: _t->parsedChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 4: _t->freed((*reinterpret_cast< libvlc_media_t*(*)>(_a[1]))); break;
        case 5: _t->stateChanged((*reinterpret_cast< const Vlc::State(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (VlcMedia::*_t)(const Vlc::Meta & );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&VlcMedia::metaChanged)) {
                *result = 0;
            }
        }
        {
            typedef void (VlcMedia::*_t)(libvlc_media_t * );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&VlcMedia::subitemAdded)) {
                *result = 1;
            }
        }
        {
            typedef void (VlcMedia::*_t)(int );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&VlcMedia::durationChanged)) {
                *result = 2;
            }
        }
        {
            typedef void (VlcMedia::*_t)(int );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&VlcMedia::parsedChanged)) {
                *result = 3;
            }
        }
        {
            typedef void (VlcMedia::*_t)(libvlc_media_t * );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&VlcMedia::freed)) {
                *result = 4;
            }
        }
        {
            typedef void (VlcMedia::*_t)(const Vlc::State & );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&VlcMedia::stateChanged)) {
                *result = 5;
            }
        }
    }
}

const QMetaObject VlcMedia::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_VlcMedia.data,
      qt_meta_data_VlcMedia,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *VlcMedia::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *VlcMedia::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_VlcMedia.stringdata0))
        return static_cast<void*>(const_cast< VlcMedia*>(this));
    return QObject::qt_metacast(_clname);
}

int VlcMedia::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 6)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 6;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 6)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 6;
    }
    return _id;
}

// SIGNAL 0
void VlcMedia::metaChanged(const Vlc::Meta & _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void VlcMedia::subitemAdded(libvlc_media_t * _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void VlcMedia::durationChanged(int _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}

// SIGNAL 3
void VlcMedia::parsedChanged(int _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 3, _a);
}

// SIGNAL 4
void VlcMedia::freed(libvlc_media_t * _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 4, _a);
}

// SIGNAL 5
void VlcMedia::stateChanged(const Vlc::State & _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 5, _a);
}
QT_END_MOC_NAMESPACE
