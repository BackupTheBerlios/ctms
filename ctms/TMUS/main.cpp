
#include <qapplication.h>
#include <qtranslator.h>
#include <ctms_upd_db_tool.h>
#include <ctmsdbauswahl.h>
#include <login.h>
#include <qdialog.h>
int main( int argc, char ** argv ) {
    QApplication app( argc, argv );
    QTranslator translator(0);
    
    if (!translator.load("german","."))
    	qDebug("Übersetzung hat nicht geklappt");
    else
    	qDebug("Die Übersetzung hat funktioniert");
    	
    app.installTranslator(&translator);

	ctmsDBAuswahl* DatabaseAuswahl = new ctmsDBAuswahl();
	DatabaseAuswahl->show();
//    LoginDialog* UserReg = new LoginDialog();
//    UserReg->show();
//    ctms_upd_db_tool * mw = new ctms_upd_db_tool();
//    mw->setCaption("ctms_upd_db_tool" );
//    mw->show();
    app.connect( &app, SIGNAL(lastWindowClosed()), &app, SLOT(quit()) );
    return app.exec();
}
