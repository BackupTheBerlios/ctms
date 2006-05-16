/****************************************************************************
** Form interface generated from reading ui file '.\tmcsnewprojekt.ui'
**
** Created: Fr 16. Dez 23:40:35 2005
**      by: The User Interface Compiler ($Id: tmcsnewprojekt.h,v 1.1 2006/05/16 20:18:45 wekl Exp $)
**
** WARNING! All changes made in this file will be lost!
****************************************************************************/

#ifndef TMCSNEWPROJEKT_H
#define TMCSNEWPROJEKT_H

#include <qvariant.h>
#include <qwidget.h>

class QVBoxLayout;
class QHBoxLayout;
class QGridLayout;
class QSpacerItem;
class QSqlDatabase;
class QSqlCursor;
class QSqlForm;
class QDataView;
class QLabel;
class QLineEdit;
class QSpinBox;
class QPushButton;

class tmcsnewprojekt : public QWidget
{
    Q_OBJECT

public:
    tmcsnewprojekt( QWidget* parent = 0, const char* name = 0, WFlags fl = 0 );
    ~tmcsnewprojekt();

    QDataView* dataView1;
    QLabel* labelCust_email;
    QLineEdit* QLineEditCust_firmname2;
    QLabel* labelCust_zipcode;
    QLineEdit* QLineEditCust_email;
    QLabel* labelCust_payproberty;
    QLabel* labelCust_firmname;
    QLineEdit* QLineEditCust_zipcode;
    QLineEdit* QLineEditCust_payproberty;
    QLineEdit* QLineEditCust_firmname;
    QLineEdit* QLineEditCust_name;
    QLabel* labelCust_kredit;
    QLineEdit* QLineEditCust_kredit;
    QLineEdit* QLineEditCust_city;
    QLabel* labelCust_street;
    QLabel* labelCust_homepage;
    QLabel* labelCust_telnumber;
    QLabel* labelCust_firmname2;
    QLineEdit* QLineEditCust_homepage;
    QLabel* labelCust_faxnummer;
    QLineEdit* QLineEditCust_faxnummer;
    QLineEdit* QLineEditCust_firstname;
    QLabel* labelCust_firstname;
    QLineEdit* QLineEditCust_bic;
    QLabel* labelCust_id;
    QLabel* labelCust_city;
    QLabel* labelCust_name;
    QLabel* labelCust_iban;
    QLineEdit* QLineEditCust_iban;
    QLabel* labelCust_contact;
    QLineEdit* QLineEditCust_contact;
    QLineEdit* QLineEditCust_street;
    QLineEdit* QLineEditCust_telnumber;
    QLabel* labelCust_bic;
    QSpinBox* QSpinBoxCust_id;
    QPushButton* buttonHelp;
    QPushButton* buttonApply;
    QPushButton* buttonOk;
    QPushButton* buttonCancel;

    QSqlDatabase* ctmsConnection;

protected:
    QGridLayout* dataView1Layout;
    QGridLayout* layout2;
    QHBoxLayout* Layout1;
    QSpacerItem* Horizontal_Spacing2;
private:
//	bool checkData();

protected slots:
    virtual void languageChange();
	bool save();
	void accept();
	void reject();

};

#endif // TMCSNEWPROJEKT_H
