/****************************************************************************
** ctms_upd_db_tool meta object code from reading C++ file 'ctms_upd_db_tool.h'
**
** Created: Tue Feb 15 11:42:49 2005
**      by: The Qt MOC ($Id: moc_ctms_upd_db_tool.cpp,v 1.1 2005/03/09 17:08:59 wekl Exp $)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#undef QT_NO_COMPAT
#include "ctms_upd_db_tool.h"
#include <qmetaobject.h>
#include <qapplication.h>

#include <private/qucomextra_p.h>
#if !defined(Q_MOC_OUTPUT_REVISION) || (Q_MOC_OUTPUT_REVISION != 26)
#error "This file was generated using the moc from 3.3.3. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

const char *ctms_upd_db_tool::className() const
{
    return "ctms_upd_db_tool";
}

QMetaObject *ctms_upd_db_tool::metaObj = 0;
static QMetaObjectCleanUp cleanUp_ctms_upd_db_tool( "ctms_upd_db_tool", &ctms_upd_db_tool::staticMetaObject );

#ifndef QT_NO_TRANSLATION
QString ctms_upd_db_tool::tr( const char *s, const char *c )
{
    if ( qApp )
	return qApp->translate( "ctms_upd_db_tool", s, c, QApplication::DefaultCodec );
    else
	return QString::fromLatin1( s );
}
#ifndef QT_NO_TRANSLATION_UTF8
QString ctms_upd_db_tool::trUtf8( const char *s, const char *c )
{
    if ( qApp )
	return qApp->translate( "ctms_upd_db_tool", s, c, QApplication::UnicodeUTF8 );
    else
	return QString::fromUtf8( s );
}
#endif // QT_NO_TRANSLATION_UTF8

#endif // QT_NO_TRANSLATION

QMetaObject* ctms_upd_db_tool::staticMetaObject()
{
    if ( metaObj )
	return metaObj;
    QMetaObject* parentObject = QMainWindow::staticMetaObject();
    static const QUMethod slot_0 = {"expXML", 0, 0 };
    static const QUMethod slot_1 = {"impXML", 0, 0 };
    static const QUMethod slot_2 = {"about", 0, 0 };
    static const QUMethod slot_3 = {"aboutQt", 0, 0 };
    static const QMetaData slot_tbl[] = {
	{ "expXML()", &slot_0, QMetaData::Private },
	{ "impXML()", &slot_1, QMetaData::Private },
	{ "about()", &slot_2, QMetaData::Private },
	{ "aboutQt()", &slot_3, QMetaData::Private }
    };
    metaObj = QMetaObject::new_metaobject(
	"ctms_upd_db_tool", parentObject,
	slot_tbl, 4,
	0, 0,
#ifndef QT_NO_PROPERTIES
	0, 0,
	0, 0,
#endif // QT_NO_PROPERTIES
	0, 0 );
    cleanUp_ctms_upd_db_tool.setMetaObject( metaObj );
    return metaObj;
}

void* ctms_upd_db_tool::qt_cast( const char* clname )
{
    if ( !qstrcmp( clname, "ctms_upd_db_tool" ) )
	return this;
    return QMainWindow::qt_cast( clname );
}

bool ctms_upd_db_tool::qt_invoke( int _id, QUObject* _o )
{
    switch ( _id - staticMetaObject()->slotOffset() ) {
    case 0: expXML(); break;
    case 1: impXML(); break;
    case 2: about(); break;
    case 3: aboutQt(); break;
    default:
	return QMainWindow::qt_invoke( _id, _o );
    }
    return TRUE;
}

bool ctms_upd_db_tool::qt_emit( int _id, QUObject* _o )
{
    return QMainWindow::qt_emit(_id,_o);
}
#ifndef QT_NO_PROPERTIES

bool ctms_upd_db_tool::qt_property( int id, int f, QVariant* v)
{
    return QMainWindow::qt_property( id, f, v);
}

bool ctms_upd_db_tool::qt_static_property( QObject* , int , int , QVariant* ){ return FALSE; }
#endif // QT_NO_PROPERTIES
