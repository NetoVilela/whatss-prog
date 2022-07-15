/****************************************************************************
** Meta object code from reading C++ file 'whatsprog_main.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.10.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../WhatsProg_interface/whatsprog_main.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'whatsprog_main.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.10.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_WhatsProgMain_t {
    QByteArrayData data[16];
    char stringdata0[381];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_WhatsProgMain_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_WhatsProgMain_t qt_meta_stringdata_WhatsProgMain = {
    {
QT_MOC_LITERAL(0, 0, 13), // "WhatsProgMain"
QT_MOC_LITERAL(1, 14, 9), // "signLogin"
QT_MOC_LITERAL(2, 24, 0), // ""
QT_MOC_LITERAL(3, 25, 11), // "NovoUsuario"
QT_MOC_LITERAL(4, 37, 20), // "signShowNovaConversa"
QT_MOC_LITERAL(5, 58, 31), // "on_actionNovo_usuario_triggered"
QT_MOC_LITERAL(6, 90, 36), // "on_actionUsuario_existente_tr..."
QT_MOC_LITERAL(7, 127, 30), // "on_actionDesconectar_triggered"
QT_MOC_LITERAL(8, 158, 23), // "on_actionSair_triggered"
QT_MOC_LITERAL(9, 182, 27), // "on_tableConversas_activated"
QT_MOC_LITERAL(10, 210, 5), // "index"
QT_MOC_LITERAL(11, 216, 25), // "on_tableConversas_clicked"
QT_MOC_LITERAL(12, 242, 33), // "on_lineEditMensagem_returnPre..."
QT_MOC_LITERAL(13, 276, 32), // "on_actionNova_conversa_triggered"
QT_MOC_LITERAL(14, 309, 35), // "on_actionRemover_conversa_tri..."
QT_MOC_LITERAL(15, 345, 35) // "on_actionApagar_mensagens_tri..."

    },
    "WhatsProgMain\0signLogin\0\0NovoUsuario\0"
    "signShowNovaConversa\0"
    "on_actionNovo_usuario_triggered\0"
    "on_actionUsuario_existente_triggered\0"
    "on_actionDesconectar_triggered\0"
    "on_actionSair_triggered\0"
    "on_tableConversas_activated\0index\0"
    "on_tableConversas_clicked\0"
    "on_lineEditMensagem_returnPressed\0"
    "on_actionNova_conversa_triggered\0"
    "on_actionRemover_conversa_triggered\0"
    "on_actionApagar_mensagens_triggered"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_WhatsProgMain[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
      12,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       2,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   74,    2, 0x06 /* Public */,
       4,    0,   77,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       5,    0,   78,    2, 0x08 /* Private */,
       6,    0,   79,    2, 0x08 /* Private */,
       7,    0,   80,    2, 0x08 /* Private */,
       8,    0,   81,    2, 0x08 /* Private */,
       9,    1,   82,    2, 0x08 /* Private */,
      11,    1,   85,    2, 0x08 /* Private */,
      12,    0,   88,    2, 0x08 /* Private */,
      13,    0,   89,    2, 0x08 /* Private */,
      14,    0,   90,    2, 0x08 /* Private */,
      15,    0,   91,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void, QMetaType::Bool,    3,
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QModelIndex,   10,
    QMetaType::Void, QMetaType::QModelIndex,   10,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void WhatsProgMain::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        WhatsProgMain *_t = static_cast<WhatsProgMain *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->signLogin((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 1: _t->signShowNovaConversa(); break;
        case 2: _t->on_actionNovo_usuario_triggered(); break;
        case 3: _t->on_actionUsuario_existente_triggered(); break;
        case 4: _t->on_actionDesconectar_triggered(); break;
        case 5: _t->on_actionSair_triggered(); break;
        case 6: _t->on_tableConversas_activated((*reinterpret_cast< const QModelIndex(*)>(_a[1]))); break;
        case 7: _t->on_tableConversas_clicked((*reinterpret_cast< const QModelIndex(*)>(_a[1]))); break;
        case 8: _t->on_lineEditMensagem_returnPressed(); break;
        case 9: _t->on_actionNova_conversa_triggered(); break;
        case 10: _t->on_actionRemover_conversa_triggered(); break;
        case 11: _t->on_actionApagar_mensagens_triggered(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            typedef void (WhatsProgMain::*_t)(bool );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&WhatsProgMain::signLogin)) {
                *result = 0;
                return;
            }
        }
        {
            typedef void (WhatsProgMain::*_t)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&WhatsProgMain::signShowNovaConversa)) {
                *result = 1;
                return;
            }
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject WhatsProgMain::staticMetaObject = {
    { &QMainWindow::staticMetaObject, qt_meta_stringdata_WhatsProgMain.data,
      qt_meta_data_WhatsProgMain,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *WhatsProgMain::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *WhatsProgMain::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_WhatsProgMain.stringdata0))
        return static_cast<void*>(this);
    return QMainWindow::qt_metacast(_clname);
}

int WhatsProgMain::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QMainWindow::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 12)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 12;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 12)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 12;
    }
    return _id;
}

// SIGNAL 0
void WhatsProgMain::signLogin(bool _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void WhatsProgMain::signShowNovaConversa()
{
    QMetaObject::activate(this, &staticMetaObject, 1, nullptr);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
