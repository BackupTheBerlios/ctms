#include <ctmsdbauswahl.h>
#include <qapplication.h>
#include <qdom.h>
#include <qfile.h>
#include <qcombobox.h>
#include <qmessagebox.h>
class QDialog;
ctmsDBAuswahl::ctmsDBAuswahl(QWidget *parent, char *name, bool modal, WFlags fl)
: QDialog(parent,name,modal,fl)
{
	// read File and make DomDocument
	QDomDocument doc( "ctms_database" );
    QFile file( "ctms_database.xml" );
	this->resize(400,200);
    if ( !file.open( IO_ReadOnly ) )
		QMessageBox::critical(this,tr("Fileerror"),tr("CAN_NOT_OPEN_FILE"));

    if ( !doc.setContent( &file ) ) 
	{
        file.close();
        QMessageBox::critical(this,tr("Fileerror"),tr("NOT_A_XML_DOCUMENT"));
    }
    file.close();
	comboDatabase = new QComboBox(this,"DBAuswahl");
    QDomElement docElem = doc.documentElement();
    QDomNode n = docElem.firstChild();
	QDomNode save = n;
	QDomNodeList *domList = new QDomNodeList();
	comboDatabase = new QComboBox();
	int i = 0;
    while( !n.isNull() ) {
        QDomElement e = n.toElement(); // try to convert the node to an element.
        if( !e.isNull() ) 
		{
//			domelementList->insertItem(e.tagName());
			
			if( n.hasChildNodes() )
			{
				*domList = n.childNodes();
				save = n;
				while(domList->count() >= i)
				{
					n = domList->item(i).toElement();
					if (n.isElement())
					{
						comboDatabase->insertItem(getHeaderInformation(n),-1);
//                      domelementList->insertItem(n.toElement().nodeName());
/*					switch(n.toElement().nodeName())
						{
						case "driver":
							break;
						case "typ":
							break;
						case "name":
							break;
						case "hostname":
							break;
						case "username":
							break;
						case "password":
							break;
						case "schema":
							break
						default:
							break;
						}
*/
//						domelementList->insertItem(getHeaderInformation(n));
						QApplication::beep();
					}
					++i;
				}
			}
        }
		i = 0;
		n = save.nextSibling();
    }
//	domelementList->show();	
//	comboDatabase->show();
}

QString ctmsDBAuswahl::getHeaderInformation( const QDomNode &header )
{
    // visit all children of the header element and look if you can make
    // something with it
    QDomNode node = header;
    while ( !node.isNull() ) 
	{
        if ( node.isElement() ) 
		{
            // case for the different header entries
			QDomText textChild = node.firstChild().toText();
            if ( !textChild.isNull() ) 
			{
				return textChild.nodeValue();
            }
			else if ( !node.lastChild().toText().isNull())
			{
				return node.lastChild().toText().nodeValue();
			}
			else
			{
				return "kein Text gefunden";
			}
		}
    }
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
