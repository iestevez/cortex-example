/****************************************************************************
** Meta object code from reading C++ file 'Marker.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.12.3)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../Marker.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#include <QtCore/QList>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'Marker.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.12.3. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_Marker_t {
    QByteArrayData data[20];
    char stringdata0[235];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_Marker_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_Marker_t qt_meta_stringdata_Marker = {
    {
QT_MOC_LITERAL(0, 0, 6), // "Marker"
QT_MOC_LITERAL(1, 7, 11), // "onConnected"
QT_MOC_LITERAL(2, 19, 0), // ""
QT_MOC_LITERAL(3, 20, 14), // "onDisconnected"
QT_MOC_LITERAL(4, 35, 15), // "onErrorReceived"
QT_MOC_LITERAL(5, 51, 6), // "method"
QT_MOC_LITERAL(6, 58, 4), // "code"
QT_MOC_LITERAL(7, 63, 5), // "error"
QT_MOC_LITERAL(8, 69, 15), // "onHeadsetsFound"
QT_MOC_LITERAL(9, 85, 14), // "QList<Headset>"
QT_MOC_LITERAL(10, 100, 8), // "headsets"
QT_MOC_LITERAL(11, 109, 16), // "onSessionCreated"
QT_MOC_LITERAL(12, 126, 5), // "token"
QT_MOC_LITERAL(13, 132, 9), // "sessionId"
QT_MOC_LITERAL(14, 142, 13), // "injectMarker1"
QT_MOC_LITERAL(15, 156, 13), // "injectMarker2"
QT_MOC_LITERAL(16, 170, 17), // "injectStopMarker2"
QT_MOC_LITERAL(17, 188, 16), // "onInjectMarkerOK"
QT_MOC_LITERAL(18, 205, 12), // "closeSession"
QT_MOC_LITERAL(19, 218, 16) // "onCloseSessionOK"

    },
    "Marker\0onConnected\0\0onDisconnected\0"
    "onErrorReceived\0method\0code\0error\0"
    "onHeadsetsFound\0QList<Headset>\0headsets\0"
    "onSessionCreated\0token\0sessionId\0"
    "injectMarker1\0injectMarker2\0"
    "injectStopMarker2\0onInjectMarkerOK\0"
    "closeSession\0onCloseSessionOK"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_Marker[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
      11,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   69,    2, 0x08 /* Private */,
       3,    0,   70,    2, 0x08 /* Private */,
       4,    3,   71,    2, 0x08 /* Private */,
       8,    1,   78,    2, 0x08 /* Private */,
      11,    2,   81,    2, 0x08 /* Private */,
      14,    0,   86,    2, 0x08 /* Private */,
      15,    0,   87,    2, 0x08 /* Private */,
      16,    0,   88,    2, 0x08 /* Private */,
      17,    0,   89,    2, 0x08 /* Private */,
      18,    0,   90,    2, 0x08 /* Private */,
      19,    0,   91,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString, QMetaType::Int, QMetaType::QString,    5,    6,    7,
    QMetaType::Void, 0x80000000 | 9,   10,
    QMetaType::Void, QMetaType::QString, QMetaType::QString,   12,   13,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void Marker::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<Marker *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->onConnected(); break;
        case 1: _t->onDisconnected(); break;
        case 2: _t->onErrorReceived((*reinterpret_cast< QString(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< QString(*)>(_a[3]))); break;
        case 3: _t->onHeadsetsFound((*reinterpret_cast< const QList<Headset>(*)>(_a[1]))); break;
        case 4: _t->onSessionCreated((*reinterpret_cast< QString(*)>(_a[1])),(*reinterpret_cast< QString(*)>(_a[2]))); break;
        case 5: _t->injectMarker1(); break;
        case 6: _t->injectMarker2(); break;
        case 7: _t->injectStopMarker2(); break;
        case 8: _t->onInjectMarkerOK(); break;
        case 9: _t->closeSession(); break;
        case 10: _t->onCloseSessionOK(); break;
        default: ;
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject Marker::staticMetaObject = { {
    &QObject::staticMetaObject,
    qt_meta_stringdata_Marker.data,
    qt_meta_data_Marker,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *Marker::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *Marker::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_Marker.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int Marker::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 11)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 11;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 11)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 11;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
