/****************************************************************************
** tmcsnewprojektImpl meta object code from reading C++ file 'tmcsnewprojektimpl.h'
**
** Created: Fr 16. Dez 23:40:36 2005
**      by: The Qt MOC ($Id: moc_tmcsnewprojektimpl.cpp,v 1.1 2006/05/16 20:18:45 wekl Exp $)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#undef QT_NO_COMPAT
#include "tmcsnewprojektimpl.h"
#include <qmetaobject.h>
#include <qapplication.h>

#include <private/qucomextra_p.h>
#if !defined(Q_MOC_OUTPUT_REVISION) || (Q_MOC_OUTPUT_REVISION != 26)
#error "This file was generated using the moc from 3.3.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

const char *tmcsnewprojektImpl::className() const
{
    return "tmcsnewprojektImpl";
}

QMetaObject *tmcsnewprojektImpl::metaObj = 0;
static QMetaObjectCleanUp cleanUp_tmcsnewprojektImpl( "tmcsnewprojektImpl", &tmcsnewprojektImpl::staticMetaObject );

#ifndef QT_NO_TRANSLATION
QString tmcsnewprojektImpl::tr( const char *s, const char *c )
{
    if ( qApp )
	return qApp->translate( "tmcsnewprojektImpl", s, c, QApplication::DefaultCodec );
    else
	return QString::fromLatin1( s );
}
#ifndef QT_NO_TRANSLATION_UTF8
QString tmcsnewprojektImpl::trUtf8( const char *s, const char *c )
{
    if ( qApp )
	return qApp->translate( "tmcsnewprojektImpl", s, c, QApplication::UnicodeUTF8 );
    else
	return QString::fromUtf8( s );
}
#endif // QT_NO_TRANSLATION_UTF8

#endif // QT_NO_TRANSLATION

QMetaObject* tmcsnewprojektImpl::staticMetaObject()
{
    if ( metaObj )
	return metaObj;
    QMetaObject* parentObject = tmcsnewprojekt::staticMetaObject();
    metaObj = QMetaObject::new_metaobject(
	"tmcsnewprojektImpl", parentObject,
	0, 0,
	0, 0,
#ifndef QT_NO_PROPERTIES
	0, 0,
	0, 0,
#endif // QT_NO_PROPERTIES
	0, 0 );
    cleanUp_tmcsnewprojektImpl.setMetaObject( metaObj );
    return metaObj;
}

void* tmcsnewprojektImpl::qt_cast( const char* clname )
{
    if ( !qstrcmp( clname, "tmcsnewprojektImpl" ) )
	return this;
    return tmcsnewprojekt::qt_cast( clname );
}

bool tmcsnewprojektImpl::qt_invoke( int _id, QUObject* _o )
{
    return tmcsnewprojekt::qt_invoke(_id,_o);
}

bool tmcsnewprojektImpl::qt_emit( int _id, QUObject* _o )
{
    return tmcsnewprojekt::qt_emit(_id,_o);
}
#ifndef QT_NO_PROPERTIES

bool tmcsnewprojektImpl::qt_property( int id, int f, QVariant* v)
{
    return tmcsnewprojekt::qt_property( id, f, v);
}

bool tmcsnewprojektImpl::qt_static_property( QObject* , int , int , QVariant* ){ return FALSE; }
#endif // QT_NO_PROPERTIES
