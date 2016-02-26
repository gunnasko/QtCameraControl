/****************************************************************************
** Meta object code from reading C++ file 'QmlVideoPlayer.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.5.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../src/qml/QmlVideoPlayer.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'QmlVideoPlayer.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.5.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_VlcQmlVideoPlayer_t {
    QByteArrayData data[23];
    char stringdata0[235];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_VlcQmlVideoPlayer_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_VlcQmlVideoPlayer_t qt_meta_stringdata_VlcQmlVideoPlayer = {
    {
QT_MOC_LITERAL(0, 0, 17), // "VlcQmlVideoPlayer"
QT_MOC_LITERAL(1, 18, 13), // "volumeChanged"
QT_MOC_LITERAL(2, 32, 0), // ""
QT_MOC_LITERAL(3, 33, 12), // "stateChanged"
QT_MOC_LITERAL(4, 46, 15), // "seekableChanged"
QT_MOC_LITERAL(5, 62, 13), // "lengthChanged"
QT_MOC_LITERAL(6, 76, 11), // "timeChanged"
QT_MOC_LITERAL(7, 88, 15), // "positionChanged"
QT_MOC_LITERAL(8, 104, 22), // "seekableChangedPrivate"
QT_MOC_LITERAL(9, 127, 5), // "pause"
QT_MOC_LITERAL(10, 133, 4), // "play"
QT_MOC_LITERAL(11, 138, 4), // "stop"
QT_MOC_LITERAL(12, 143, 6), // "volume"
QT_MOC_LITERAL(13, 150, 11), // "aspectRatio"
QT_MOC_LITERAL(14, 162, 9), // "cropRatio"
QT_MOC_LITERAL(15, 172, 13), // "deinterlacing"
QT_MOC_LITERAL(16, 186, 3), // "url"
QT_MOC_LITERAL(17, 190, 8), // "autoplay"
QT_MOC_LITERAL(18, 199, 5), // "state"
QT_MOC_LITERAL(19, 205, 8), // "seekable"
QT_MOC_LITERAL(20, 214, 6), // "length"
QT_MOC_LITERAL(21, 221, 4), // "time"
QT_MOC_LITERAL(22, 226, 8) // "position"

    },
    "VlcQmlVideoPlayer\0volumeChanged\0\0"
    "stateChanged\0seekableChanged\0lengthChanged\0"
    "timeChanged\0positionChanged\0"
    "seekableChangedPrivate\0pause\0play\0"
    "stop\0volume\0aspectRatio\0cropRatio\0"
    "deinterlacing\0url\0autoplay\0state\0"
    "seekable\0length\0time\0position"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_VlcQmlVideoPlayer[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
      10,   14, // methods
      11,   76, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       6,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,   64,    2, 0x06 /* Public */,
       3,    0,   65,    2, 0x06 /* Public */,
       4,    0,   66,    2, 0x06 /* Public */,
       5,    0,   67,    2, 0x06 /* Public */,
       6,    0,   68,    2, 0x06 /* Public */,
       7,    0,   69,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       8,    1,   70,    2, 0x08 /* Private */,

 // methods: name, argc, parameters, tag, flags
       9,    0,   73,    2, 0x02 /* Public */,
      10,    0,   74,    2, 0x02 /* Public */,
      11,    0,   75,    2, 0x02 /* Public */,

 // signals: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void, QMetaType::Bool,    2,

 // methods: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

 // properties: name, type, flags
      12, QMetaType::Int, 0x00495103,
      13, QMetaType::QString, 0x00095103,
      14, QMetaType::QString, 0x00095103,
      15, QMetaType::QString, 0x00095103,
      16, QMetaType::QUrl, 0x00095103,
      17, QMetaType::Bool, 0x00095103,
      18, QMetaType::Int, 0x00495001,
      19, QMetaType::Bool, 0x00495001,
      20, QMetaType::Int, 0x00495001,
      21, QMetaType::Int, 0x00495103,
      22, QMetaType::Float, 0x00495103,

 // properties: notify_signal_id
       0,
       0,
       0,
       0,
       0,
       0,
       1,
       2,
       3,
       4,
       5,

       0        // eod
};

void VlcQmlVideoPlayer::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        VlcQmlVideoPlayer *_t = static_cast<VlcQmlVideoPlayer *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->volumeChanged(); break;
        case 1: _t->stateChanged(); break;
        case 2: _t->seekableChanged(); break;
        case 3: _t->lengthChanged(); break;
        case 4: _t->timeChanged(); break;
        case 5: _t->positionChanged(); break;
        case 6: _t->seekableChangedPrivate((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 7: _t->pause(); break;
        case 8: _t->play(); break;
        case 9: _t->stop(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (VlcQmlVideoPlayer::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&VlcQmlVideoPlayer::volumeChanged)) {
                *result = 0;
            }
        }
        {
            typedef void (VlcQmlVideoPlayer::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&VlcQmlVideoPlayer::stateChanged)) {
                *result = 1;
            }
        }
        {
            typedef void (VlcQmlVideoPlayer::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&VlcQmlVideoPlayer::seekableChanged)) {
                *result = 2;
            }
        }
        {
            typedef void (VlcQmlVideoPlayer::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&VlcQmlVideoPlayer::lengthChanged)) {
                *result = 3;
            }
        }
        {
            typedef void (VlcQmlVideoPlayer::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&VlcQmlVideoPlayer::timeChanged)) {
                *result = 4;
            }
        }
        {
            typedef void (VlcQmlVideoPlayer::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&VlcQmlVideoPlayer::positionChanged)) {
                *result = 5;
            }
        }
    }
