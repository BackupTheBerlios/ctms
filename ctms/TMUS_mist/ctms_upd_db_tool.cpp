
#include "ctms_upd_db_tool.h"

#include <qimage.h>
#include <qpixmap.h>
#include <qtoolbar.h>
#include <qtoolbutton.h>
#include <qpopupmenu.h>
#include <qmenubar.h>
#include <qtextedit.h>
#include <qfile.h>
#include <qfiledialog.h>
#include <qstatusbar.h>
#include <qmessagebox.h>
#include <qprinter.h>
#include <qapplication.h>
#include <qaccel.h>
#include <qtextstream.h>
#include <qpainter.h>
#include <qpaintdevicemetrics.h>
#include <qwhatsthis.h>

ctms_upd_db_tool::ctms_upd_db_tool()
    : QMainWindow( 0, "ctms_upd_db_tool", WDestructiveClose )
{
    QPopupMenu * file = new QPopupMenu( this );
    menuBar()->insertItem( trUtf8("&File"), file );
    file->insertItem( trUtf8("&expXML"), this, SLOT(expXML()), CTRL+Key_E );

    file->insertItem( trUtf8("&impXML..."), this, SLOT(impXML()), CTRL+Key_I );

    file->insertItem( trUtf8("&Quit"), qApp, SLOT( closeAllWindows() ), CTRL+Key_Q );

    menuBar()->insertSeparator();

    QPopupMenu * help = new QPopupMenu( this );
    menuBar()->insertItem( trUtf8("&Help"), help );

    help->insertItem( trUtf8("&About"), this, SLOT(about()), Key_F1 );
    help->insertItem( trUtf8("About &Qt"), this, SLOT(aboutQt()) );
    help->insertSeparator();
    help->insertItem( trUtf8("What's &This"), this, SLOT(whatsThis()), SHIFT+Key_F1 );

    resize( 800, 600 );
}


ctms_upd_db_tool::~ctms_upd_db_tool()
{
}



void ctms_upd_db_tool::expXML()
{
    
}

void ctms_upd_db_tool::impXML()
{
}



void ctms_upd_db_tool::closeEvent( QCloseEvent* ce )
{
	ce->accept();
	return;

}


void ctms_upd_db_tool::about()
{
    QMessageBox::about( this, trUtf8("Qt Application Example"),
			tr("This example demonstrates simple use of "
			"QMainWindow,\nQMenuBar and QToolBar."));
}


void ctms_upd_db_tool::aboutQt()
{
    QMessageBox::aboutQt( this, trUtf8("Qt Application Example") );
}
