/***************************************************************************
 *   Copyright (C) 2005 by Werner Klocker                                  *
 *   wekl@cable.vol.at                                                     *
 *                                                                         *
 *   This program is free software; you can redistribute it and/or modify  *
 *   it under the terms of the GNU General Public License as published by  *
 *   the Free Software Foundation; either version 2 of the License, or     *
 *   (at your option) any later version.                                   *
 *                                                                         *
 *   This program is distributed in the hope that it will be useful,       *
 *   but WITHOUT ANY WARRANTY; without even the implied warranty of        *
 *   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the         *
 *   GNU General Public License for more details.                          *
 *                                                                         *
 *   You should have received a copy of the GNU General Public License     *
 *   along with this program; if not, write to the                         *
 *   Free Software Foundation, Inc.,                                       *
 *   59 Temple Place - Suite 330, Boston, MA  02111-1307, USA.             *
 ***************************************************************************/

#ifndef CTMSDBAUSWAHL_H
#define CTMSDBAUSWAHL_H

#include <qvariant.h>
#include <qdialog.h>
#include <ctmsencrypttext.h>
#include <ctmsbutton.h>

class QVBoxLayout;
class QHBoxLayout;
class QGridLayout;
class QSpacerItem;
class QComboBox;
class ctmsButton;

enum eDriver{QODBC=0,QMYSQL=1};
enum eDatabaseTyp{MYSQL=0,ORACLE=1,ACCESS=2,POSTGRESQL=3,MSSQL=3};
typedef struct structDbConnect
{
	eDriver eDbDriver;
	eDatabaseTyp eDbTyp;
	QString sDbName;
	QString sHostName;
	QString sUserName;
	QString sPassWord;
	QString sSchema;
} structDatabase ;

class ctmsDBAuswahl : public QDialog
{
/** @author Werner Klocker */
    Q_OBJECT

public:
    ctmsDBAuswahl( QWidget* parent = 0, char* name = 0, bool modal = 0, WFlags fl = 0 );
    ~ctmsDBAuswahl();

    ctmsButton* buttonOk;
    QComboBox* comboDatabase;
protected:
    QHBoxLayout* layout3;
    QSpacerItem* spacer;

protected slots:
    virtual void languageChange();

}; 

#endif // LOGINDIALOG_H
