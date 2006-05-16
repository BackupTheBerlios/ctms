/****************************************************************************
** Form implementation generated from reading ui file '.\tmcsnewprojekt.ui'
**
** Created: Fr 16. Dez 23:40:35 2005
**      by: The User Interface Compiler ($Id: tmcsnewprojekt.cpp,v 1.1 2006/05/16 20:18:45 wekl Exp $)
**
** WARNING! All changes made in this file will be lost!
****************************************************************************/

#include "tmcsnewprojekt.h"

#include <qvariant.h>
#include <qsqldatabase.h>
#include <qsqlcursor.h>
#include <qsqlform.h>
#include <qsqlrecord.h>
#include <qpushbutton.h>
#include <qdataview.h>
#include <qlabel.h>
#include <qlineedit.h>
#include <qspinbox.h>
#include <qlayout.h>
#include <qtooltip.h>
#include <qwhatsthis.h>
#include <qmessagebox.h>
const QChar CARRAGERETURN=13;
const QChar LINEFEED=10;
/*
 *  Constructs a tmcsnewprojekt as a child of 'parent', with the
 *  name 'name' and widget flags set to 'f'.
 *
 *  The dialog will by default be modeless, unless you set 'modal' to
 *  TRUE to construct a modal dialog.
 */
tmcsnewprojekt::tmcsnewprojekt( QWidget* parent, const char* name,WFlags f )
    : QWidget( parent, name, f)
{
    if ( !name )
		setName( "tmcsnewprojekt" );
    //setSizeGripEnabled( TRUE );

    dataView1 = new QDataView( this, "dataView1" );
    dataView1->setGeometry( QRect( 10, 10, 750, 540 ) );
    dataView1Layout = new QGridLayout( dataView1, 1, 1, 11, 6, "dataView1Layout"); 

    layout2 = new QGridLayout( 0, 1, 1, 0, 6, "layout2"); 

    labelCust_email = new QLabel( dataView1, "labelCust_email" );

    layout2->addWidget( labelCust_email, 7, 2 );

    QLineEditCust_firmname2 = new QLineEdit( dataView1, "QLineEditCust_firmname2" );

    layout2->addWidget( QLineEditCust_firmname2, 7, 1 );

    labelCust_zipcode = new QLabel( dataView1, "labelCust_zipcode" );

    layout2->addWidget( labelCust_zipcode, 4, 0 );

    QLineEditCust_email = new QLineEdit( dataView1, "QLineEditCust_email" );

    layout2->addWidget( QLineEditCust_email, 7, 3 );

    labelCust_payproberty = new QLabel( dataView1, "labelCust_payproberty" );

    layout2->addWidget( labelCust_payproberty, 3, 2 );

    labelCust_firmname = new QLabel( dataView1, "labelCust_firmname" );

    layout2->addWidget( labelCust_firmname, 6, 0 );

    QLineEditCust_zipcode = new QLineEdit( dataView1, "QLineEditCust_zipcode" );

    layout2->addWidget( QLineEditCust_zipcode, 4, 1 );

    QLineEditCust_payproberty = new QLineEdit( dataView1, "QLineEditCust_payproberty" );

    layout2->addWidget( QLineEditCust_payproberty, 3, 3 );

    QLineEditCust_firmname = new QLineEdit( dataView1, "QLineEditCust_firmname" );

    layout2->addWidget( QLineEditCust_firmname, 6, 1 );

    QLineEditCust_name = new QLineEdit( dataView1, "QLineEditCust_name" );

    layout2->addWidget( QLineEditCust_name, 1, 1 );

    labelCust_kredit = new QLabel( dataView1, "labelCust_kredit" );

    layout2->addWidget( labelCust_kredit, 2, 2 );

    QLineEditCust_kredit = new QLineEdit( dataView1, "QLineEditCust_kredit" );
    QLineEditCust_kredit->setAlignment( int( QLineEdit::AlignRight ) );

    layout2->addWidget( QLineEditCust_kredit, 2, 3 );

    QLineEditCust_city = new QLineEdit( dataView1, "QLineEditCust_city" );

    layout2->addWidget( QLineEditCust_city, 5, 1 );

    labelCust_street = new QLabel( dataView1, "labelCust_street" );

    layout2->addWidget( labelCust_street, 3, 0 );

    labelCust_homepage = new QLabel( dataView1, "labelCust_homepage" );

    layout2->addWidget( labelCust_homepage, 8, 2 );

    labelCust_telnumber = new QLabel( dataView1, "labelCust_telnumber" );

    layout2->addWidget( labelCust_telnumber, 5, 2 );

    labelCust_firmname2 = new QLabel( dataView1, "labelCust_firmname2" );

    layout2->addWidget( labelCust_firmname2, 7, 0 );

    QLineEditCust_homepage = new QLineEdit( dataView1, "QLineEditCust_homepage" );

    layout2->addWidget( QLineEditCust_homepage, 8, 3 );

    labelCust_faxnummer = new QLabel( dataView1, "labelCust_faxnummer" );

    layout2->addWidget( labelCust_faxnummer, 6, 2 );

    QLineEditCust_faxnummer = new QLineEdit( dataView1, "QLineEditCust_faxnummer" );

    layout2->addWidget( QLineEditCust_faxnummer, 6, 3 );

    QLineEditCust_firstname = new QLineEdit( dataView1, "QLineEditCust_firstname" );

    layout2->addWidget( QLineEditCust_firstname, 2, 1 );

    labelCust_firstname = new QLabel( dataView1, "labelCust_firstname" );

    layout2->addWidget( labelCust_firstname, 2, 0 );

    QLineEditCust_bic = new QLineEdit( dataView1, "QLineEditCust_bic" );

    layout2->addWidget( QLineEditCust_bic, 1, 3 );

    labelCust_id = new QLabel( dataView1, "labelCust_id" );

    layout2->addWidget( labelCust_id, 0, 0 );

    labelCust_city = new QLabel( dataView1, "labelCust_city" );

    layout2->addWidget( labelCust_city, 5, 0 );

    labelCust_name = new QLabel( dataView1, "labelCust_name" );

    layout2->addWidget( labelCust_name, 1, 0 );

    labelCust_iban = new QLabel( dataView1, "labelCust_iban" );

    layout2->addWidget( labelCust_iban, 0, 2 );

    QLineEditCust_iban = new QLineEdit( dataView1, "QLineEditCust_iban" );

    layout2->addWidget( QLineEditCust_iban, 0, 3 );

    labelCust_contact = new QLabel( dataView1, "labelCust_contact" );

    layout2->addWidget( labelCust_contact, 4, 2 );

    QLineEditCust_contact = new QLineEdit( dataView1, "QLineEditCust_contact" );

    layout2->addWidget( QLineEditCust_contact, 4, 3 );

    QLineEditCust_street = new QLineEdit( dataView1, "QLineEditCust_street" );

    layout2->addWidget( QLineEditCust_street, 3, 1 );

    QLineEditCust_telnumber = new QLineEdit( dataView1, "QLineEditCust_telnumber" );

    layout2->addWidget( QLineEditCust_telnumber, 5, 3 );

    labelCust_bic = new QLabel( dataView1, "labelCust_bic" );

    layout2->addWidget( labelCust_bic, 1, 2 );

    QSpinBoxCust_id = new QSpinBox( dataView1, "QSpinBoxCust_id" );
    QSpinBoxCust_id->setMaxValue( 2147483647 );

    layout2->addWidget( QSpinBoxCust_id, 0, 1 );

    dataView1Layout->addLayout( layout2, 0, 0 );

    QWidget* privateLayoutWidget = new QWidget( this, "Layout1" );
    privateLayoutWidget->setGeometry( QRect( 10, 560, 740, 33 ) );
    Layout1 = new QHBoxLayout( privateLayoutWidget, 0, 6, "Layout1"); 

    buttonHelp = new QPushButton( privateLayoutWidget, "buttonHelp" );
    buttonHelp->setAutoDefault( TRUE );
    Layout1->addWidget( buttonHelp );
    Horizontal_Spacing2 = new QSpacerItem( 20, 20, QSizePolicy::Expanding, QSizePolicy::Minimum );
    Layout1->addItem( Horizontal_Spacing2 );

    buttonApply = new QPushButton( privateLayoutWidget, "buttonApply" );
    buttonApply->setAutoDefault( TRUE );
    Layout1->addWidget( buttonApply );

    buttonOk = new QPushButton( privateLayoutWidget, "buttonOk" );
    buttonOk->setAutoDefault( TRUE );
    buttonOk->setDefault( TRUE );
    Layout1->addWidget( buttonOk );

    buttonCancel = new QPushButton( privateLayoutWidget, "buttonCancel" );
    buttonCancel->setAutoDefault( TRUE );
    Layout1->addWidget( buttonCancel );

    ctmsConnection = QSqlDatabase::addDatabase( "QODBC3" );
	ctmsConnection->setDatabaseName("ctms");
	ctmsConnection->setHostName("localhost");

	if (!ctmsConnection->open())
	{
		qDebug("Connect hat nicht funktioniert");
		QSqlError *dbError = new QSqlError(ctmsConnection->lastError());
		QMessageBox::warning(0,"Sql Error",dbError->databaseText() 
			+ CARRAGERETURN + LINEFEED 
			+ dbError->driverText() + CARRAGERETURN + LINEFEED +
			dbError->text());
	}
	else
		qDebug("Connect hat funktioniert");

    QSqlForm* dataView1Form =  new QSqlForm( this, "dataView1Form" );

	dataView1Form->insert( QLineEditCust_firmname2, "cust_firmname2" );
    dataView1Form->insert( QLineEditCust_email, "cust_email" );
    dataView1Form->insert( QLineEditCust_zipcode, "cust_zipcode" );
    dataView1Form->insert( QLineEditCust_payproberty, "cust_payproberty" );
    dataView1Form->insert( QLineEditCust_firmname, "cust_firmname" );
    dataView1Form->insert( QLineEditCust_name, "cust_name" );
    dataView1Form->insert( QLineEditCust_kredit, "cust_kredit" );
    dataView1Form->insert( QLineEditCust_city, "cust_city" );
    dataView1Form->insert( QLineEditCust_homepage, "cust_homepage" );
    dataView1Form->insert( QLineEditCust_faxnummer, "cust_faxnummer" );
    dataView1Form->insert( QLineEditCust_firstname, "cust_firstname" );
    dataView1Form->insert( QLineEditCust_bic, "cust_bic" );
    dataView1Form->insert( QLineEditCust_iban, "cust_iban" );
    dataView1Form->insert( QLineEditCust_contact, "cust_contact" );
    dataView1Form->insert( QLineEditCust_street, "cust_street" );
    dataView1Form->insert( QLineEditCust_telnumber, "cust_telnumber" );
    dataView1Form->insert( QSpinBoxCust_id, "cust_id" );
    dataView1->setForm( dataView1Form );
    languageChange();
    resize( QSize(769, 607).expandedTo(minimumSizeHint()) );
    clearWState( WState_Polished );

    // signals and slots connections
    connect( buttonOk, SIGNAL( clicked() ), this, SLOT( accept() ) );
    connect( buttonCancel, SIGNAL( clicked() ), this, SLOT( reject() ) );
	connect( buttonApply, SIGNAL( clicked() ), this, SLOT( save() ));
}

