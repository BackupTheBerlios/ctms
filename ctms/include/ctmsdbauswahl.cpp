#include <ctmsdbauswahl.h>
class QDialog;
ctmsDBAuswahl::ctmsDBAuswahl(QWidget *parent, char *name, bool modal, WFlags fl)
: QDialog(parent,name,modal,fl)
{
	// read File and make DomDocument
	QDomDocument doc( "ctms_database" );
    QFile file( "ctms_database.xml" );
    if ( !file.open( IO_ReadOnly ) )
        return -1;
    if ( !doc.setContent( &file ) ) 
	{
        file.close();
        return -1;
    }
    file.close();

}

ctmsDBAuswahl::~ctmsDBAuswahl()
{
}

void ctmsDBAuswahl::languageChange()
{
    setCaption( trUtf8( "Database Auswahl" ) );
    buttonOk->setText( trUtf8( "&OK" ) );
    buttonOk->setAccel( QKeySequence( QString::null ) );
}
