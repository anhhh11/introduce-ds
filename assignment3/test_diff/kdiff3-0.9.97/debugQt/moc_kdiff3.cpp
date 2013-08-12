/****************************************************************************
** Meta object code from reading C++ file 'kdiff3.h'
**
** Created: Sun Aug 11 12:00:44 2013
**      by: The Qt Meta Object Compiler version 63 (Qt 4.8.4)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../src-QT4/kdiff3.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'kdiff3.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.4. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_ReversibleScrollBar[] = {

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
      21,   20,   20,   20, 0x05,

 // slots: signature, parameters, type, tag, flags
      42,   40,   20,   20, 0x0a,
      64,   40,   20,   20, 0x0a,

       0        // eod
};

static const char qt_meta_stringdata_ReversibleScrollBar[] = {
    "ReversibleScrollBar\0\0valueChanged2(int)\0"
    "i\0slotValueChanged(int)\0setValue(int)\0"
};

void ReversibleScrollBar::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        ReversibleScrollBar *_t = static_cast<ReversibleScrollBar *>(_o);
        switch (_id) {
        case 0: _t->valueChanged2((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 1: _t->slotValueChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 2: _t->setValue((*reinterpret_cast< int(*)>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData ReversibleScrollBar::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject ReversibleScrollBar::staticMetaObject = {
    { &QScrollBar::staticMetaObject, qt_meta_stringdata_ReversibleScrollBar,
      qt_meta_data_ReversibleScrollBar, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &ReversibleScrollBar::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *ReversibleScrollBar::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *ReversibleScrollBar::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_ReversibleScrollBar))
        return static_cast<void*>(const_cast< ReversibleScrollBar*>(this));
    return QScrollBar::qt_metacast(_clname);
}

int ReversibleScrollBar::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QScrollBar::qt_metacall(_c, _id, _a);
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
void ReversibleScrollBar::valueChanged2(int _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}
static const uint qt_meta_data_KDiff3App[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
      86,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: signature, parameters, type, tag, flags
      23,   11,   10,   10, 0x05,

 // slots: signature, parameters, type, tag, flags
      66,   10,   10,   10, 0x0a,
     126,   81,   10,   10, 0x0a,
     230,  214,   10,   10, 0x0a,
     263,   10,   10,   10, 0x0a,
     278,   10,   10,   10, 0x0a,
     295,   10,   10,   10, 0x0a,
     311,   10,   10,   10, 0x0a,
     326,   10,   10,   10, 0x0a,
     340,   10,   10,   10, 0x0a,
     355,   10,   10,   10, 0x0a,
     371,   10,   10,   10, 0x0a,
     389,   10,   10,   10, 0x0a,
     414,  409,   10,   10, 0x0a,
     456,  437,   10,   10, 0x0a,
     486,   10,   10,   10, 0x0a,
     512,   10,   10,   10, 0x0a,
     539,  533,   10,   10, 0x0a,
     575,  561,   10,   10, 0x0a,
     605,  561,   10,   10, 0x0a,
     643,  638,   10,   10, 0x0a,
     681,  661,   10,   10, 0x0a,
     701,   10,   10,   10, 0x0a,
     719,   10,   10,   10, 0x0a,
     739,   10,   10,   10, 0x0a,
     766,   10,   10,   10, 0x0a,
     786,   10,   10,   10, 0x0a,
     801,   10,   10,   10, 0x0a,
     820,   10,   10,   10, 0x0a,
     836,   10,   10,   10, 0x0a,
     848,   10,   10,   10, 0x0a,
     863,   10,   10,   10, 0x0a,
     892,   10,   10,   10, 0x0a,
     921,   10,   10,   10, 0x0a,
     942,   10,   10,   10, 0x0a,
     963,   10,   10,   10, 0x0a,
     981,   10,   10,   10, 0x0a,
     999,   10,   10,   10, 0x0a,
    1013,   10,   10,   10, 0x0a,
    1027,   10,   10,   10, 0x0a,
    1041,   10,   10,   10, 0x0a,
    1057,   10,   10,   10, 0x0a,
    1071,   10,   10,   10, 0x0a,
    1090,   10,   10,   10, 0x0a,
    1112,   10,   10,   10, 0x0a,
    1136,   10,   10,   10, 0x0a,
    1160,   10,   10,   10, 0x0a,
    1184,   10,   10,   10, 0x0a,
    1218,   10,   10,   10, 0x0a,
    1252,   10,   10,   10, 0x0a,
    1286,   10,   10,   10, 0x0a,
    1330,   10,   10,   10, 0x0a,
    1374,   10,   10,   10, 0x0a,
    1418,   10,   10,   10, 0x0a,
    1434,   10,   10,   10, 0x0a,
    1454,   10,   10,   10, 0x0a,
    1468,   10,   10,   10, 0x0a,
    1487,   10,   10,   10, 0x0a,
    1508,   10,   10,   10, 0x0a,
    1531,   10,   10,   10, 0x0a,
    1556,   10,   10,   10, 0x0a,
    1578,   10,   10,   10, 0x0a,
    1601,   10,   10,   10, 0x0a,
    1625, 1614,   10,   10, 0x0a,
    1655,   10,   10,   10, 0x0a,
    1683,   10,   10,   10, 0x0a,
    1712,   10,   10,   10, 0x0a,
    1737,   10,   10,   10, 0x0a,
    1759,   10,   10,   10, 0x0a,
    1784,   10,   10,   10, 0x0a,
    1809,   10,   10,   10, 0x0a,
    1834,   10,   10,   10, 0x0a,
    1853,   10,   10,   10, 0x0a,
    1872,   10,   10,   10, 0x0a,
    1907,   10,   10,   10, 0x0a,
    1928,   10,   10,   10, 0x0a,
    1945,   10,   10,   10, 0x0a,
    1962,   10,   10,   10, 0x0a,
    1979,   10,   10,   10, 0x0a,
    1995,   10,   10,   10, 0x0a,
    2011,   10,   10,   10, 0x0a,
    2035,   10,   10,   10, 0x0a,
    2065,   10,   10,   10, 0x0a,
    2097,   10,   10,   10, 0x0a,
    2131,   10,   10,   10, 0x0a,
    2165,   10,   10,   10, 0x0a,

       0        // eod
};

static const char qt_meta_stringdata_KDiff3App[] = {
    "KDiff3App\0\0fn1,fn2,fn3\0"
    "createNewInstance(QString,QString,QString)\0"
    "slotFileOpen()\0"
    "fn1,fn2,fn3,ofn,an1,an2,an3,pTotalDiffStatus\0"
    "slotFileOpen2(QString,QString,QString,QString,QString,QString,QString,"
    "TotalDiffStatus*)\0"
    "fileName,winIdx\0slotFileNameChanged(QString,int)\0"
    "slotFileSave()\0slotFileSaveAs()\0"
    "slotFilePrint()\0slotFileQuit()\0"
    "slotEditCut()\0slotEditCopy()\0"
    "slotEditPaste()\0slotViewToolBar()\0"
    "slotViewStatusBar()\0text\0"
    "slotStatusMsg(QString)\0newWidth,newHeight\0"
    "resizeDiffTextWindow(int,int)\0"
    "resizeMergeResultWindow()\0"
    "slotRecalcWordWrap()\0point\0"
    "showPopupMenu(QPoint)\0deltaX,deltaY\0"
    "scrollDiffTextWindow(int,int)\0"
    "scrollMergeResultWindow(int,int)\0line\0"
    "setDiff3Line(int)\0srcMask,enabledMask\0"
    "sourceMask(int,int)\0slotDirShowBoth()\0"
    "slotDirViewToggle()\0slotUpdateAvailabilities()\0"
    "slotEditSelectAll()\0slotEditFind()\0"
    "slotEditFindNext()\0slotGoCurrent()\0"
    "slotGoTop()\0slotGoBottom()\0"
    "slotGoPrevUnsolvedConflict()\0"
    "slotGoNextUnsolvedConflict()\0"
    "slotGoPrevConflict()\0slotGoNextConflict()\0"
    "slotGoPrevDelta()\0slotGoNextDelta()\0"
    "slotChooseA()\0slotChooseB()\0slotChooseC()\0"
    "slotAutoSolve()\0slotUnsolve()\0"
    "slotMergeHistory()\0slotRegExpAutoMerge()\0"
    "slotChooseAEverywhere()\0slotChooseBEverywhere()\0"
    "slotChooseCEverywhere()\0"
    "slotChooseAForUnsolvedConflicts()\0"
    "slotChooseBForUnsolvedConflicts()\0"
    "slotChooseCForUnsolvedConflicts()\0"
    "slotChooseAForUnsolvedWhiteSpaceConflicts()\0"
    "slotChooseBForUnsolvedWhiteSpaceConflicts()\0"
    "slotChooseCForUnsolvedWhiteSpaceConflicts()\0"
    "slotConfigure()\0slotConfigureKeys()\0"
    "slotRefresh()\0slotSelectionEnd()\0"
    "slotSelectionStart()\0slotClipboardChanged()\0"
    "slotOutputModified(bool)\0slotAfterFirstPaint()\0"
    "slotMergeCurrentFile()\0slotReload()\0"
    "pbContinue\0slotCheckIfCanContinue(bool*)\0"
    "slotShowWhiteSpaceToggled()\0"
    "slotShowLineNumbersToggled()\0"
    "slotAutoAdvanceToggled()\0slotWordWrapToggled()\0"
    "slotShowWindowAToggled()\0"
    "slotShowWindowBToggled()\0"
    "slotShowWindowCToggled()\0slotWinFocusNext()\0"
    "slotWinFocusPrev()\0"
    "slotWinToggleSplitterOrientation()\0"
    "slotOverviewNormal()\0slotOverviewAB()\0"
    "slotOverviewAC()\0slotOverviewBC()\0"
    "slotSplitDiff()\0slotJoinDiffs()\0"
    "slotAddManualDiffHelp()\0"
    "slotClearManualDiffHelpList()\0"
    "slotNoRelevantChangesDetected()\0"
    "slotEncodingChangedA(QTextCodec*)\0"
    "slotEncodingChangedB(QTextCodec*)\0"
    "slotEncodingChangedC(QTextCodec*)\0"
};

void KDiff3App::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        KDiff3App *_t = static_cast<KDiff3App *>(_o);
        switch (_id) {
        case 0: _t->createNewInstance((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2])),(*reinterpret_cast< const QString(*)>(_a[3]))); break;
        case 1: _t->slotFileOpen(); break;
        case 2: _t->slotFileOpen2((*reinterpret_cast< QString(*)>(_a[1])),(*reinterpret_cast< QString(*)>(_a[2])),(*reinterpret_cast< QString(*)>(_a[3])),(*reinterpret_cast< QString(*)>(_a[4])),(*reinterpret_cast< QString(*)>(_a[5])),(*reinterpret_cast< QString(*)>(_a[6])),(*reinterpret_cast< QString(*)>(_a[7])),(*reinterpret_cast< TotalDiffStatus*(*)>(_a[8]))); break;
        case 3: _t->slotFileNameChanged((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 4: _t->slotFileSave(); break;
        case 5: _t->slotFileSaveAs(); break;
        case 6: _t->slotFilePrint(); break;
        case 7: _t->slotFileQuit(); break;
        case 8: _t->slotEditCut(); break;
        case 9: _t->slotEditCopy(); break;
        case 10: _t->slotEditPaste(); break;
        case 11: _t->slotViewToolBar(); break;
        case 12: _t->slotViewStatusBar(); break;
        case 13: _t->slotStatusMsg((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 14: _t->resizeDiffTextWindow((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 15: _t->resizeMergeResultWindow(); break;
        case 16: _t->slotRecalcWordWrap(); break;
        case 17: _t->showPopupMenu((*reinterpret_cast< const QPoint(*)>(_a[1]))); break;
        case 18: _t->scrollDiffTextWindow((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 19: _t->scrollMergeResultWindow((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 20: _t->setDiff3Line((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 21: _t->sourceMask((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 22: _t->slotDirShowBoth(); break;
        case 23: _t->slotDirViewToggle(); break;
        case 24: _t->slotUpdateAvailabilities(); break;
        case 25: _t->slotEditSelectAll(); break;
        case 26: _t->slotEditFind(); break;
        case 27: _t->slotEditFindNext(); break;
        case 28: _t->slotGoCurrent(); break;
        case 29: _t->slotGoTop(); break;
        case 30: _t->slotGoBottom(); break;
        case 31: _t->slotGoPrevUnsolvedConflict(); break;
        case 32: _t->slotGoNextUnsolvedConflict(); break;
        case 33: _t->slotGoPrevConflict(); break;
        case 34: _t->slotGoNextConflict(); break;
        case 35: _t->slotGoPrevDelta(); break;
        case 36: _t->slotGoNextDelta(); break;
        case 37: _t->slotChooseA(); break;
        case 38: _t->slotChooseB(); break;
        case 39: _t->slotChooseC(); break;
        case 40: _t->slotAutoSolve(); break;
        case 41: _t->slotUnsolve(); break;
        case 42: _t->slotMergeHistory(); break;
        case 43: _t->slotRegExpAutoMerge(); break;
        case 44: _t->slotChooseAEverywhere(); break;
        case 45: _t->slotChooseBEverywhere(); break;
        case 46: _t->slotChooseCEverywhere(); break;
        case 47: _t->slotChooseAForUnsolvedConflicts(); break;
        case 48: _t->slotChooseBForUnsolvedConflicts(); break;
        case 49: _t->slotChooseCForUnsolvedConflicts(); break;
        case 50: _t->slotChooseAForUnsolvedWhiteSpaceConflicts(); break;
        case 51: _t->slotChooseBForUnsolvedWhiteSpaceConflicts(); break;
        case 52: _t->slotChooseCForUnsolvedWhiteSpaceConflicts(); break;
        case 53: _t->slotConfigure(); break;
        case 54: _t->slotConfigureKeys(); break;
        case 55: _t->slotRefresh(); break;
        case 56: _t->slotSelectionEnd(); break;
        case 57: _t->slotSelectionStart(); break;
        case 58: _t->slotClipboardChanged(); break;
        case 59: _t->slotOutputModified((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 60: _t->slotAfterFirstPaint(); break;
        case 61: _t->slotMergeCurrentFile(); break;
        case 62: _t->slotReload(); break;
        case 63: _t->slotCheckIfCanContinue((*reinterpret_cast< bool*(*)>(_a[1]))); break;
        case 64: _t->slotShowWhiteSpaceToggled(); break;
        case 65: _t->slotShowLineNumbersToggled(); break;
        case 66: _t->slotAutoAdvanceToggled(); break;
        case 67: _t->slotWordWrapToggled(); break;
        case 68: _t->slotShowWindowAToggled(); break;
        case 69: _t->slotShowWindowBToggled(); break;
        case 70: _t->slotShowWindowCToggled(); break;
        case 71: _t->slotWinFocusNext(); break;
        case 72: _t->slotWinFocusPrev(); break;
        case 73: _t->slotWinToggleSplitterOrientation(); break;
        case 74: _t->slotOverviewNormal(); break;
        case 75: _t->slotOverviewAB(); break;
        case 76: _t->slotOverviewAC(); break;
        case 77: _t->slotOverviewBC(); break;
        case 78: _t->slotSplitDiff(); break;
        case 79: _t->slotJoinDiffs(); break;
        case 80: _t->slotAddManualDiffHelp(); break;
        case 81: _t->slotClearManualDiffHelpList(); break;
        case 82: _t->slotNoRelevantChangesDetected(); break;
        case 83: _t->slotEncodingChangedA((*reinterpret_cast< QTextCodec*(*)>(_a[1]))); break;
        case 84: _t->slotEncodingChangedB((*reinterpret_cast< QTextCodec*(*)>(_a[1]))); break;
        case 85: _t->slotEncodingChangedC((*reinterpret_cast< QTextCodec*(*)>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData KDiff3App::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject KDiff3App::staticMetaObject = {
    { &QSplitter::staticMetaObject, qt_meta_stringdata_KDiff3App,
      qt_meta_data_KDiff3App, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &KDiff3App::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *KDiff3App::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *KDiff3App::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_KDiff3App))
        return static_cast<void*>(const_cast< KDiff3App*>(this));
    return QSplitter::qt_metacast(_clname);
}

int KDiff3App::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QSplitter::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 86)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 86;
    }
    return _id;
}

// SIGNAL 0
void KDiff3App::createNewInstance(const QString & _t1, const QString & _t2, const QString & _t3)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)), const_cast<void*>(reinterpret_cast<const void*>(&_t3)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}
QT_END_MOC_NAMESPACE