/*
 *  Destroys the object and frees any allocated resources
 */
tmcsnewprojekt::~tmcsnewprojekt()
{
    // no need to delete child widgets, Qt does it all for us
}

/*
 *  Sets the strings of the subwidgets using the current
 *  language.
 */
void tmcsnewprojekt::languageChange()
{
    setCaption( tr( "tmcsnewprojekt" ) );
    labelCust_email->setText( tr( "Cust_email" ) );
    labelCust_zipcode->setText( tr( "Cust_zipcode" ) );
    labelCust_payproberty->setText( tr( "Cust_payproberty" ) );
    labelCust_firmname->setText( tr( "Cust_firmname" ) );
    labelCust_kredit->setText( tr( "Cust_kredit" ) );
    labelCust_street->setText( tr( "Cust_street" ) );
    labelCust_homepage->setText( tr( "Cust_homepage" ) );
    labelCust_telnumber->setText( tr( "Cust_telnumber" ) );
    labelCust_firmname2->setText( tr( "Cust_firmname2" ) );
    labelCust_faxnummer->setText( tr( "Cust_faxnummer" ) );
    labelCust_firstname->setText( tr( "Cust_firstname" ) );
    labelCust_id->setText( tr( "Cust_id" ) );
    labelCust_city->setText( tr( "Cust_city" ) );
    labelCust_name->setText( tr( "Cust_name" ) );
    labelCust_iban->setText( tr( "Cust_iban" ) );
    labelCust_contact->setText( tr( "Cust_contact" ) );
    labelCust_bic->setText( tr( "Cust_bic" ) );
    buttonHelp->setText( tr( "&Help" ) );
    buttonApply->setText( tr( "&Apply" ) );
    buttonOk->setCaption( QString::null );
    buttonOk->setText( tr( "&OK" ) );
    buttonCancel->setText( tr( "&Cancel" ) );
    buttonCancel->setAccel( QKeySequence( tr( "Alt+C" ) ) );
}

bool tmcsnewprojekt::save()
{
	QSqlQuery q1(ctmsConnection);
	q1.prepare("insert into ctms_costumer(cust_name, cust_firstname )"
		"VALUES (:name, :firstname )");
//	q1.bindValue( ":id",1);
	q1.bindValue( ":name",QLineEditCust_name->text());
//	q1.bindValue( ":name","Das ist ein TEst");
	q1.bindValue( ":firstname",QLineEditCust_firstname->text());
	q1.exec();
	QSqlError q1Error(q1.lastError());
	qDebug(q1Error.text() );
	return q1Error.number();
}



void tmcsnewprojekt::accept()
{
	
}

void tmcsnewprojekt::reject()
{
	close(0);
}