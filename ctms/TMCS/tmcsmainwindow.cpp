#include "tmcsmainwindow.h"
#include "tmcsnewprojekt.h"

#include <qapplication.h>
#include <qworkspace.h>
#include <qmenubar.h>
#include <qtoolbar.h>
#include <qpopupmenu.h>
#include <qaction.h>


TMCSMainWindow::TMCSMainWindow( QWidget* parent, const char* name, WFlags f )
	: QMainWindow( parent, name, f )
{
	setCaption("TMCS");

	mdi = new QWorkspace( this, "workspace" );
	mdi->setBackgroundMode( PaletteDark );

	QPopupMenu *stdMenu = new QPopupMenu( this );
	QPopupMenu *timeMenu = new QPopupMenu( this );
	menuBar()->insertItem( tr("&Stammdaten"), stdMenu );
	menuBar()->insertItem( tr("&Zeiterfassung"),timeMenu);
	QToolBar *stdToolBar = new QToolBar( this );
	QToolBar *timeToolBar = new QToolBar(this);
	addToolBar( stdToolBar, tr("Projekt erfassen") );
	addToolBar( stdToolBar, tr("Projekte anzeigen") );
	addToolBar( stdToolBar, tr("Kunden Erfassen") );
	addToolBar( timeToolBar, tr("Zeiterfassung") );
	
	QAction *action = 0;

	action = new QAction( tr("Master Data"), tr("&Master Data"), CTRL+Key_N, this );
	connect( action, SIGNAL( activated() ), SLOT( prjNew() ) );
	action->addTo( stdMenu );
	action->addTo( stdToolBar );

	action = new QAction( tr("Projekte anzeigen"),tr("Projekte &Anzeigen"),CTRL+Key_A, this);
	connect( action, SIGNAL( activated() ), SLOT( prjSearch() ) );
	action->addTo(stdMenu);
	action->addTo( stdToolBar );

	action = new QAction( tr("Exit"), tr("E&xit"), 0, this );
	stdMenu->insertSeparator();
	action->addTo( stdMenu );
	connect( action, SIGNAL( activated() ), qApp, SLOT( closeAllWindows() ) );

	// Insert more actions

	setCentralWidget( mdi );

}


void TMCSMainWindow::prjNew()
{
	// Use your own documentclass

	tmcsnewprojekt *prj = new tmcsnewprojekt( mdi, "$MSDEVPROJECTNAME document" );
	prj->setCaption( tr("Projekt%1").arg( mdi->windowList().count()+1 ) );
	prj->show();
	prj->setWindowState(WindowMaximized);
}

void TMCSMainWindow::prjSearch()
{
}