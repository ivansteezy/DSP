/****************************************************************************
** Meta object code from reading C++ file 'mainviewmodel.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.12.3)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../DSP/DSPCore/mainviewmodel.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'mainviewmodel.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.12.3. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_MainViewModel_t {
    QByteArrayData data[7];
    char stringdata0[60];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_MainViewModel_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_MainViewModel_t qt_meta_stringdata_MainViewModel = {
    {
QT_MOC_LITERAL(0, 0, 13), // "MainViewModel"
QT_MOC_LITERAL(1, 14, 11), // "textChanged"
QT_MOC_LITERAL(2, 26, 0), // ""
QT_MOC_LITERAL(3, 27, 4), // "text"
QT_MOC_LITERAL(4, 32, 12), // "showSettings"
QT_MOC_LITERAL(5, 45, 7), // "setText"
QT_MOC_LITERAL(6, 53, 6) // "parent"

    },
    "MainViewModel\0textChanged\0\0text\0"
    "showSettings\0setText\0parent"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_MainViewModel[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       3,   14, // methods
       1,   40, // properties
       0,    0, // enums/sets
       2,   44, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   29,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       4,    0,   32,    2, 0x0a /* Public */,
       5,    1,   33,    2, 0x0a /* Public */,

 // signals: parameters
    QMetaType::Void, QMetaType::QString,    3,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString,    3,

 // constructors: parameters
    0x80000000 | 2, QMetaType::QObjectStar,    6,
    0x80000000 | 2,

 // properties: name, type, flags
       3, QMetaType::QString, 0x00495103,

 // properties: notify_signal_id
       0,

 // constructors: name, argc, parameters, tag, flags
       0,    1,   36,    2, 0x0e /* Public */,
       0,    0,   39,    2, 0x2e /* Public | MethodCloned */,

       0        // eod
};

void MainViewModel::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::CreateInstance) {
        switch (_id) {
        case 0: { MainViewModel *_r = new MainViewModel((*reinterpret_cast< QObject*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast<QObject**>(_a[0]) = _r; } break;
        case 1: { MainViewModel *_r = new MainViewModel();
            if (_a[0]) *reinterpret_cast<QObject**>(_a[0]) = _r; } break;
        default: break;
        }
    } else if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<MainViewModel *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->textChanged((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 1: _t->showSettings(); break;
        case 2: _t->setText((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (MainViewModel::*)(const QString & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&MainViewModel::textChanged)) {
                *result = 0;
                return;
            }
        }
    }
#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty) {
        auto *_t = static_cast<MainViewModel *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< QString*>(_v) = _t->text(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
        auto *_t = static_cast<MainViewModel *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: _t->setText(*reinterpret_cast< QString*>(_v)); break;
        default: break;
        }
    } else if (_c == QMetaObject::ResetProperty) {
    }
#endif // QT_NO_PROPERTIES
}

QT_INIT_METAOBJECT const QMetaObject MainViewModel::staticMetaObject = { {
    &QtMvvm::ViewModel::staticMetaObject,
    qt_meta_stringdata_MainViewModel.data,
    qt_meta_data_MainViewModel,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *MainViewModel::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *MainViewModel::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_MainViewModel.stringdata0))
        return static_cast<void*>(this);
    return QtMvvm::ViewModel::qt_metacast(_clname);
}

int MainViewModel::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QtMvvm::ViewModel::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 3)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 3;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 3)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 3;
    }
#ifndef QT_NO_PROPERTIES
   else if (_c == QMetaObject::ReadProperty || _c == QMetaObject::WriteProperty
            || _c == QMetaObject::ResetProperty || _c == QMetaObject::RegisterPropertyMetaType) {
        qt_static_metacall(this, _c, _id, _a);
        _id -= 1;
    } else if (_c == QMetaObject::QueryPropertyDesignable) {
        _id -= 1;
    } else if (_c == QMetaObject::QueryPropertyScriptable) {
        _id -= 1;
    } else if (_c == QMetaObject::QueryPropertyStored) {
        _id -= 1;
    } else if (_c == QMetaObject::QueryPropertyEditable) {
        _id -= 1;
    } else if (_c == QMetaObject::QueryPropertyUser) {
        _id -= 1;
    }
#endif // QT_NO_PROPERTIES
    return _id;
}

// SIGNAL 0
void MainViewModel::textChanged(const QString & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
