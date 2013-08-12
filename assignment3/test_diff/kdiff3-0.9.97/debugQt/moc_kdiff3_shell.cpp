/****************************************************************************
** Meta object code from reading C++ file 'kdiff3_shell.h'
**
** Created: Sun Aug 11 12:00:47 2013
**      by: The Qt Meta Object Compiler version 63 (Qt 4.8.4)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../src-QT4/kdiff3_shell.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'kdiff3_shell.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.4. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_KDiff3Shell[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       6,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
      13,   12,   12,   12, 0x08,
      34,   12,   12,   12, 0x08,
      57,   12,   12,   12, 0x08,
      80,   12,   12,   12, 0x08,
     107,   12,   12,   12, 0x08,
     143,  131,   12,   12, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_KDiff3Shell[] = {
    "KDiff3Shell\0\0optionsShowToolbar()\0"
    "optionsShowStatusbar()\0optionsConfigureKeys()\0"
    "optionsConfigureToolbars()\0"
    "applyNewToolbarConfig()\0fn1,fn2,fn3\0"
    "slotNewInstance(QString,QString,QString)\0"
};

void KDiff3Shell::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        KDiff3Shell *_t = static_cast<KDiff3Shell *>(_o);
        switch (_id) {
        case 0: _t->optionsShowToolbar(); break;
        case 1: _t->optionsShowStatusbar(); break;
        case 2: _t->optionsConfigureKeys(); break;
        case 3: _t->optionsConfigureToolbars(); break;
        case 4: _t->applyNewToolbarConfig(); break;
        case 5: _t->slotNewInstance((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2])),(*reinterpret_cast< const QString(*)>(_a[3]))); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData KDiff3Shell::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject KDiff3Shell::staticMetaObject = {
    { &KParts::MainWindow::staticMetaObject, qt_meta_stringdata_KDiff3Shell,
      qt_meta_data_KDiff3Shell, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &KDiff3Shell::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *KDiff3Shell::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *KDiff3Shell::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_KDiff3Shell))
        return static_cast<void*>(const_cast< KDiff3Shell*>(this));
    typedef KParts::MainWindow QMocSuperClass;
    return QMocSuperClass::qt_metacast(_clname);
}

int KDiff3Shell::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    typedef KParts::MainWindow QMocSuperClass;
    _id = QMocSuperClass::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 6)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 6;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