#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty) {
        VlcQmlVideoPlayer *_t = static_cast<VlcQmlVideoPlayer *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< int*>(_v) = _t->volume(); break;
        case 1: *reinterpret_cast< QString*>(_v) = _t->aspectRatio(); break;
        case 2: *reinterpret_cast< QString*>(_v) = _t->cropRatio(); break;
        case 3: *reinterpret_cast< QString*>(_v) = _t->deinterlacing(); break;
        case 4: *reinterpret_cast< QUrl*>(_v) = _t->url(); break;
        case 5: *reinterpret_cast< bool*>(_v) = _t->autoplay(); break;
        case 6: *reinterpret_cast< int*>(_v) = _t->state(); break;
        case 7: *reinterpret_cast< bool*>(_v) = _t->seekable(); break;
        case 8: *reinterpret_cast< int*>(_v) = _t->length(); break;
        case 9: *reinterpret_cast< int*>(_v) = _t->time(); break;
        case 10: *reinterpret_cast< float*>(_v) = _t->position(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
        VlcQmlVideoPlayer *_t = static_cast<VlcQmlVideoPlayer *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: _t->setVolume(*reinterpret_cast< int*>(_v)); break;
        case 1: _t->setAspectRatio(*reinterpret_cast< QString*>(_v)); break;
        case 2: _t->setCropRatio(*reinterpret_cast< QString*>(_v)); break;
        case 3: _t->setDeinterlacing(*reinterpret_cast< QString*>(_v)); break;
        case 4: _t->setUrl(*reinterpret_cast< QUrl*>(_v)); break;
        case 5: _t->setAutoplay(*reinterpret_cast< bool*>(_v)); break;
        case 9: _t->setTime(*reinterpret_cast< int*>(_v)); break;
        case 10: _t->setPosition(*reinterpret_cast< float*>(_v)); break;
        default: break;
        }
    } else if (_c == QMetaObject::ResetProperty) {
    }
#endif // QT_NO_PROPERTIES
}

const QMetaObject VlcQmlVideoPlayer::staticMetaObject = {
    { &VlcQmlVideoObject::staticMetaObject, qt_meta_stringdata_VlcQmlVideoPlayer.data,
      qt_meta_data_VlcQmlVideoPlayer,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *VlcQmlVideoPlayer::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *VlcQmlVideoPlayer::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_VlcQmlVideoPlayer.stringdata0))
        return static_cast<void*>(const_cast< VlcQmlVideoPlayer*>(this));
    return VlcQmlVideoObject::qt_metacast(_clname);
}

int VlcQmlVideoPlayer::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = VlcQmlVideoObject::qt_metacall(_c, _id, _a);
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
#ifndef QT_NO_PROPERTIES
   else if (_c == QMetaObject::ReadProperty || _c == QMetaObject::WriteProperty
            || _c == QMetaObject::ResetProperty || _c == QMetaObject::RegisterPropertyMetaType) {
        qt_static_metacall(this, _c, _id, _a);
        _id -= 11;
    } else if (_c == QMetaObject::QueryPropertyDesignable) {
        _id -= 11;
    } else if (_c == QMetaObject::QueryPropertyScriptable) {
        _id -= 11;
    } else if (_c == QMetaObject::QueryPropertyStored) {
        _id -= 11;
    } else if (_c == QMetaObject::QueryPropertyEditable) {
        _id -= 11;
    } else if (_c == QMetaObject::QueryPropertyUser) {
        _id -= 11;
    }
#endif // QT_NO_PROPERTIES
    return _id;
}

// SIGNAL 0
void VlcQmlVideoPlayer::volumeChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 0, Q_NULLPTR);
}

// SIGNAL 1
void VlcQmlVideoPlayer::stateChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 1, Q_NULLPTR);
}

// SIGNAL 2
void VlcQmlVideoPlayer::seekableChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 2, Q_NULLPTR);
}

// SIGNAL 3
void VlcQmlVideoPlayer::lengthChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 3, Q_NULLPTR);
}

// SIGNAL 4
void VlcQmlVideoPlayer::timeChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 4, Q_NULLPTR);
}

// SIGNAL 5
void VlcQmlVideoPlayer::positionChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 5, Q_NULLPTR);
}
QT_END_MOC_NAMESPACE
