/****************************************************************************
** Meta object code from reading C++ file 'Audio.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.5.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../src/core/Audio.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'Audio.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.5.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_VlcAudio_t {
    QByteArrayData data[15];
    char stringdata0[144];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_VlcAudio_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_VlcAudio_t qt_meta_stringdata_VlcAudio = {
    {
QT_MOC_LITERAL(0, 0, 8), // "VlcAudio"
QT_MOC_LITERAL(1, 9, 14), // "volumeChangedF"
QT_MOC_LITERAL(2, 24, 0), // ""
QT_MOC_LITERAL(3, 25, 6), // "volume"
QT_MOC_LITERAL(4, 32, 13), // "volumeChanged"
QT_MOC_LITERAL(5, 46, 11), // "muteChanged"
QT_MOC_LITERAL(6, 58, 4), // "mute"
QT_MOC_LITERAL(7, 63, 9), // "setVolume"
QT_MOC_LITERAL(8, 73, 8), // "setTrack"
QT_MOC_LITERAL(9, 82, 5), // "track"
QT_MOC_LITERAL(10, 88, 10), // "toggleMute"
QT_MOC_LITERAL(11, 99, 10), // "setChannel"
QT_MOC_LITERAL(12, 110, 17), // "Vlc::AudioChannel"
QT_MOC_LITERAL(13, 128, 7), // "channel"
QT_MOC_LITERAL(14, 136, 7) // "setMute"

    },
    "VlcAudio\0volumeChangedF\0\0volume\0"
    "volumeChanged\0muteChanged\0mute\0setVolume\0"
    "setTrack\0track\0toggleMute\0setChannel\0"
    "Vlc::AudioChannel\0channel\0setMute"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_VlcAudio[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       8,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       3,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   54,    2, 0x06 /* Public */,
       4,    1,   57,    2, 0x06 /* Public */,
       5,    1,   60,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       7,    1,   63,    2, 0x0a /* Public */,
       8,    1,   66,    2, 0x0a /* Public */,
      10,    0,   69,    2, 0x0a /* Public */,
      11,    1,   70,    2, 0x0a /* Public */,
      14,    1,   73,    2, 0x0a /* Public */,

 // signals: parameters
    QMetaType::Void, QMetaType::Float,    3,
    QMetaType::Void, QMetaType::Int,    3,
    QMetaType::Void, QMetaType::Bool,    6,

 // slots: parameters
    QMetaType::Void, QMetaType::Int,    3,
    QMetaType::Void, QMetaType::Int,    9,
    QMetaType::Bool,
    QMetaType::Void, 0x80000000 | 12,   13,
    QMetaType::Void, QMetaType::Bool,    6,

       0        // eod
};

void VlcAudio::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        VlcAudio *_t = static_cast<VlcAudio *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->volumeChangedF((*reinterpret_cast< float(*)>(_a[1]))); break;
        case 1: _t->volumeChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 2: _t->muteChanged((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 3: _t->setVolume((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 4: _t->setTrack((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 5: { bool _r = _t->toggleMute();
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 6: _t->setChannel((*reinterpret_cast< Vlc::AudioChannel(*)>(_a[1]))); break;
        case 7: _t->setMute((*reinterpret_cast< bool(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (VlcAudio::*_t)(float );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&VlcAudio::volumeChangedF)) {
                *result = 0;
            }
        }
        {
            typedef void (VlcAudio::*_t)(int );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&VlcAudio::volumeChanged)) {
                *result = 1;
            }
        }
        {
            typedef void (VlcAudio::*_t)(bool );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&VlcAudio::muteChanged)) {
                *result = 2;
            }
        }
    }
}

const QMetaObject VlcAudio::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_VlcAudio.data,
      qt_meta_data_VlcAudio,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *VlcAudio::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *VlcAudio::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_VlcAudio.stringdata0))
        return static_cast<void*>(const_cast< VlcAudio*>(this));
    return QObject::qt_metacast(_clname);
}

int VlcAudio::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 8)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 8;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 8)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 8;
    }
    return _id;
}

// SIGNAL 0
void VlcAudio::volumeChangedF(float _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void VlcAudio::volumeChanged(int _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void VlcAudio::muteChanged(bool _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}
QT_END_MOC_NAMESPACE
