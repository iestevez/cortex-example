/****************************************************************************
** Meta object code from reading C++ file 'Training.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.12.3)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../Training.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#include <QtCore/QList>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'Training.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.12.3. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_Training_t {
    QByteArrayData data[26];
    char stringdata0[262];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_Training_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_Training_t qt_meta_stringdata_Training = {
    {
QT_MOC_LITERAL(0, 0, 8), // "Training"
QT_MOC_LITERAL(1, 9, 11), // "onConnected"
QT_MOC_LITERAL(2, 21, 0), // ""
QT_MOC_LITERAL(3, 22, 14), // "onDisconnected"
QT_MOC_LITERAL(4, 37, 15), // "onErrorReceived"
QT_MOC_LITERAL(5, 53, 6), // "method"
QT_MOC_LITERAL(6, 60, 4), // "code"
QT_MOC_LITERAL(7, 65, 5), // "error"
QT_MOC_LITERAL(8, 71, 20), // "onGetDetectionInfoOk"
QT_MOC_LITERAL(9, 92, 7), // "actions"
QT_MOC_LITERAL(10, 100, 8), // "controls"
QT_MOC_LITERAL(11, 109, 6), // "events"
QT_MOC_LITERAL(12, 116, 15), // "onHeadsetsFound"
QT_MOC_LITERAL(13, 132, 14), // "QList<Headset>"
QT_MOC_LITERAL(14, 147, 8), // "headsets"
QT_MOC_LITERAL(15, 156, 16), // "onSessionCreated"
QT_MOC_LITERAL(16, 173, 5), // "token"
QT_MOC_LITERAL(17, 179, 9), // "sessionId"
QT_MOC_LITERAL(18, 189, 13), // "onSubscribeOk"
QT_MOC_LITERAL(19, 203, 3), // "sid"
QT_MOC_LITERAL(20, 207, 12), // "onTrainingOk"
QT_MOC_LITERAL(21, 220, 3), // "msg"
QT_MOC_LITERAL(22, 224, 20), // "onStreamDataReceived"
QT_MOC_LITERAL(23, 245, 6), // "stream"
QT_MOC_LITERAL(24, 252, 4), // "time"
QT_MOC_LITERAL(25, 257, 4) // "data"

    },
    "Training\0onConnected\0\0onDisconnected\0"
    "onErrorReceived\0method\0code\0error\0"
    "onGetDetectionInfoOk\0actions\0controls\0"
    "events\0onHeadsetsFound\0QList<Headset>\0"
    "headsets\0onSessionCreated\0token\0"
    "sessionId\0onSubscribeOk\0sid\0onTrainingOk\0"
    "msg\0onStreamDataReceived\0stream\0time\0"
    "data"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_Training[] = {

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
       3,    0,   60,    2, 0x08 /* Private */,
       4,    3,   61,    2, 0x08 /* Private */,
       8,    3,   68,    2, 0x08 /* Private */,
      12,    1,   75,    2, 0x08 /* Private */,
      15,    2,   78,    2, 0x08 /* Private */,
      18,    1,   83,    2, 0x08 /* Private */,
      20,    1,   86,    2, 0x08 /* Private */,
      22,    4,   89,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString, QMetaType::Int, QMetaType::QString,    5,    6,    7,
    QMetaType::Void, QMetaType::QStringList, QMetaType::QStringList, QMetaType::QStringList,    9,   10,   11,
    QMetaType::Void, 0x80000000 | 13,   14,
    QMetaType::Void, QMetaType::QString, QMetaType::QString,   16,   17,
    QMetaType::Void, QMetaType::QString,   19,
    QMetaType::Void, QMetaType::QString,   21,
    QMetaType::Void, QMetaType::QString, QMetaType::QString, QMetaType::Double, QMetaType::QJsonArray,   17,   23,   24,   25,

       0        // eod
};

void Training::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<Training *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->onConnected(); break;
        case 1: _t->onDisconnected(); break;
        case 2: _t->onErrorReceived((*reinterpret_cast< QString(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< QString(*)>(_a[3]))); break;
        case 3: _t->onGetDetectionInfoOk((*reinterpret_cast< QStringList(*)>(_a[1])),(*reinterpret_cast< QStringList(*)>(_a[2])),(*reinterpret_cast< QStringList(*)>(_a[3]))); break;
        case 4: _t->onHeadsetsFound((*reinterpret_cast< const QList<Headset>(*)>(_a[1]))); break;
        case 5: _t->onSessionCreated((*reinterpret_cast< QString(*)>(_a[1])),(*reinterpret_cast< QString(*)>(_a[2]))); break;
        case 6: _t->onSubscribeOk((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 7: _t->onTrainingOk((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 8: _t->onStreamDataReceived((*reinterpret_cast< QString(*)>(_a[1])),(*reinterpret_cast< QString(*)>(_a[2])),(*reinterpret_cast< double(*)>(_a[3])),(*reinterpret_cast< const QJsonArray(*)>(_a[4]))); break;
        default: ;
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject Training::staticMetaObject = { {
    &QObject::staticMetaObject,
    qt_meta_stringdata_Training.data,
    qt_meta_data_Training,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *Training::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *Training::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_Training.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int Training::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
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
