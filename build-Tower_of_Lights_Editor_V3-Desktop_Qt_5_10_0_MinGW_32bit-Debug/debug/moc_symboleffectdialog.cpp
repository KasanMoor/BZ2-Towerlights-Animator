/****************************************************************************
** Meta object code from reading C++ file 'symboleffectdialog.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.10.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../TowerLightsAnimator/symboleffectdialog.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'symboleffectdialog.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.10.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_symbolEffectDialog_t {
    QByteArrayData data[13];
    char stringdata0[256];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_symbolEffectDialog_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_symbolEffectDialog_t qt_meta_stringdata_symbolEffectDialog = {
    {
QT_MOC_LITERAL(0, 0, 18), // "symbolEffectDialog"
QT_MOC_LITERAL(1, 19, 8), // "accepted"
QT_MOC_LITERAL(2, 28, 0), // ""
QT_MOC_LITERAL(3, 29, 13), // "const effect*"
QT_MOC_LITERAL(4, 43, 21), // "on_buttonBox_accepted"
QT_MOC_LITERAL(5, 65, 24), // "on_pushButton_up_clicked"
QT_MOC_LITERAL(6, 90, 26), // "on_pushButton_down_clicked"
QT_MOC_LITERAL(7, 117, 26), // "on_pushButton_left_clicked"
QT_MOC_LITERAL(8, 144, 27), // "on_pushButton_right_clicked"
QT_MOC_LITERAL(9, 172, 27), // "on_pushButton_color_clicked"
QT_MOC_LITERAL(10, 200, 27), // "on_pushButton_clear_clicked"
QT_MOC_LITERAL(11, 228, 21), // "on_comboBox_activated"
QT_MOC_LITERAL(12, 250, 5) // "index"

    },
    "symbolEffectDialog\0accepted\0\0const effect*\0"
    "on_buttonBox_accepted\0on_pushButton_up_clicked\0"
    "on_pushButton_down_clicked\0"
    "on_pushButton_left_clicked\0"
    "on_pushButton_right_clicked\0"
    "on_pushButton_color_clicked\0"
    "on_pushButton_clear_clicked\0"
    "on_comboBox_activated\0index"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_symbolEffectDialog[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       9,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   59,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       4,    0,   62,    2, 0x08 /* Private */,
       5,    0,   63,    2, 0x08 /* Private */,
       6,    0,   64,    2, 0x08 /* Private */,
       7,    0,   65,    2, 0x08 /* Private */,
       8,    0,   66,    2, 0x08 /* Private */,
       9,    0,   67,    2, 0x08 /* Private */,
      10,    0,   68,    2, 0x08 /* Private */,
      11,    1,   69,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void, 0x80000000 | 3,    2,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,   12,

       0        // eod
};

void symbolEffectDialog::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        symbolEffectDialog *_t = static_cast<symbolEffectDialog *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->accepted((*reinterpret_cast< const effect*(*)>(_a[1]))); break;
        case 1: _t->on_buttonBox_accepted(); break;
        case 2: _t->on_pushButton_up_clicked(); break;
        case 3: _t->on_pushButton_down_clicked(); break;
        case 4: _t->on_pushButton_left_clicked(); break;
        case 5: _t->on_pushButton_right_clicked(); break;
        case 6: _t->on_pushButton_color_clicked(); break;
        case 7: _t->on_pushButton_clear_clicked(); break;
        case 8: _t->on_comboBox_activated((*reinterpret_cast< int(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            typedef void (symbolEffectDialog::*_t)(const effect * );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&symbolEffectDialog::accepted)) {
                *result = 0;
                return;
            }
        }
    }
}

const QMetaObject symbolEffectDialog::staticMetaObject = {
    { &QDialog::staticMetaObject, qt_meta_stringdata_symbolEffectDialog.data,
      qt_meta_data_symbolEffectDialog,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *symbolEffectDialog::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *symbolEffectDialog::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_symbolEffectDialog.stringdata0))
        return static_cast<void*>(this);
    return QDialog::qt_metacast(_clname);
}

int symbolEffectDialog::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
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

// SIGNAL 0
void symbolEffectDialog::accepted(const effect * _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
