#include <qapplication.h>
#include <qlistbox.h>
#include <qsqldatabase.h>
#include <qmessagebox.h>
#include <qfile.h>
#include <qdom.h>
#include <iostream>

const QChar CARRAGERETURN=13;
const QChar LINEFEED=10;

QString getHeaderInformation( const QDomNode &header )
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

int main( int argc, char ** argv )
{
    QApplication a( argc, argv );

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

    QDomElement docElem = doc.documentElement();
    QDomNode n = docElem.firstChild();
	QDomNode save = n;
	QDomNodeList *domList = new QDomNodeList();
	QListBox *domelementList = new QListBox();
	int i = 0;
    while( !n.isNull() ) {
        QDomElement e = n.toElement(); // try to convert the node to an element.
        if( !e.isNull() ) 
		{
			domelementList->insertItem(e.tagName());
			
			if( n.hasChildNodes() )
			{
				*domList = n.childNodes();
				save = n;
				while(domList->count() >= i)
				{
					n = domList->item(i).toElement();
					if (n.isElement())
					{
                        domelementList->insertItem(n.toElement().nodeName());
						domelementList->insertItem(getHeaderInformation(n));
					}
					++i;
				}
			}
        }
		i = 0;
		n = save.nextSibling();
    }
	domelementList->show();	
/*
	QSqlDatabase *dbConnectStream = QSqlDatabase::addDatabase("QODBC3");
	dbConnectStream->setDatabaseName("nordwind");
	dbConnectStream->setHostName("localhost");

	if (!dbConnectStream->open())
	{
		qDebug("Connect hat nicht funktioniert");
		QSqlError *dbError = new QSqlError(dbConnectStream->lastError());
		QMessageBox::warning(0,"Sql Error",dbError->databaseText() 
			+ CARRAGERETURN + LINEFEED +
			+ dbError->driverText() + CARRAGERETURN + LINEFEED +
			dbError->text());
	}
	else
		qDebug("Connect hat funktioniert");
	
    QStringList* dbTables = new QStringList();
	*dbTables = dbConnectStream->tables(QSql::AllTables);
	QListBox *tableList = new QListBox();
	for (QStringList::Iterator it=dbTables->begin();it!=dbTables->end();++it)
	{
		tableList->insertItem(*it);
	}
	
	tableList->show();	
    dbConnectStream->close();*/
    a.connect( &a, SIGNAL( lastWindowClosed() ), &a, SLOT( quit() ) );
    return a.exec();
}
