/****************************************************************************
** Meta object code from reading C++ file 'directorymergewindow.h'
**
** Created: Sun Aug 11 12:00:46 2013
**      by: The Qt Meta Object Compiler version 63 (Qt 4.8.4)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../src-QT4/directorymergewindow.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'directorymergewindow.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.4. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_DirectoryMergeWindow[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
      45,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       4,       // signalCount

 // signals: signature, parameters, type, tag, flags
      42,   22,   21,   21, 0x05,
     142,  131,   21,   21, 0x05,
     168,   21,   21,   21, 0x05,
     195,  191,   21,   21, 0x05,

 // slots: signature, parameters, type, tag, flags
     221,   21,   21,   21, 0x0a,
     230,   21,   21,   21, 0x0a,
     249,   21,   21,   21, 0x0a,
     270,   21,   21,   21, 0x0a,
     300,   21,   21,   21, 0x0a,
     342,  333,   21,   21, 0x0a,
     368,   21,   21,   21, 0x0a,
     392,   21,   21,   21, 0x0a,
     416,   21,   21,   21, 0x0a,
     440,   21,   21,   21, 0x0a,
     467,   21,   21,   21, 0x0a,
     488,   21,   21,   21, 0x0a,
     509,   21,   21,   21, 0x0a,
     532,   21,   21,   21, 0x0a,
     557,   21,   21,   21, 0x0a,
     582,   21,   21,   21, 0x0a,
     605,   21,   21,   21, 0x0a,
     628,   21,   21,   21, 0x0a,
     651,   21,   21,   21, 0x0a,
     680,   21,   21,   21, 0x0a,
     703,   21,   21,   21, 0x0a,
     740,   21,   21,   21, 0x0a,
     775,   21,   21,   21, 0x0a,
     798,   21,   21,   21, 0x0a,
     819,   21,   21,   21, 0x0a,
     840,   21,   21,   21, 0x0a,
     861,   21,   21,   21, 0x0a,
     880,   21,   21,   21, 0x0a,
     900,   21,   21,   21, 0x0a,
     922,   21,   21,   21, 0x0a,
     944,   21,   21,   21, 0x0a,
     965,   21,   21,   21, 0x0a,
     986,   21,   21,   21, 0x0a,
    1011,   21,   21,   21, 0x0a,
    1033,   21,   21,   21, 0x0a,
    1055,   21,   21,   21, 0x0a,
    1081,   21,   21,   21, 0x0a,
    1102,   21,   21,   21, 0x0a,
    1123,   21,   21,   21, 0x09,
    1150,   21,   21,   21, 0x09,
    1180, 1163,   21,   21, 0x09,

       0        // eod
};

static const char qt_meta_stringdata_DirectoryMergeWindow[] = {
    "DirectoryMergeWindow\0\0fn1,fn2,fn3,ofn,,,,\0"
    "startDiffMerge(QString,QString,QString,QString,QString,QString,QString"
    ",TotalDiffStatus*)\0"
    "pbContinue\0checkIfCanContinue(bool*)\0"
    "updateAvailabilities()\0msg\0"
    "statusBarMessage(QString)\0reload()\0"
    "mergeCurrentFile()\0compareCurrentFile()\0"
    "slotRunOperationForAllItems()\0"
    "slotRunOperationForCurrentItem()\0"
    "fileName\0mergeResultSaved(QString)\0"
    "slotChooseAEverywhere()\0slotChooseBEverywhere()\0"
    "slotChooseCEverywhere()\0"
    "slotAutoChooseEverywhere()\0"
    "slotNoOpEverywhere()\0slotFoldAllSubdirs()\0"
    "slotUnfoldAllSubdirs()\0slotShowIdenticalFiles()\0"
    "slotShowDifferentFiles()\0"
    "slotShowFilesOnlyInA()\0slotShowFilesOnlyInB()\0"
    "slotShowFilesOnlyInC()\0"
    "slotSynchronizeDirectories()\0"
    "slotChooseNewerFiles()\0"
    "slotCompareExplicitlySelectedFiles()\0"
    "slotMergeExplicitlySelectedFiles()\0"
    "slotCurrentDoNothing()\0slotCurrentChooseA()\0"
    "slotCurrentChooseB()\0slotCurrentChooseC()\0"
    "slotCurrentMerge()\0slotCurrentDelete()\0"
    "slotCurrentCopyAToB()\0slotCurrentCopyBToA()\0"
    "slotCurrentDeleteA()\0slotCurrentDeleteB()\0"
    "slotCurrentDeleteAAndB()\0slotCurrentMergeToA()\0"
    "slotCurrentMergeToB()\0slotCurrentMergeToAAndB()\0"
    "slotSaveMergeState()\0slotLoadMergeState()\0"
    "onDoubleClick(QModelIndex)\0onExpanded()\0"
    "current,previous\0"
    "currentChanged(QModelIndex,QModelIndex)\0"
};

void DirectoryMergeWindow::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        DirectoryMergeWindow *_t = static_cast<DirectoryMergeWindow *>(_o);
        switch (_id) {
        case 0: _t->startDiffMerge((*reinterpret_cast< QString(*)>(_a[1])),(*reinterpret_cast< QString(*)>(_a[2])),(*reinterpret_cast< QString(*)>(_a[3])),(*reinterpret_cast< QString(*)>(_a[4])),(*reinterpret_cast< QString(*)>(_a[5])),(*reinterpret_cast< QString(*)>(_a[6])),(*reinterpret_cast< QString(*)>(_a[7])),(*reinterpret_cast< TotalDiffStatus*(*)>(_a[8]))); break;
        case 1: _t->checkIfCanContinue((*reinterpret_cast< bool*(*)>(_a[1]))); break;
        case 2: _t->updateAvailabilities(); break;
        case 3: _t->statusBarMessage((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 4: _t->reload(); break;
        case 5: _t->mergeCurrentFile(); break;
        case 6: _t->compareCurrentFile(); break;
        case 7: _t->slotRunOperationForAllItems(); break;
        case 8: _t->slotRunOperationForCurrentItem(); break;
        case 9: _t->mergeResultSaved((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 10: _t->slotChooseAEverywhere(); break;
        case 11: _t->slotChooseBEverywhere(); break;
        case 12: _t->slotChooseCEverywhere(); break;
        case 13: _t->slotAutoChooseEverywhere(); break;
        case 14: _t->slotNoOpEverywhere(); break;
        case 15: _t->slotFoldAllSubdirs(); break;
        case 16: _t->slotUnfoldAllSubdirs(); break;
        case 17: _t->slotShowIdenticalFiles(); break;
        case 18: _t->slotShowDifferentFiles(); break;
        case 19: _t->slotShowFilesOnlyInA(); break;
        case 20: _t->slotShowFilesOnlyInB(); break;
        case 21: _t->slotShowFilesOnlyInC(); break;
        case 22: _t->slotSynchronizeDirectories(); break;
        case 23: _t->slotChooseNewerFiles(); break;
        case 24: _t->slotCompareExplicitlySelectedFiles(); break;
        case 25: _t->slotMergeExplicitlySelectedFiles(); break;
        case 26: _t->slotCurrentDoNothing(); break;
        case 27: _t->slotCurrentChooseA(); break;
        case 28: _t->slotCurrentChooseB(); break;
        case 29: _t->slotCurrentChooseC(); break;
        case 30: _t->slotCurrentMerge(); break;
        case 31: _t->slotCurrentDelete(); break;
        case 32: _t->slotCurrentCopyAToB(); break;
        case 33: _t->slotCurrentCopyBToA(); break;
        case 34: _t->slotCurrentDeleteA(); break;
        case 35: _t->slotCurrentDeleteB(); break;
        case 36: _t->slotCurrentDeleteAAndB(); break;
        case 37: _t->slotCurrentMergeToA(); break;
        case 38: _t->slotCurrentMergeToB(); break;
        case 39: _t->slotCurrentMergeToAAndB(); break;
        case 40: _t->slotSaveMergeState(); break;
        case 41: _t->slotLoadMergeState(); break;
        case 42: _t->onDoubleClick((*reinterpret_cast< const QModelIndex(*)>(_a[1]))); break;
        case 43: _t->onExpanded(); break;
        case 44: _t->currentChanged((*reinterpret_cast< const QModelIndex(*)>(_a[1])),(*reinterpret_cast< const QModelIndex(*)>(_a[2]))); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData DirectoryMergeWindow::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject DirectoryMergeWindow::staticMetaObject = {
    { &QTreeView::staticMetaObject, qt_meta_stringdata_DirectoryMergeWindow,
      qt_meta_data_DirectoryMergeWindow, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &DirectoryMergeWindow::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *DirectoryMergeWindow::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *DirectoryMergeWindow::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_DirectoryMergeWindow))
        return static_cast<void*>(const_cast< DirectoryMergeWindow*>(this));
    return QTreeView::qt_metacast(_clname);
}

int DirectoryMergeWindow::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QTreeView::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 45)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 45;
    }
    return _id;
}

// SIGNAL 0
void DirectoryMergeWindow::startDiffMerge(QString _t1, QString _t2, QString _t3, QString _t4, QString _t5, QString _t6, QString _t7, TotalDiffStatus * _t8)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)), const_cast<void*>(reinterpret_cast<const void*>(&_t3)), const_cast<void*>(reinterpret_cast<const void*>(&_t4)), const_cast<void*>(reinterpret_cast<const void*>(&_t5)), const_cast<void*>(reinterpret_cast<const void*>(&_t6)), const_cast<void*>(reinterpret_cast<const void*>(&_t7)), const_cast<void*>(reinterpret_cast<const void*>(&_t8)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void DirectoryMergeWindow::checkIfCanContinue(bool * _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void DirectoryMergeWindow::updateAvailabilities()
{
    QMetaObject::activate(this, &staticMetaObject, 2, 0);
}

// SIGNAL 3
void DirectoryMergeWindow::statusBarMessage(const QString & _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 3, _a);
}
static const uint qt_meta_data_DirectoryMergeInfo[] = {

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
      20,   19,   19,   19, 0x05,

       0        // eod
};

static const char qt_meta_stringdata_DirectoryMergeInfo[] = {
    "DirectoryMergeInfo\0\0gotFocus()\0"
};

void DirectoryMergeInfo::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        DirectoryMergeInfo *_t = static_cast<DirectoryMergeInfo *>(_o);
        switch (_id) {
        case 0: _t->gotFocus(); break;
        default: ;
        }
    }
    Q_UNUSED(_a);
}

const QMetaObjectExtraData DirectoryMergeInfo::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject DirectoryMergeInfo::staticMetaObject = {
    { &QFrame::staticMetaObject, qt_meta_stringdata_DirectoryMergeInfo,
      qt_meta_data_DirectoryMergeInfo, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &DirectoryMergeInfo::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *DirectoryMergeInfo::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *DirectoryMergeInfo::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_DirectoryMergeInfo))
        return static_cast<void*>(const_cast< DirectoryMergeInfo*>(this));
    return QFrame::qt_metacast(_clname);
}

int DirectoryMergeInfo::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QFrame::qt_metacall(_c, _id, _a);
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
void DirectoryMergeInfo::gotFocus()
{
    QMetaObject::activate(this, &staticMetaObject, 0, 0);
}
QT_END_MOC_NAMESPACE
