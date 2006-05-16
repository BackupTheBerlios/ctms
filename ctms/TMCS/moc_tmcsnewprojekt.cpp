/****************************************************************************
** tmcsnewprojekt meta object code from reading C++ file 'tmcsnewprojekt.h'
**
** Created: Do 29. Dez 21:40:10 2005
**      by: The Qt MOC ($Id: moc_tmcsnewprojekt.cpp,v 1.1 2006/05/16 20:18:45 wekl Exp $)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#undef QT_NO_COMPAT
#include "tmcsnewprojekt.h"
#include <qmetaobject.h>
#include <qapplication.h>

#include <private/qucomextra_p.h>
#if !defined(Q_MOC_OUTPUT_REVISION) || (Q_MOC_OUTPUT_REVISION != 26)
#error "This file was generated using the moc from 3.3.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

const char *tmcsnewprojekt::className() const
{
    return "tmcsnewprojekt";
}

QMetaObject *tmcsnewprojekt::metaObj = 0;
static QMetaObjectCleanUp cleanUp_tmcsnewprojekt( "tmcsnewprojekt", &tmcsnewprojekt::staticMetaObject );

#ifndef QT_NO_TRANSLATION
QString tmcsnewprojekt::tr( const char *s, const char *c )
{
    if ( qApp )
	return qApp->translate( "tmcsnewprojekt", s, c, QApplication::DefaultCodec );
    else
	return QString::fromLatin1( s );
}
#ifndef QT_NO_TRANSLATION_UTF8
QString tmcsnewprojekt::trUtf8( const char *s, const char *c )
{
    if ( qApp )
	return qApp->translate( "tmcsnewprojekt", s, c, QApplication::UnicodeUTF8 );
    else
	return QString::fromUtf8( s );
}
#endif // QT_NO_TRANSLATION_UTF8

#endif // QT_NO_TRANSLATION

QMetaObject* tmcsnewprojekt::staticMetaObject()
{
    if ( metaObj )
	return metaObj;
    QMetaObject* parentObject = QWidget::staticMetaObject();
    static const QUMethod slot_0 = {"languageChange", 0, 0 };
    static const QUParameter param_slot_1[] = {
	{ 0, &static_QUType_bool, 0, QUParameter::Out }
    };
    static const QUMethod slot_1 = {"save", 1, param_slot_1 };
    static const QUMethod slot_2 = {"accept", 0, 0 };
    static const QUMethod slot_3 = {"reject", 0, 0 };
    static const QMetaData slot_tbl[] = {
	{ "languageChange()", &slot_0, QMetaData::Protected },
	{ "save()", &slot_1, QMetaData::Protected },
	{ "accept()", &slot_2, QMetaData::Protected },
	{ "reject()", &slot_3, QMetaData::Protected }
    };
    metaObj = QMetaObject::new_metaobject(
	"tmcsnewprojekt", parentObject,
	slot_tbl, 4,
	0, 0,
#ifndef QT_NO_PROPERTIES
	0, 0,
	0, 0,
#endif // QT_NO_PROPERTIES
	0, 0 );
    cleanUp_tmcsnewprojekt.setMetaObject( metaObj );
    return metaObj;
}

void* tmcsnewprojekt::qt_cast( const char* clname )
{
    if ( !qstrcmp( clname, "tmcsnewprojekt" ) )
	return this;
    return QWidget::qt_cast( clname );
}

bool tmcsnewprojekt::qt_invoke( int _id, QUObject* _o )
{
    switch ( _id - staticMetaObject()->slotOffset() ) {
    case 0: languageChange(); break;
    case 1: static_QUType_bool.set(_o,save()); break;
    case 2: accept(); break;
    case 3: reject(); break;
    default:
	return QWidget::qt_invoke( _id, _o );
    }
    return TRUE;
}

bool tmcsnewprojekt::qt_emit( int _id, QUObject* _o )
{
    return QWidget::qt_emit(_id,_o);
}
#ifndef QT_NO_PROPERTIES

bool tmcsnewprojekt::qt_property( int id, int f, QVariant* v)
{
    return QWidget::qt_property( id, f, v);
}

bool tmcsnewprojekt::qt_static_property( QObject* , int , int , QVariant* ){ return FALSE; }
#endif // QT_NO_PROPERTIES
