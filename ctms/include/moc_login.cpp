/****************************************************************************
** LoginDialog meta object code from reading C++ file 'login.h'
**
** Created: Sun Feb 13 22:07:19 2005
**      by: The Qt MOC ($Id: moc_login.cpp,v 1.1 2005/03/09 17:08:59 wekl Exp $)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#undef QT_NO_COMPAT
#include "login.h"
#include <qmetaobject.h>
#include <qapplication.h>

#include <private/qucomextra_p.h>
#if !defined(Q_MOC_OUTPUT_REVISION) || (Q_MOC_OUTPUT_REVISION != 26)
#error "This file was generated using the moc from 3.3.3. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

const char *LoginDialog::className() const
{
    return "LoginDialog";
}

QMetaObject *LoginDialog::metaObj = 0;
static QMetaObjectCleanUp cleanUp_LoginDialog( "LoginDialog", &LoginDialog::staticMetaObject );

#ifndef QT_NO_TRANSLATION
QString LoginDialog::tr( const char *s, const char *c )
{
    if ( qApp )
	return qApp->translate( "LoginDialog", s, c, QApplication::DefaultCodec );
    else
	return QString::fromLatin1( s );
}
#ifndef QT_NO_TRANSLATION_UTF8
QString LoginDialog::trUtf8( const char *s, const char *c )
{
    if ( qApp )
	return qApp->translate( "LoginDialog", s, c, QApplication::UnicodeUTF8 );
    else
	return QString::fromUtf8( s );
}
#endif // QT_NO_TRANSLATION_UTF8

#endif // QT_NO_TRANSLATION

QMetaObject* LoginDialog::staticMetaObject()
{
    if ( metaObj )
	return metaObj;
    QMetaObject* parentObject = QDialog::staticMetaObject();
    static const QUMethod slot_0 = {"languageChange", 0, 0 };
    static const QMetaData slot_tbl[] = {
	{ "languageChange()", &slot_0, QMetaData::Protected }
    };
    metaObj = QMetaObject::new_metaobject(
	"LoginDialog", parentObject,
	slot_tbl, 1,
	0, 0,
#ifndef QT_NO_PROPERTIES
	0, 0,
	0, 0,
#endif // QT_NO_PROPERTIES
	0, 0 );
    cleanUp_LoginDialog.setMetaObject( metaObj );
    return metaObj;
}

void* LoginDialog::qt_cast( const char* clname )
{
    if ( !qstrcmp( clname, "LoginDialog" ) )
	return this;
    return QDialog::qt_cast( clname );
}

bool LoginDialog::qt_invoke( int _id, QUObject* _o )
{
    switch ( _id - staticMetaObject()->slotOffset() ) {
    case 0: languageChange(); break;
    default:
	return QDialog::qt_invoke( _id, _o );
    }
    return TRUE;
}

bool LoginDialog::qt_emit( int _id, QUObject* _o )
{
    return QDialog::qt_emit(_id,_o);
}
#ifndef QT_NO_PROPERTIES

bool LoginDialog::qt_property( int id, int f, QVariant* v)
{
    return QDialog::qt_property( id, f, v);
}

bool LoginDialog::qt_static_property( QObject* , int , int , QVariant* ){ return FALSE; }
#endif // QT_NO_PROPERTIES
