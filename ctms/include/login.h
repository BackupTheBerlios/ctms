/****************************************************************************
** Form interface generated from reading ui file 'login.ui'
**
** Created: So Feb 13 21:38:21 2005
**      by: The User Interface Compiler ($Id: login.h,v 1.1 2005/03/09 17:08:59 wekl Exp $)
**
** WARNING! All changes made in this file will be lost!
****************************************************************************/

#ifndef LOGINDIALOG_H
#define LOGINDIALOG_H

#include <qvariant.h>
#include <qdialog.h>
#include <ctmsencrypttext.h>
#include <ctmsbutton.h>

class QVBoxLayout;
class QHBoxLayout;
class QGridLayout;
class QSpacerItem;
class QTextEdit;
class QLabel;
class ctmsButton;
class ctmsEncryptText;

class LoginDialog : public QDialog
{
/** @author Werner Klocker */
    Q_OBJECT

public:
    LoginDialog( QWidget* parent = 0, const char* name = 0, bool modal = 0, WFlags fl = 0 );
    ~LoginDialog();

    ctmsButton* buttonHelp;
    ctmsButton* buttonOk;
    ctmsButton* buttonCancel;
    QTextEdit* ctmsTextUsername;
    QLabel* ctmsLblUsername;
    QLabel* ctmsLblPassword;
    ctmsEncryptText* ctmsTextPassword;

protected:
    QHBoxLayout* layout3;
    QSpacerItem* spacer;

protected slots:
    virtual void languageChange();

}; 

#endif // LOGINDIALOG_H
