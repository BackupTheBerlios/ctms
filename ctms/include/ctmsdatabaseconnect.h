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
#ifndef DATABASEMANAGEMENSYSTEMCTMSDATABASECONNECT_H
#define DATABASEMANAGEMENSYSTEMCTMSDATABASECONNECT_H

namespace DatabaseManagemenSystem {
enum eDbTyp{mysql=1,access=10,mssql=20,oracle=30,other=40}:
/**
@author Werner Klocker
*/
class ctmsDatabaseConnect{
public:
    ctmsDatabaseConnect();
	void setDbDriver(QString*);
	void setDbTyp(int);
	void setDbUser(QString*);
	void setDbPassword(QString*);
    ~ctmsDatabaseConnect();
private:
	QString sDriver;
	eDbTyp eTyp;
	QString sUsername;
	QString sEncryptedPw;
	QString sDecryptedPw;
	
		
};

};

#endif
