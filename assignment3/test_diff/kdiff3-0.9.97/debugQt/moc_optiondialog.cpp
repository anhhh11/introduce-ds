/****************************************************************************
** Meta object code from reading C++ file 'optiondialog.h'
**
** Created: Sun Aug 11 12:00:45 2013
**      by: The Qt Meta Object Compiler version 63 (Qt 4.8.4)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../src-QT4/optiondialog.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'optiondialog.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.4. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_OptionDialog[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       8,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: signature, parameters, type, tag, flags
      14,   13,   13,   13, 0x05,

 // slots: signature, parameters, type, tag, flags
      26,   13,   13,   13, 0x09,
      40,   13,   13,   13, 0x09,
      49,   13,   13,   13, 0x09,
      61,   13,   13,   13, 0x09,
      83,   13,   13,   13, 0x09,
     114,   13,   13,   13, 0x09,
     143,   13,   13,   13, 0x09,

       0        // eod
};

static const char qt_meta_stringdata_OptionDialog[] = {
    "OptionDialog\0\0applyDone()\0slotDefault()\0"
    "slotOk()\0slotApply()\0slotEncodingChanged()\0"
    "slotHistoryMergeRegExpTester()\0"
    "slotIntegrateWithClearCase()\0"
    "slotRemoveClearCaseIntegration()\0"
};

void OptionDialog::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        OptionDialog *_t = static_cast<OptionDialog *>(_o);
        switch (_id) {
        case 0: _t->applyDone(); break;
        case 1: _t->slotDefault(); break;
        case 2: _t->slotOk(); break;
        case 3: _t->slotApply(); break;
        case 4: _t->slotEncodingChanged(); break;
        case 5: _t->slotHistoryMergeRegExpTester(); break;
        case 6: _t->slotIntegrateWithClearCase(); break;
        case 7: _t->slotRemoveClearCaseIntegration(); break;
        default: ;
        }
    }
    Q_UNUSED(_a);
}

const QMetaObjectExtraData OptionDialog::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject OptionDialog::staticMetaObject = {
    { &KPageDialog::staticMetaObject, qt_meta_stringdata_OptionDialog,
      qt_meta_data_OptionDialog, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &OptionDialog::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *OptionDialog::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *OptionDialog::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_OptionDialog))
        return static_cast<void*>(const_cast< OptionDialog*>(this));
    return KPageDialog::qt_metacast(_clname);
}

int OptionDialog::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = KPageDialog::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 8)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 8;
    }
    return _id;
}

// SIGNAL 0
void OptionDialog::applyDone()
{
    QMetaObject::activate(this, &staticMetaObject, 0, 0);
}
QT_END_MOC_NAMESPACE
