/****************************************************************************
** Meta object code from reading C++ file 'smalldialogs.h'
**
** Created: Sun Aug 11 12:00:47 2013
**      by: The Qt Meta Object Compiler version 63 (Qt 4.8.4)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../src-QT4/smalldialogs.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'smalldialogs.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.4. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_OpenDialog[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
      12,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: signature, parameters, type, tag, flags
      12,   11,   11,   11, 0x05,

 // slots: signature, parameters, type, tag, flags
      33,   11,   11,   11, 0x08,
      47,   11,   11,   11, 0x08,
      61,   11,   11,   11, 0x08,
      75,   11,   11,   11, 0x08,
      88,   11,   11,   11, 0x08,
     101,   11,   11,   11, 0x08,
     114,   11,   11,   11, 0x08,
     133,   11,   11,   11, 0x08,
     151,   11,   11,   11, 0x08,
     169,   11,   11,   11, 0x08,
     192,   11,   11,   11, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_OpenDialog[] = {
    "OpenDialog\0\0internalSignal(bool)\0"
    "selectFileA()\0selectFileB()\0selectFileC()\0"
    "selectDirA()\0selectDirB()\0selectDirC()\0"
    "selectOutputName()\0selectOutputDir()\0"
    "internalSlot(int)\0inputFilenameChanged()\0"
    "slotSwapCopyNames(QAction*)\0"
};

void OpenDialog::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        OpenDialog *_t = static_cast<OpenDialog *>(_o);
        switch (_id) {
        case 0: _t->internalSignal((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 1: _t->selectFileA(); break;
        case 2: _t->selectFileB(); break;
        case 3: _t->selectFileC(); break;
        case 4: _t->selectDirA(); break;
        case 5: _t->selectDirB(); break;
        case 6: _t->selectDirC(); break;
        case 7: _t->selectOutputName(); break;
        case 8: _t->selectOutputDir(); break;
        case 9: _t->internalSlot((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 10: _t->inputFilenameChanged(); break;
        case 11: _t->slotSwapCopyNames((*reinterpret_cast< QAction*(*)>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData OpenDialog::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject OpenDialog::staticMetaObject = {
    { &QDialog::staticMetaObject, qt_meta_stringdata_OpenDialog,
      qt_meta_data_OpenDialog, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &OpenDialog::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *OpenDialog::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *OpenDialog::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_OpenDialog))
        return static_cast<void*>(const_cast< OpenDialog*>(this));
    return QDialog::qt_metacast(_clname);
}

int OpenDialog::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 12)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 12;
    }
    return _id;
}

// SIGNAL 0
void OpenDialog::internalSignal(bool _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}
static const uint qt_meta_data_FindDialog[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       1,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: signature, parameters, type, tag, flags
      12,   11,   11,   11, 0x05,

       0        // eod
};

static const char qt_meta_stringdata_FindDialog[] = {
    "FindDialog\0\0findNext()\0"
};

void FindDialog::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        FindDialog *_t = static_cast<FindDialog *>(_o);
        switch (_id) {
        case 0: _t->findNext(); break;
        default: ;
        }
    }
    Q_UNUSED(_a);
}

const QMetaObjectExtraData FindDialog::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject FindDialog::staticMetaObject = {
    { &QDialog::staticMetaObject, qt_meta_stringdata_FindDialog,
      qt_meta_data_FindDialog, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &FindDialog::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *FindDialog::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *FindDialog::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_FindDialog))
        return static_cast<void*>(const_cast< FindDialog*>(this));
    return QDialog::qt_metacast(_clname);
}

int FindDialog::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 1)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 1;
    }
    return _id;
}

// SIGNAL 0
void FindDialog::findNext()
{
    QMetaObject::activate(this, &staticMetaObject, 0, 0);
}
static const uint qt_meta_data_RegExpTester[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       1,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
      14,   13,   13,   13, 0x0a,

       0        // eod
};

static const char qt_meta_stringdata_RegExpTester[] = {
    "RegExpTester\0\0slotRecalc()\0"
};

void RegExpTester::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        RegExpTester *_t = static_cast<RegExpTester *>(_o);
        switch (_id) {
        case 0: _t->slotRecalc(); break;
        default: ;
        }
    }
    Q_UNUSED(_a);
}

const QMetaObjectExtraData RegExpTester::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject RegExpTester::staticMetaObject = {
    { &QDialog::staticMetaObject, qt_meta_stringdata_RegExpTester,
      qt_meta_data_RegExpTester, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &RegExpTester::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *RegExpTester::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *RegExpTester::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_RegExpTester))
        return static_cast<void*>(const_cast< RegExpTester*>(this));
    return QDialog::qt_metacast(_clname);
}

int RegExpTester::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 1)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 1;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
