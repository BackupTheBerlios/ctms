
#ifndef CTMS_UPD_DB_TOOL_H
#define CTMS_UPD_DB_TOOL_H

#include <qmainwindow.h>


class ctms_upd_db_tool: public QMainWindow
{
    Q_OBJECT

public:
    ctms_upd_db_tool();
    ~ctms_upd_db_tool();

protected:
    void closeEvent( QCloseEvent* );

private slots:
    void expXML();
    void impXML();
    void about();
    void aboutQt();

private:
};


#endif
