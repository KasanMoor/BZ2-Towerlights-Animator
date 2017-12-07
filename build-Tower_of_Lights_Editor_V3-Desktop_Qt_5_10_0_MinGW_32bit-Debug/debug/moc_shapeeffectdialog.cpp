/****************************************************************************
** Meta object code from reading C++ file 'shapeeffectdialog.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.10.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../TowerLightsAnimator/shapeeffectdialog.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'shapeeffectdialog.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.10.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_shapeEffectDialog_t {
    QByteArrayData data[16];
    char stringdata0[314];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_shapeEffectDialog_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_shapeEffectDialog_t qt_meta_stringdata_shapeEffectDialog = {
    {
QT_MOC_LITERAL(0, 0, 17), // "shapeEffectDialog"
QT_MOC_LITERAL(1, 18, 8), // "accepted"
QT_MOC_LITERAL(2, 27, 0), // ""
QT_MOC_LITERAL(3, 28, 13), // "const effect*"
QT_MOC_LITERAL(4, 42, 21), // "on_buttonBox_accepted"
QT_MOC_LITERAL(5, 64, 24), // "on_pushButton_up_clicked"
QT_MOC_LITERAL(6, 89, 26), // "on_pushButton_down_clicked"
QT_MOC_LITERAL(7, 116, 26), // "on_pushButton_left_clicked"
QT_MOC_LITERAL(8, 143, 27), // "on_pushButton_right_clicked"
QT_MOC_LITERAL(9, 171, 27), // "on_pushButton_color_clicked"
QT_MOC_LITERAL(10, 199, 27), // "on_pushButton_clear_clicked"
QT_MOC_LITERAL(11, 227, 21), // "on_comboBox_activated"
QT_MOC_LITERAL(12, 249, 5), // "index"
QT_MOC_LITERAL(13, 255, 29), // "on_pushButton_color_2_clicked"
QT_MOC_LITERAL(14, 285, 22), // "on_noFill_stateChanged"
QT_MOC_LITERAL(15, 308, 5) // "state"

    },
    "shapeEffectDialog\0accepted\0\0const effect*\0"
    "on_buttonBox_accepted\0on_pushButton_up_clicked\0"
    "on_pushButton_down_clicked\0"
    "on_pushButton_left_clicked\0"
    "on_pushButton_right_clicked\0"
    "on_pushButton_color_clicked\0"
    "on_pushButton_clear_clicked\0"
    "on_comboBox_activated\0index\0"
    "on_pushButton_color_2_clicked\0"
    "on_noFill_stateChanged\0state"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_shapeEffectDialog[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
      11,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   69,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       4,    0,   72,    2, 0x08 /* Private */,
       5,    0,   73,    2, 0x08 /* Private */,
       6,    0,   74,    2, 0x08 /* Private */,
       7,    0,   75,    2, 0x08 /* Private */,
       8,    0,   76,    2, 0x08 /* Private */,
       9,    0,   77,    2, 0x08 /* Private */,
      10,    0,   78,    2, 0x08 /* Private */,
      11,    1,   79,    2, 0x08 /* Private */,
      13,    0,   82,    2, 0x08 /* Private */,
      14,    1,   83,    2, 0x08 /* Private */,

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
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,   15,

       0        // eod
};

void shapeEffectDialog::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        shapeEffectDialog *_t = static_cast<shapeEffectDialog *>(_o);
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
        case 9: _t->on_pushButton_color_2_clicked(); break;
        case 10: _t->on_noFill_stateChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            typedef void (shapeEffectDialog::*_t)(const effect * );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&shapeEffectDialog::accepted)) {
                *result = 0;
                return;
            }
        }
    }
}

const QMetaObject shapeEffectDialog::staticMetaObject = {
    { &QDialog::staticMetaObject, qt_meta_stringdata_shapeEffectDialog.data,
      qt_meta_data_shapeEffectDialog,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *shapeEffectDialog::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *shapeEffectDialog::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_shapeEffectDialog.stringdata0))
        return static_cast<void*>(this);
    return QDialog::qt_metacast(_clname);
}

int shapeEffectDialog::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
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

// SIGNAL 0
void shapeEffectDialog::accepted(const effect * _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
