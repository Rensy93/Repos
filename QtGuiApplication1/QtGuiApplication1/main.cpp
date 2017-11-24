#include "QtGuiApplication1.h"
#include <QtWidgets/QApplication>

int main(int argc, char *argv[])
{
	QApplication a(argc, argv);
	QtGuiApplication1 w;
	w.show();
	return a.exec();

	QApplication app(argc, argv);
	QtGuiApplication1 mainWindow;
	mainWindow.showMaximized();
	return app.exec();
}
