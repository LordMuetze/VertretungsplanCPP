#include "VertretungsplanCPP.h"
#include <QtWidgets/QApplication>

int main(int argc, char *argv[])
{
	QApplication a(argc, argv);
	VertretungsplanCPP w;
	w.show();
	return a.exec();
}
