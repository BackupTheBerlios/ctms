#include <qmainwindow.h>


class QWorkspace;

class TMCSMainWindow : public QMainWindow
{
	Q_OBJECT
public:
	TMCSMainWindow( QWidget* parent = 0, const char* name = 0, WFlags f = WType_TopLevel );

protected:
	QWorkspace *mdi;

protected slots:
	void prjNew();
	void prjSearch();
};

