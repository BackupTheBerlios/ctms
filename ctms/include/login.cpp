#include "login.h"
#include <ctmsencrypttext.h>
#include <qvariant.h>
#include <qpushbutton.h>
#include <qtextedit.h>
#include <qlabel.h>
#include <qlayout.h>
#include <qtooltip.h>
#include <qwhatsthis.h>

/** @author Werner Klocker
 *  Constructs a LoginDialog as a child of 'parent', with the
 *  name 'name' and widget flags set to 'f'.
 *
 *  The dialog will by default be modeless, unless you set 'modal' to
 *  TRUE to construct a modal dialog.
 */
LoginDialog::LoginDialog( QWidget* parent, const char* name, bool modal, WFlags fl )
    : QDialog( parent, name, modal, fl )
{
    if ( !name )
	setName( "LoginDialog" );
    setSizeGripEnabled( TRUE );

    QWidget* privateLayoutWidget = new QWidget( this, "layout3" );
    privateLayoutWidget->setGeometry( QRect( 21, 143, 302, 50 ) );
    layout3 = new QHBoxLayout( privateLayoutWidget, 11, 6, "layout3"); 

    buttonHelp = new ctmsButton( privateLayoutWidget, "buttonHelp" );
    buttonHelp->setAutoDefault( TRUE );
    layout3->addWidget( buttonHelp );
    spacer = new QSpacerItem( 96, 27, QSizePolicy::Expanding, QSizePolicy::Minimum );
    layout3->addItem( spacer );

    buttonOk = new ctmsButton( privateLayoutWidget, "buttonOk" );
    buttonOk->setAutoDefault( TRUE );
    buttonOk->setDefault( TRUE );
    layout3->addWidget( buttonOk );

    buttonCancel = new ctmsButton( privateLayoutWidget, "buttonCancel" );
    buttonCancel->setAutoDefault( TRUE );
    layout3->addWidget( buttonCancel );

    ctmsTextUsername = new QTextEdit( this, "ctmsTextUsername" );
    ctmsTextUsername->setGeometry( QRect( 130, 30, 130, 30 ) );

    ctmsLblUsername = new QLabel( this, "ctmsLblUsername" );
    ctmsLblUsername->setGeometry( QRect( 30, 35, 100, 20 ) );
    QFont ctmsLblUsername_font(  ctmsLblUsername->font() );
    ctmsLblUsername->setFont( ctmsLblUsername_font ); 

    ctmsLblPassword = new QLabel( this, "ctmsLblPassword" );
    ctmsLblPassword->setGeometry( QRect( 30, 85, 100, 20 ) );

    ctmsTextPassword = new ctmsEncryptText( this, "ctmsTextPassword" );
    ctmsTextPassword->setGeometry( QRect( 130, 80, 130, 30 ) );
    languageChange();
    resize( QSize(336, 184).expandedTo(minimumSizeHint()) );
    clearWState( WState_Polished );

    // signals and slots connections
    connect( buttonOk, SIGNAL( clicked() ), this, SLOT( accept() ) );
    connect( buttonCancel, SIGNAL( clicked() ), this, SLOT( reject() ) );
}

/*
 *  Destroys the object and frees any allocated resources
 */
LoginDialog::~LoginDialog()
{
    // no need to delete child widgets, Qt does it all for us
}

/*
 *  Sets the strings of the subwidgets using the current
 *  language.
 */
void LoginDialog::languageChange()
{
    setCaption( trUtf8( "Programm Login" ) );
    buttonHelp->setText( trUtf8( "&Help" ) );
    buttonHelp->setAccel( QKeySequence( trUtf8( "F1" ) ) );
    buttonOk->setText( trUtf8( "&OK" ) );
    buttonOk->setAccel( QKeySequence( QString::null ) );
    buttonCancel->setText( trUtf8( "&Cancel" ) );
    buttonCancel->setAccel( QKeySequence( QString::null ) );
    ctmsLblUsername->setText( trUtf8( "Username" ) );
    ctmsLblPassword->setText( trUtf8( "Password" ) );
}

