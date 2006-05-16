#include <qapplication.h>
#include "tmcsmainwindow.h"
#include <ctmsdbauswahl.h>
#include <qdialog.h>
int main( int argc, char** argv )
{
	QApplication app( argc, argv );

	
	TMCSMainWindow mainwindow;
	
	//ctmsDBAuswahl dlgDbAuswahl;
	//dlgDbAuswahl.show();	
	app.setMainWidget(&mainwindow);

	mainwindow.show();

	return app.exec();
}

