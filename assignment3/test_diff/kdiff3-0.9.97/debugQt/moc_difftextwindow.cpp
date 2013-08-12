/****************************************************************************
** Meta object code from reading C++ file 'difftextwindow.h'
**
** Created: Sun Aug 11 12:00:43 2013
**      by: The Qt Meta Object Compiler version 63 (Qt 4.8.4)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../src-QT4/difftextwindow.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'difftextwindow.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.4. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_DiffTextWindow[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
      11,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       7,       // signalCount

 // signals: signature, parameters, type, tag, flags
      50,   16,   15,   15, 0x05,
      86,   72,   15,   15, 0x05,
     102,   15,   15,   15, 0x05,
     117,   15,   15,   15, 0x05,
     137,  132,   15,   15, 0x05,
     162,   15,   15,   15, 0x05,
     185,  173,   15,   15, 0x05,

 // slots: signature, parameters, type, tag, flags
     206,  132,   15,   15, 0x0a,
     228,  224,   15,   15, 0x0a,
     248,   15,   15,   15, 0x0a,
     280,  265,   15,   15, 0x0a,

       0        // eod
};

static const char qt_meta_stringdata_DiffTextWindow[] = {
    "DiffTextWindow\0\0nofVisibleColumns,nofVisibleLines\0"
    "resizeSignal(int,int)\0deltaX,deltaY\0"
    "scroll(int,int)\0newSelection()\0"
    "selectionEnd()\0line\0setFastSelectorLine(int)\0"
    "gotFocus()\0winIdx,line\0lineClicked(int,int)\0"
    "setFirstLine(int)\0col\0setFirstColumn(int)\0"
    "resetSelection()\0line1,nofLines\0"
    "setFastSelectorRange(int,int)\0"
};

void DiffTextWindow::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        DiffTextWindow *_t = static_cast<DiffTextWindow *>(_o);
        switch (_id) {
        case 0: _t->resizeSignal((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 1: _t->scroll((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 2: _t->newSelection(); break;
        case 3: _t->selectionEnd(); break;
        case 4: _t->setFastSelectorLine((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 5: _t->gotFocus(); break;
        case 6: _t->lineClicked((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 7: _t->setFirstLine((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 8: _t->setFirstColumn((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 9: _t->resetSelection(); break;
        case 10: _t->setFastSelectorRange((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData DiffTextWindow::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject DiffTextWindow::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_DiffTextWindow,
      qt_meta_data_DiffTextWindow, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &DiffTextWindow::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *DiffTextWindow::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *DiffTextWindow::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_DiffTextWindow))
        return static_cast<void*>(const_cast< DiffTextWindow*>(this));
    return QWidget::qt_metacast(_clname);
}

int DiffTextWindow::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 11)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 11;
    }
    return _id;
}

// SIGNAL 0
void DiffTextWindow::resizeSignal(int _t1, int _t2)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void DiffTextWindow::scroll(int _t1, int _t2)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void DiffTextWindow::newSelection()
{
    QMetaObject::activate(this, &staticMetaObject, 2, 0);
}

// SIGNAL 3
void DiffTextWindow::selectionEnd()
{
    QMetaObject::activate(this, &staticMetaObject, 3, 0);
}

// SIGNAL 4
void DiffTextWindow::setFastSelectorLine(int _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 4, _a);
}

// SIGNAL 5
void DiffTextWindow::gotFocus()
{
    QMetaObject::activate(this, &staticMetaObject, 5, 0);
}

// SIGNAL 6
void DiffTextWindow::lineClicked(int _t1, int _t2)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 6, _a);
}
static const uint qt_meta_data_DiffTextWindowFrame[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       4,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       2,       // signalCount

 // signals: signature, parameters, type, tag, flags
      23,   21,   20,   20, 0x05,
      52,   20,   20,   20, 0x05,

 // slots: signature, parameters, type, tag, flags
      81,   20,   20,   20, 0x08,
     101,   20,   20,   20, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_DiffTextWindowFrame[] = {
    "DiffTextWindowFrame\0\0,\0"
    "fileNameChanged(QString,int)\0"
    "encodingChanged(QTextCodec*)\0"
    "slotReturnPressed()\0slotBrowseButtonClicked()\0"
};

void DiffTextWindowFrame::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        DiffTextWindowFrame *_t = static_cast<DiffTextWindowFrame *>(_o);
        switch (_id) {
        case 0: _t->fileNameChanged((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 1: _t->encodingChanged((*reinterpret_cast< QTextCodec*(*)>(_a[1]))); break;
        case 2: _t->slotReturnPressed(); break;
        case 3: _t->slotBrowseButtonClicked(); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData DiffTextWindowFrame::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject DiffTextWindowFrame::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_DiffTextWindowFrame,
      qt_meta_data_DiffTextWindowFrame, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &DiffTextWindowFrame::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *DiffTextWindowFrame::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *DiffTextWindowFrame::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_DiffTextWindowFrame))
        return static_cast<void*>(const_cast< DiffTextWindowFrame*>(this));
    return QWidget::qt_metacast(_clname);
}

int DiffTextWindowFrame::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 4)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 4;
    }
    return _id;
}

// SIGNAL 0
void DiffTextWindowFrame::fileNameChanged(const QString & _t1, int _t2)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void DiffTextWindowFrame::encodingChanged(QTextCodec * _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}
static const uint qt_meta_data_EncodingLabel[] = {

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
      15,   14,   14,   14, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_EncodingLabel[] = {
    "EncodingLabel\0\0slotEncodingChanged()\0"
};

void EncodingLabel::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        EncodingLabel *_t = static_cast<EncodingLabel *>(_o);
        switch (_id) {
        case 0: _t->slotEncodingChanged(); break;
        default: ;
        }
    }
    Q_UNUSED(_a);
}

const QMetaObjectExtraData EncodingLabel::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject EncodingLabel::staticMetaObject = {
    { &QLabel::staticMetaObject, qt_meta_stringdata_EncodingLabel,
      qt_meta_data_EncodingLabel, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &EncodingLabel::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *EncodingLabel::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *EncodingLabel::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_EncodingLabel))
        return static_cast<void*>(const_cast< EncodingLabel*>(this));
    return QLabel::qt_metacast(_clname);
}

int EncodingLabel::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QLabel::qt_metacall(_c, _id, _a);
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
