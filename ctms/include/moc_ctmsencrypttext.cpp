/****************************************************************************
** ctmsEncryptText meta object code from reading C++ file 'ctmsencrypttext.h'
**
** Created: Tue Feb 15 11:42:51 2005
**      by: The Qt MOC ($Id: moc_ctmsencrypttext.cpp,v 1.1 2005/03/09 17:08:59 wekl Exp $)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#undef QT_NO_COMPAT
#include "ctmsencrypttext.h"
#include <qmetaobject.h>
#include <qapplication.h>

#include <private/qucomextra_p.h>
#if !defined(Q_MOC_OUTPUT_REVISION) || (Q_MOC_OUTPUT_REVISION != 26)
#error "This file was generated using the moc from 3.3.3. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

const char *ctmsEncryptText::className() const
{
    return "ctmsEncryptText";
}

QMetaObject *ctmsEncryptText::metaObj = 0;
static QMetaObjectCleanUp cleanUp_ctmsEncryptText( "ctmsEncryptText", &ctmsEncryptText::staticMetaObject );

#ifndef QT_NO_TRANSLATION
QString ctmsEncryptText::tr( const char *s, const char *c )
{
    if ( qApp )
	return qApp->translate( "ctmsEncryptText", s, c, QApplication::DefaultCodec );
    else
	return QString::fromLatin1( s );
}
#ifndef QT_NO_TRANSLATION_UTF8
QString ctmsEncryptText::trUtf8( const char *s, const char *c )
{
    if ( qApp )
	return qApp->translate( "ctmsEncryptText", s, c, QApplication::UnicodeUTF8 );
    else
	return QString::fromUtf8( s );
}
#endif // QT_NO_TRANSLATION_UTF8

#endif // QT_NO_TRANSLATION

QMetaObject* ctmsEncryptText::staticMetaObject()
{
    if ( metaObj )
	return metaObj;
    QMetaObject* parentObject = QTextEdit::staticMetaObject();
    metaObj = QMetaObject::new_metaobject(
	"ctmsEncryptText", parentObject,
	0, 0,
	0, 0,
#ifndef QT_NO_PROPERTIES
	0, 0,
	0, 0,
#endif // QT_NO_PROPERTIES
	0, 0 );
    cleanUp_ctmsEncryptText.setMetaObject( metaObj );
    return metaObj;
}

void* ctmsEncryptText::qt_cast( const char* clname )
{
    if ( !qstrcmp( clname, "ctmsEncryptText" ) )
	return this;
    return QTextEdit::qt_cast( clname );
}

bool ctmsEncryptText::qt_invoke( int _id, QUObject* _o )
{
    return QTextEdit::qt_invoke(_id,_o);
}

bool ctmsEncryptText::qt_emit( int _id, QUObject* _o )
{
    return QTextEdit::qt_emit(_id,_o);
}
#ifndef QT_NO_PROPERTIES

bool ctmsEncryptText::qt_property( int id, int f, QVariant* v)
{
    return QTextEdit::qt_property( id, f, v);
}

bool ctmsEncryptText::qt_static_property( QObject* , int , int , QVariant* ){ return FALSE; }
#endif // QT_NO_PROPERTIES
