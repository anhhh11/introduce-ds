/****************************************************************************
** Meta object code from reading C++ file 'kdiff3_part.h'
**
** Created: Sun Aug 11 12:00:47 2013
**      by: The Qt Meta Object Compiler version 63 (Qt 4.8.4)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../src-QT4/kdiff3_part.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'kdiff3_part.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.4. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_KDiff3Part[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       0,    0, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

       0        // eod
};

static const char qt_meta_stringdata_KDiff3Part[] = {
    "KDiff3Part\0"
};

void KDiff3Part::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    Q_UNUSED(_o);
    Q_UNUSED(_id);
    Q_UNUSED(_c);
    Q_UNUSED(_a);
}

const QMetaObjectExtraData KDiff3Part::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject KDiff3Part::staticMetaObject = {
    { &KParts::ReadWritePart::staticMetaObject, qt_meta_stringdata_KDiff3Part,
      qt_meta_data_KDiff3Part, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &KDiff3Part::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *KDiff3Part::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *KDiff3Part::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_KDiff3Part))
        return static_cast<void*>(const_cast< KDiff3Part*>(this));
    typedef KParts::ReadWritePart QMocSuperClass;
    return QMocSuperClass::qt_metacast(_clname);
}

int KDiff3Part::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    typedef KParts::ReadWritePart QMocSuperClass;
    _id = QMocSuperClass::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    return _id;
}
static const uint qt_meta_data_KDiff3PartFactory[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       0,    0, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

       0        // eod
};

static const char qt_meta_stringdata_KDiff3PartFactory[] = {
    "KDiff3PartFactory\0"
};

void KDiff3PartFactory::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    Q_UNUSED(_o);
    Q_UNUSED(_id);
    Q_UNUSED(_c);
    Q_UNUSED(_a);
}

const QMetaObjectExtraData KDiff3PartFactory::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject KDiff3PartFactory::staticMetaObject = {
    { &KParts::Factory::staticMetaObject, qt_meta_stringdata_KDiff3PartFactory,
      qt_meta_data_KDiff3PartFactory, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &KDiff3PartFactory::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *KDiff3PartFactory::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *KDiff3PartFactory::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_KDiff3PartFactory))
        return static_cast<void*>(const_cast< KDiff3PartFactory*>(this));
    typedef KParts::Factory QMocSuperClass;
    return QMocSuperClass::qt_metacast(_clname);
}

int KDiff3PartFactory::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    typedef KParts::Factory QMocSuperClass;
    _id = QMocSuperClass::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    return _id;
}
QT_END_MOC_NAMESPACE
