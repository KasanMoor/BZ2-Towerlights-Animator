/****************************************************************************
** Meta object code from reading C++ file 'cell.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.7.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../Tower_of_Lights_Editor_V3/cell.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'cell.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.7.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_CellWidget_t {
    QByteArrayData data[10];
    char stringdata0[74];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_CellWidget_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_CellWidget_t qt_meta_stringdata_CellWidget = {
    {
QT_MOC_LITERAL(0, 0, 10), // "CellWidget"
QT_MOC_LITERAL(1, 11, 12), // "colorChanged"
QT_MOC_LITERAL(2, 24, 0), // ""
QT_MOC_LITERAL(3, 25, 3), // "row"
QT_MOC_LITERAL(4, 29, 3), // "col"
QT_MOC_LITERAL(5, 33, 5), // "color"
QT_MOC_LITERAL(6, 39, 7), // "clicked"
QT_MOC_LITERAL(7, 47, 3), // "btn"
QT_MOC_LITERAL(8, 51, 13), // "doubleClicked"
QT_MOC_LITERAL(9, 65, 8) // "selected"

    },
    "CellWidget\0colorChanged\0\0row\0col\0color\0"
    "clicked\0btn\0doubleClicked\0selected"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_CellWidget[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       4,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       4,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    3,   34,    2, 0x06 /* Public */,
       6,    3,   41,    2, 0x06 /* Public */,
       8,    2,   48,    2, 0x06 /* Public */,
       9,    2,   53,    2, 0x06 /* Public */,

 // signals: parameters
    QMetaType::Void, QMetaType::Int, QMetaType::Int, QMetaType::QColor,    3,    4,    5,
    QMetaType::Void, QMetaType::Int, QMetaType::Int, QMetaType::Char,    3,    4,    7,
    QMetaType::Void, QMetaType::Char, QMetaType::QColor,    7,    2,
    QMetaType::Void, QMetaType::Int, QMetaType::Int,    3,    4,

       0        // eod
};

void CellWidget::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        CellWidget *_t = static_cast<CellWidget *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->colorChanged((*reinterpret_cast< const int(*)>(_a[1])),(*reinterpret_cast< const int(*)>(_a[2])),(*reinterpret_cast< QColor(*)>(_a[3]))); break;
        case 1: _t->clicked((*reinterpret_cast< const int(*)>(_a[1])),(*reinterpret_cast< const int(*)>(_a[2])),(*reinterpret_cast< const char(*)>(_a[3]))); break;
        case 2: _t->doubleClicked((*reinterpret_cast< const char(*)>(_a[1])),(*reinterpret_cast< const QColor(*)>(_a[2]))); break;
        case 3: _t->selected((*reinterpret_cast< const int(*)>(_a[1])),(*reinterpret_cast< const int(*)>(_a[2]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (CellWidget::*_t)(const int , const int , QColor );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&CellWidget::colorChanged)) {
                *result = 0;
                return;
            }
        }
        {
            typedef void (CellWidget::*_t)(const int , const int , const char );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&CellWidget::clicked)) {
                *result = 1;
                return;
            }
        }
        {
            typedef void (CellWidget::*_t)(const char , const QColor );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&CellWidget::doubleClicked)) {
                *result = 2;
                return;
            }
        }
        {
            typedef void (CellWidget::*_t)(const int , const int );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&CellWidget::selected)) {
                *result = 3;
                return;
            }
        }
    }
}

const QMetaObject CellWidget::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_CellWidget.data,
      qt_meta_data_CellWidget,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *CellWidget::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *CellWidget::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_CellWidget.stringdata0))
        return static_cast<void*>(const_cast< CellWidget*>(this));
    return QWidget::qt_metacast(_clname);
}

int CellWidget::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 4)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 4;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 4)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 4;
    }
    return _id;
}

// SIGNAL 0
void CellWidget::colorChanged(const int _t1, const int _t2, QColor _t3)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)), const_cast<void*>(reinterpret_cast<const void*>(&_t3)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void CellWidget::clicked(const int _t1, const int _t2, const char _t3)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)), const_cast<void*>(reinterpret_cast<const void*>(&_t3)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void CellWidget::doubleClicked(const char _t1, const QColor _t2)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}

// SIGNAL 3
void CellWidget::selected(const int _t1, const int _t2)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 3, _a);
}
struct qt_meta_stringdata_Thumbnail_t {
    QByteArrayData data[4];
    char stringdata0[28];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_Thumbnail_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_Thumbnail_t qt_meta_stringdata_Thumbnail = {
    {
QT_MOC_LITERAL(0, 0, 9), // "Thumbnail"
QT_MOC_LITERAL(1, 10, 7), // "clicked"
QT_MOC_LITERAL(2, 18, 0), // ""
QT_MOC_LITERAL(3, 19, 8) // "long int"

    },
    "Thumbnail\0clicked\0\0long int"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_Thumbnail[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       1,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   19,    2, 0x06 /* Public */,

 // signals: parameters
    QMetaType::Void, 0x80000000 | 3,    2,

       0        // eod
};

void Thumbnail::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Thumbnail *_t = static_cast<Thumbnail *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->clicked((*reinterpret_cast< const long int(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (Thumbnail::*_t)(const long int );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&Thumbnail::clicked)) {
                *result = 0;
                return;
            }
        }
    }
}

const QMetaObject Thumbnail::staticMetaObject = {
    { &QPushButton::staticMetaObject, qt_meta_stringdata_Thumbnail.data,
      qt_meta_data_Thumbnail,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *Thumbnail::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *Thumbnail::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_Thumbnail.stringdata0))
        return static_cast<void*>(const_cast< Thumbnail*>(this));
    return QPushButton::qt_metacast(_clname);
}

int Thumbnail::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QPushButton::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 1)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 1;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 1)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 1;
    }
    return _id;
}

// SIGNAL 0
void Thumbnail::clicked(const long int _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}
struct qt_meta_stringdata_interactableArea_t {
    QByteArrayData data[4];
    char stringdata0[35];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_interactableArea_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_interactableArea_t qt_meta_stringdata_interactableArea = {
    {
QT_MOC_LITERAL(0, 0, 16), // "interactableArea"
QT_MOC_LITERAL(1, 17, 7), // "clicked"
QT_MOC_LITERAL(2, 25, 0), // ""
QT_MOC_LITERAL(3, 26, 8) // "long int"

    },
    "interactableArea\0clicked\0\0long int"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_interactableArea[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       1,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   19,    2, 0x06 /* Public */,

 // signals: parameters
    QMetaType::Void, 0x80000000 | 3,    2,

       0        // eod
};

void interactableArea::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        interactableArea *_t = static_cast<interactableArea *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->clicked((*reinterpret_cast< const long int(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (interactableArea::*_t)(const long int );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&interactableArea::clicked)) {
                *result = 0;
                return;
            }
        }
    }
}

const QMetaObject interactableArea::staticMetaObject = {
    { &QScrollArea::staticMetaObject, qt_meta_stringdata_interactableArea.data,
      qt_meta_data_interactableArea,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *interactableArea::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *interactableArea::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_interactableArea.stringdata0))
        return static_cast<void*>(const_cast< interactableArea*>(this));
    return QScrollArea::qt_metacast(_clname);
}

int interactableArea::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QScrollArea::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 1)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 1;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 1)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 1;
    }
    return _id;
}

// SIGNAL 0
void interactableArea::clicked(const long int _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}
QT_END_MOC_NAMESPACE
