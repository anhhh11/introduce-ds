/****************************************************************************
** Meta object code from reading C++ file 'mergeresultwindow.h'
**
** Created: Sun Aug 11 12:00:44 2013
**      by: The Qt Meta Object Compiler version 63 (Qt 4.8.4)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../src-QT4/mergeresultwindow.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'mergeresultwindow.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.4. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_Overview[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       3,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: signature, parameters, type, tag, flags
      10,    9,    9,    9, 0x05,

 // slots: signature, parameters, type, tag, flags
      33,   23,    9,    9, 0x0a,
      51,    9,    9,    9, 0x0a,

       0        // eod
};

static const char qt_meta_stringdata_Overview[] = {
    "Overview\0\0setLine(int)\0firstLine\0"
    "setFirstLine(int)\0slotRedraw()\0"
};

void Overview::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        Overview *_t = static_cast<Overview *>(_o);
        switch (_id) {
        case 0: _t->setLine((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 1: _t->setFirstLine((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 2: _t->slotRedraw(); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData Overview::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject Overview::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_Overview,
      qt_meta_data_Overview, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &Overview::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *Overview::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *Overview::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_Overview))
        return static_cast<void*>(const_cast< Overview*>(this));
    return QWidget::qt_metacast(_clname);
}

int Overview::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 3)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 3;
    }
    return _id;
}

// SIGNAL 0
void Overview::setLine(int _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}
static const uint qt_meta_data_MergeResultWindow[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
      33,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
      10,       // signalCount

 // signals: signature, parameters, type, tag, flags
      33,   19,   18,   18, 0x05,
      59,   49,   18,   18, 0x05,
      96,   81,   18,   18, 0x05,
     146,  126,   18,   18, 0x05,
     166,   18,   18,   18, 0x05,
     181,   18,   18,   18, 0x05,
     196,   18,   18,   18, 0x05,
     211,   18,   18,   18, 0x05,
     240,  234,   18,   18, 0x05,
     262,   18,   18,   18, 0x05,

 // slots: signature, parameters, type, tag, flags
     300,  290,   18,   18, 0x0a,
     327,  318,   18,   18, 0x0a,
     347,   18,   18,   18, 0x0a,
     363,   18,   18,   18, 0x0a,
     375,   18,   18,   18, 0x0a,
     390,   18,   18,   18, 0x0a,
     408,   18,   18,   18, 0x0a,
     426,   18,   18,   18, 0x0a,
     455,   18,   18,   18, 0x0a,
     484,   18,   18,   18, 0x0a,
     505,   18,   18,   18, 0x0a,
     526,   18,   18,   18, 0x0a,
     542,   18,   18,   18, 0x0a,
     556,   18,   18,   18, 0x0a,
     575,   18,   18,   18, 0x0a,
     628,  597,   18,   18, 0x0a,
     651,  597,   18,   18, 0x0a,
     674,   18,   18,   18, 0x0a,
     703,   18,   18,   18, 0x0a,
     728,   18,   18,   18, 0x0a,
     747,   18,   18,   18, 0x0a,
     780,  765,   18,   18, 0x0a,
     801,   18,   18,   18, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_MergeResultWindow[] = {
    "MergeResultWindow\0\0deltaX,deltaY\0"
    "scroll(int,int)\0bModified\0"
    "modifiedChanged(bool)\0line1,nofLines\0"
    "setFastSelectorRange(int,int)\0"
    "srcMask,enabledMask\0sourceMask(int,int)\0"
    "resizeSignal()\0selectionEnd()\0"
    "newSelection()\0updateAvailabilities()\0"
    "point\0showPopupMenu(QPoint)\0"
    "noRelevantChangesDetected()\0firstLine\0"
    "setFirstLine(int)\0firstCol\0"
    "setFirstColumn(int)\0slotGoCurrent()\0"
    "slotGoTop()\0slotGoBottom()\0slotGoPrevDelta()\0"
    "slotGoNextDelta()\0slotGoPrevUnsolvedConflict()\0"
    "slotGoNextUnsolvedConflict()\0"
    "slotGoPrevConflict()\0slotGoNextConflict()\0"
    "slotAutoSolve()\0slotUnsolve()\0"
    "slotMergeHistory()\0slotRegExpAutoMerge()\0"
    "firstD3lLineIdx,lastD3lLineIdx\0"
    "slotSplitDiff(int,int)\0slotJoinDiffs(int,int)\0"
    "slotSetFastSelectorLine(int)\0"
    "setPaintingAllowed(bool)\0updateSourceMask()\0"
    "deleteSelection()\0bFromSelection\0"
    "pasteClipboard(bool)\0slotCursorUpdate()\0"
};

void MergeResultWindow::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        MergeResultWindow *_t = static_cast<MergeResultWindow *>(_o);
        switch (_id) {
        case 0: _t->scroll((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 1: _t->modifiedChanged((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 2: _t->setFastSelectorRange((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 3: _t->sourceMask((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 4: _t->resizeSignal(); break;
        case 5: _t->selectionEnd(); break;
        case 6: _t->newSelection(); break;
        case 7: _t->updateAvailabilities(); break;
        case 8: _t->showPopupMenu((*reinterpret_cast< const QPoint(*)>(_a[1]))); break;
        case 9: _t->noRelevantChangesDetected(); break;
        case 10: _t->setFirstLine((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 11: _t->setFirstColumn((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 12: _t->slotGoCurrent(); break;
        case 13: _t->slotGoTop(); break;
        case 14: _t->slotGoBottom(); break;
        case 15: _t->slotGoPrevDelta(); break;
        case 16: _t->slotGoNextDelta(); break;
        case 17: _t->slotGoPrevUnsolvedConflict(); break;
        case 18: _t->slotGoNextUnsolvedConflict(); break;
        case 19: _t->slotGoPrevConflict(); break;
        case 20: _t->slotGoNextConflict(); break;
        case 21: _t->slotAutoSolve(); break;
        case 22: _t->slotUnsolve(); break;
        case 23: _t->slotMergeHistory(); break;
        case 24: _t->slotRegExpAutoMerge(); break;
        case 25: _t->slotSplitDiff((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 26: _t->slotJoinDiffs((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 27: _t->slotSetFastSelectorLine((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 28: _t->setPaintingAllowed((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 29: _t->updateSourceMask(); break;
        case 30: _t->deleteSelection(); break;
        case 31: _t->pasteClipboard((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 32: _t->slotCursorUpdate(); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData MergeResultWindow::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject MergeResultWindow::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_MergeResultWindow,
      qt_meta_data_MergeResultWindow, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &MergeResultWindow::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *MergeResultWindow::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *MergeResultWindow::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_MergeResultWindow))
        return static_cast<void*>(const_cast< MergeResultWindow*>(this));
    return QWidget::qt_metacast(_clname);
}

int MergeResultWindow::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 33)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 33;
    }
    return _id;
}

// SIGNAL 0
void MergeResultWindow::scroll(int _t1, int _t2)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void MergeResultWindow::modifiedChanged(bool _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void MergeResultWindow::setFastSelectorRange(int _t1, int _t2)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}

// SIGNAL 3
void MergeResultWindow::sourceMask(int _t1, int _t2)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 3, _a);
}

// SIGNAL 4
void MergeResultWindow::resizeSignal()
{
    QMetaObject::activate(this, &staticMetaObject, 4, 0);
}

// SIGNAL 5
void MergeResultWindow::selectionEnd()
{
    QMetaObject::activate(this, &staticMetaObject, 5, 0);
}

// SIGNAL 6
void MergeResultWindow::newSelection()
{
    QMetaObject::activate(this, &staticMetaObject, 6, 0);
}

// SIGNAL 7
void MergeResultWindow::updateAvailabilities()
{
    QMetaObject::activate(this, &staticMetaObject, 7, 0);
}

// SIGNAL 8
void MergeResultWindow::showPopupMenu(const QPoint & _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 8, _a);
}

// SIGNAL 9
void MergeResultWindow::noRelevantChangesDetected()
{
    QMetaObject::activate(this, &staticMetaObject, 9, 0);
}
static const uint qt_meta_data_WindowTitleWidget[] = {

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
      29,   19,   18,   18, 0x0a,

       0        // eod
};

static const char qt_meta_stringdata_WindowTitleWidget[] = {
    "WindowTitleWidget\0\0bModified\0"
    "slotSetModified(bool)\0"
};

void WindowTitleWidget::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        WindowTitleWidget *_t = static_cast<WindowTitleWidget *>(_o);
        switch (_id) {
        case 0: _t->slotSetModified((*reinterpret_cast< bool(*)>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData WindowTitleWidget::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject WindowTitleWidget::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_WindowTitleWidget,
      qt_meta_data_WindowTitleWidget, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &WindowTitleWidget::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *WindowTitleWidget::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *WindowTitleWidget::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_WindowTitleWidget))
        return static_cast<void*>(const_cast< WindowTitleWidget*>(this));
    return QWidget::qt_metacast(_clname);
}

int WindowTitleWidget::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
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
