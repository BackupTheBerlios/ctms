/****************************************************************************
** TMCSMainWindow meta object code from reading C++ file 'tmcsmainwindow.h'
**
** Created: Do 29. Dez 21:40:10 2005
**      by: The Qt MOC ($Id: moc_tmcsmainwindow.cpp,v 1.1 2006/05/16 20:18:45 wekl Exp $)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#undef QT_NO_COMPAT
#include "tmcsmainwindow.h"
#include <qmetaobject.h>
#include <qapplication.h>

#include <private/qucomextra_p.h>
#if !defined(Q_MOC_OUTPUT_REVISION) || (Q_MOC_OUTPUT_REVISION != 26)
#error "This file was generated using the moc from 3.3.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

const char *TMCSMainWindow::className() const
{
    return "TMCSMainWindow";
}

QMetaObject *TMCSMainWindow::metaObj = 0;
static QMetaObjectCleanUp cleanUp_TMCSMainWindow( "TMCSMainWindow", &TMCSMainWindow::staticMetaObject );

#ifndef QT_NO_TRANSLATION
QString TMCSMainWindow::tr( const char *s, const char *c )
{
    if ( qApp )
	return qApp->translate( "TMCSMainWindow", s, c, QApplication::DefaultCodec );
    else
	return QString::fromLatin1( s );
}
#ifndef QT_NO_TRANSLATION_UTF8
QString TMCSMainWindow::trUtf8( const char *s, const char *c )
{
    if ( qApp )
	return qApp->translate( "TMCSMainWindow", s, c, QApplication::UnicodeUTF8 );
    else
	return QString::fromUtf8( s );
}
#endif // QT_NO_TRANSLATION_UTF8

#endif // QT_NO_TRANSLATION

QMetaObject* TMCSMainWindow::staticMetaObject()
{
    if ( metaObj )
	return metaObj;
    QMetaObject* parentObject = QMainWindow::staticMetaObject();
    static const QUMethod slot_0 = {"prjNew", 0, 0 };
    static const QUMethod slot_1 = {"prjSearch", 0, 0 };
    static const QMetaData slot_tbl[] = {
	{ "prjNew()", &slot_0, QMetaData::Protected },
	{ "prjSearch()", &slot_1, QMetaData::Protected }
    };
    metaObj = QMetaObject::new_metaobject(
	"TMCSMainWindow", parentObject,
	slot_tbl, 2,
	0, 0,
#ifndef QT_NO_PROPERTIES
	0, 0,
	0, 0,
#endif // QT_NO_PROPERTIES
	0, 0 );
    cleanUp_TMCSMainWindow.setMetaObject( metaObj );
    return metaObj;
}

void* TMCSMainWindow::qt_cast( const char* clname )
{
    if ( !qstrcmp( clname, "TMCSMainWindow" ) )
	return this;
    return QMainWindow::qt_cast( clname );
}

bool TMCSMainWindow::qt_invoke( int _id, QUObject* _o )
{
    switch ( _id - staticMetaObject()->slotOffset() ) {
    case 0: prjNew(); break;
    case 1: prjSearch(); break;
    default:
	return QMainWindow::qt_invoke( _id, _o );
    }
    return TRUE;
}

bool TMCSMainWindow::qt_emit( int _id, QUObject* _o )
{
    return QMainWindow::qt_emit(_id,_o);
}
#ifndef QT_NO_PROPERTIES

bool TMCSMainWindow::qt_property( int id, int f, QVariant* v)
{
    return QMainWindow::qt_property( id, f, v);
}

bool TMCSMainWindow::qt_static_property( QObject* , int , int , QVariant* ){ return FALSE; }
#endif // QT_NO_PROPERTIES
