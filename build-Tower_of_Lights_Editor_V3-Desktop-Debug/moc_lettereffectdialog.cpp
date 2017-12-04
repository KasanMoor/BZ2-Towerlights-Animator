/****************************************************************************
** Meta object code from reading C++ file 'lettereffectdialog.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.9.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../TowerLightsAnimator/lettereffectdialog.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'lettereffectdialog.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.9.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_letterEffectDialog_t {
    QByteArrayData data[18];
    char stringdata0[391];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_letterEffectDialog_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_letterEffectDialog_t qt_meta_stringdata_letterEffectDialog = {
    {
QT_MOC_LITERAL(0, 0, 18), // "letterEffectDialog"
QT_MOC_LITERAL(1, 19, 8), // "accepted"
QT_MOC_LITERAL(2, 28, 0), // ""
QT_MOC_LITERAL(3, 29, 13), // "const effect*"
QT_MOC_LITERAL(4, 43, 8), // "rejected"
QT_MOC_LITERAL(5, 52, 21), // "on_buttonBox_accepted"
QT_MOC_LITERAL(6, 74, 21), // "on_buttonBox_rejected"
QT_MOC_LITERAL(7, 96, 34), // "on_comboLetter_currentIndexCh..."
QT_MOC_LITERAL(8, 131, 4), // "text"
QT_MOC_LITERAL(9, 136, 25), // "on_btnLetterColor_clicked"
QT_MOC_LITERAL(10, 162, 24), // "on_pushButton_up_clicked"
QT_MOC_LITERAL(11, 187, 27), // "on_pushButton_right_clicked"
QT_MOC_LITERAL(12, 215, 26), // "on_pushButton_down_clicked"
QT_MOC_LITERAL(13, 242, 26), // "on_pushButton_left_clicked"
QT_MOC_LITERAL(14, 269, 29), // "on_pushButton_upright_clicked"
QT_MOC_LITERAL(15, 299, 31), // "on_pushButton_downright_clicked"
QT_MOC_LITERAL(16, 331, 30), // "on_pushButton_downleft_clicked"
QT_MOC_LITERAL(17, 362, 28) // "on_pushButton_upleft_clicked"

    },
    "letterEffectDialog\0accepted\0\0const effect*\0"
    "rejected\0on_buttonBox_accepted\0"
    "on_buttonBox_rejected\0"
    "on_comboLetter_currentIndexChanged\0"
    "text\0on_btnLetterColor_clicked\0"
    "on_pushButton_up_clicked\0"
    "on_pushButton_right_clicked\0"
    "on_pushButton_down_clicked\0"
    "on_pushButton_left_clicked\0"
    "on_pushButton_upright_clicked\0"
    "on_pushButton_downright_clicked\0"
    "on_pushButton_downleft_clicked\0"
    "on_pushButton_upleft_clicked"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_letterEffectDialog[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
      14,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       2,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   84,    2, 0x06 /* Public */,
       4,    0,   87,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       5,    0,   88,    2, 0x08 /* Private */,
       6,    0,   89,    2, 0x08 /* Private */,
       7,    1,   90,    2, 0x08 /* Private */,
       9,    0,   93,    2, 0x08 /* Private */,
      10,    0,   94,    2, 0x08 /* Private */,
      11,    0,   95,    2, 0x08 /* Private */,
      12,    0,   96,    2, 0x08 /* Private */,
      13,    0,   97,    2, 0x08 /* Private */,
      14,    0,   98,    2, 0x08 /* Private */,
      15,    0,   99,    2, 0x08 /* Private */,
      16,    0,  100,    2, 0x08 /* Private */,
      17,    0,  101,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void, 0x80000000 | 3,    2,
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString,    8,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void letterEffectDialog::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        letterEffectDialog *_t = static_cast<letterEffectDialog *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->accepted((*reinterpret_cast< const effect*(*)>(_a[1]))); break;
        case 1: _t->rejected(); break;
        case 2: _t->on_buttonBox_accepted(); break;
        case 3: _t->on_buttonBox_rejected(); break;
        case 4: _t->on_comboLetter_currentIndexChanged((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 5: _t->on_btnLetterColor_clicked(); break;
        case 6: _t->on_pushButton_up_clicked(); break;
        case 7: _t->on_pushButton_right_clicked(); break;
        case 8: _t->on_pushButton_down_clicked(); break;
        case 9: _t->on_pushButton_left_clicked(); break;
        case 10: _t->on_pushButton_upright_clicked(); break;
        case 11: _t->on_pushButton_downright_clicked(); break;
        case 12: _t->on_pushButton_downleft_clicked(); break;
        case 13: _t->on_pushButton_upleft_clicked(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (letterEffectDialog::*_t)(const effect * );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&letterEffectDialog::accepted)) {
                *result = 0;
                return;
            }
        }
        {
            typedef void (letterEffectDialog::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&letterEffectDialog::rejected)) {
                *result = 1;
                return;
            }
        }
    }
}

const QMetaObject letterEffectDialog::staticMetaObject = {
    { &QDialog::staticMetaObject, qt_meta_stringdata_letterEffectDialog.data,
      qt_meta_data_letterEffectDialog,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *letterEffectDialog::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *letterEffectDialog::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_letterEffectDialog.stringdata0))
        return static_cast<void*>(this);
    return QDialog::qt_metacast(_clname);
}

int letterEffectDialog::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 14)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 14;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 14)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 14;
    }
    return _id;
}

// SIGNAL 0
void letterEffectDialog::accepted(const effect * _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void letterEffectDialog::rejected()
{
    QMetaObject::activate(this, &staticMetaObject, 1, nullptr);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
