/****************************************************************************
** Meta object code from reading C++ file 'fileaccess.h'
**
** Created: Sun Aug 11 12:00:46 2013
**      by: The Qt Meta Object Compiler version 63 (Qt 4.8.4)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../src-QT4/fileaccess.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'fileaccess.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.4. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_ProgressProxyExtender[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       2,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
      28,   23,   22,   22, 0x0a,
      75,   66,   22,   22, 0x0a,

       0        // eod
};

static const char qt_meta_stringdata_ProgressProxyExtender[] = {
    "ProgressProxyExtender\0\0,msg\0"
    "slotListDirInfoMessage(KJob*,QString)\0"
    ",percent\0slotPercent(KJob*,ulong)\0"
};

void ProgressProxyExtender::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        ProgressProxyExtender *_t = static_cast<ProgressProxyExtender *>(_o);
        switch (_id) {
        case 0: _t->slotListDirInfoMessage((*reinterpret_cast< KJob*(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2]))); break;
        case 1: _t->slotPercent((*reinterpret_cast< KJob*(*)>(_a[1])),(*reinterpret_cast< ulong(*)>(_a[2]))); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData ProgressProxyExtender::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject ProgressProxyExtender::staticMetaObject = {
    { &ProgressProxy::staticMetaObject, qt_meta_stringdata_ProgressProxyExtender,
      qt_meta_data_ProgressProxyExtender, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &ProgressProxyExtender::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *ProgressProxyExtender::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *ProgressProxyExtender::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_ProgressProxyExtender))
        return static_cast<void*>(const_cast< ProgressProxyExtender*>(this));
    return ProgressProxy::qt_metacast(_clname);
}

int ProgressProxyExtender::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = ProgressProxy::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 2)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 2;
    }
    return _id;
}
static const uint qt_meta_data_FileAccessJobHandler[] = {

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
      22,   21,   21,   21, 0x08,
      49,   44,   21,   21, 0x08,
      76,   44,   21,   21, 0x08,
     102,  100,   21,   21, 0x08,
     132,  100,   21,   21, 0x08,
     170,  167,   21,   21, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_FileAccessJobHandler[] = {
    "FileAccessJobHandler\0\0slotStatResult(KJob*)\0"
    "pJob\0slotSimpleJobResult(KJob*)\0"
    "slotPutJobResult(KJob*)\0,\0"
    "slotGetData(KJob*,QByteArray)\0"
    "slotPutData(KIO::Job*,QByteArray&)\0"
    ",l\0slotListDirProcessNewEntries(KIO::Job*,KIO::UDSEntryList)\0"
};

void FileAccessJobHandler::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        FileAccessJobHandler *_t = static_cast<FileAccessJobHandler *>(_o);
        switch (_id) {
        case 0: _t->slotStatResult((*reinterpret_cast< KJob*(*)>(_a[1]))); break;
        case 1: _t->slotSimpleJobResult((*reinterpret_cast< KJob*(*)>(_a[1]))); break;
        case 2: _t->slotPutJobResult((*reinterpret_cast< KJob*(*)>(_a[1]))); break;
        case 3: _t->slotGetData((*reinterpret_cast< KJob*(*)>(_a[1])),(*reinterpret_cast< const QByteArray(*)>(_a[2]))); break;
        case 4: _t->slotPutData((*reinterpret_cast< KIO::Job*(*)>(_a[1])),(*reinterpret_cast< QByteArray(*)>(_a[2]))); break;
        case 5: _t->slotListDirProcessNewEntries((*reinterpret_cast< KIO::Job*(*)>(_a[1])),(*reinterpret_cast< const KIO::UDSEntryList(*)>(_a[2]))); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData FileAccessJobHandler::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject FileAccessJobHandler::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_FileAccessJobHandler,
      qt_meta_data_FileAccessJobHandler, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &FileAccessJobHandler::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *FileAccessJobHandler::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *FileAccessJobHandler::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_FileAccessJobHandler))
        return static_cast<void*>(const_cast< FileAccessJobHandler*>(this));
    return QObject::qt_metacast(_clname);
}

int FileAccessJobHandler::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
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
