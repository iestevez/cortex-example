/****************************************************************************
** Meta object code from reading C++ file 'StimulatedEEG.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.12.3)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../StimulatedEEG.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#include <QtCore/QList>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'StimulatedEEG.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.12.3. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_StimulatedEEG_t {
    QByteArrayData data[24];
    char stringdata0[256];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_StimulatedEEG_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_StimulatedEEG_t qt_meta_stringdata_StimulatedEEG = {
    {
QT_MOC_LITERAL(0, 0, 13), // "StimulatedEEG"
QT_MOC_LITERAL(1, 14, 13), // "startStimulus"
QT_MOC_LITERAL(2, 28, 0), // ""
QT_MOC_LITERAL(3, 29, 11), // "onConnected"
QT_MOC_LITERAL(4, 41, 14), // "onDisconnected"
QT_MOC_LITERAL(5, 56, 15), // "onErrorReceived"
QT_MOC_LITERAL(6, 72, 6), // "method"
QT_MOC_LITERAL(7, 79, 4), // "code"
QT_MOC_LITERAL(8, 84, 5), // "error"
QT_MOC_LITERAL(9, 90, 15), // "onHeadsetsFound"
QT_MOC_LITERAL(10, 106, 14), // "QList<Headset>"
QT_MOC_LITERAL(11, 121, 8), // "headsets"
QT_MOC_LITERAL(12, 130, 16), // "onSessionCreated"
QT_MOC_LITERAL(13, 147, 5), // "token"
QT_MOC_LITERAL(14, 153, 9), // "sessionId"
QT_MOC_LITERAL(15, 163, 13), // "onSubscribeOk"
QT_MOC_LITERAL(16, 177, 3), // "sid"
QT_MOC_LITERAL(17, 181, 15), // "onUnsubscribeOk"
QT_MOC_LITERAL(18, 197, 3), // "msg"
QT_MOC_LITERAL(19, 201, 20), // "onStreamDataReceived"
QT_MOC_LITERAL(20, 222, 6), // "stream"
QT_MOC_LITERAL(21, 229, 4), // "time"
QT_MOC_LITERAL(22, 234, 4), // "data"
QT_MOC_LITERAL(23, 239, 16) // "onCloseSessionOk"

    },
    "StimulatedEEG\0startStimulus\0\0onConnected\0"
    "onDisconnected\0onErrorReceived\0method\0"
    "code\0error\0onHeadsetsFound\0QList<Headset>\0"
    "headsets\0onSessionCreated\0token\0"
    "sessionId\0onSubscribeOk\0sid\0onUnsubscribeOk\0"
    "msg\0onStreamDataReceived\0stream\0time\0"
    "data\0onCloseSessionOk"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_StimulatedEEG[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
      10,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,   64,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       3,    0,   65,    2, 0x08 /* Private */,
       4,    0,   66,    2, 0x08 /* Private */,
       5,    3,   67,    2, 0x08 /* Private */,
       9,    1,   74,    2, 0x08 /* Private */,
      12,    2,   77,    2, 0x08 /* Private */,
      15,    1,   82,    2, 0x08 /* Private */,
      17,    1,   85,    2, 0x08 /* Private */,
      19,    4,   88,    2, 0x08 /* Private */,
      23,    0,   97,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString, QMetaType::Int, QMetaType::QString,    6,    7,    8,
    QMetaType::Void, 0x80000000 | 10,   11,
    QMetaType::Void, QMetaType::QString, QMetaType::QString,   13,   14,
    QMetaType::Void, QMetaType::QString,   16,
    QMetaType::Void, QMetaType::QString,   18,
    QMetaType::Void, QMetaType::QString, QMetaType::QString, QMetaType::Double, QMetaType::QJsonArray,   14,   20,   21,   22,
    QMetaType::Void,

       0        // eod
};

void StimulatedEEG::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<StimulatedEEG *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->startStimulus(); break;
        case 1: _t->onConnected(); break;
        case 2: _t->onDisconnected(); break;
        case 3: _t->onErrorReceived((*reinterpret_cast< QString(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< QString(*)>(_a[3]))); break;
        case 4: _t->onHeadsetsFound((*reinterpret_cast< const QList<Headset>(*)>(_a[1]))); break;
        case 5: _t->onSessionCreated((*reinterpret_cast< QString(*)>(_a[1])),(*reinterpret_cast< QString(*)>(_a[2]))); break;
        case 6: _t->onSubscribeOk((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 7: _t->onUnsubscribeOk((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 8: _t->onStreamDataReceived((*reinterpret_cast< QString(*)>(_a[1])),(*reinterpret_cast< QString(*)>(_a[2])),(*reinterpret_cast< double(*)>(_a[3])),(*reinterpret_cast< const QJsonArray(*)>(_a[4]))); break;
        case 9: _t->onCloseSessionOk(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (StimulatedEEG::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&StimulatedEEG::startStimulus)) {
                *result = 0;
                return;
            }
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject StimulatedEEG::staticMetaObject = { {
    &QObject::staticMetaObject,
    qt_meta_stringdata_StimulatedEEG.data,
    qt_meta_data_StimulatedEEG,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *StimulatedEEG::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *StimulatedEEG::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_StimulatedEEG.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int StimulatedEEG::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
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

// SIGNAL 0
void StimulatedEEG::startStimulus()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
