#include "mainwindow.h"
#include "settings.h"
#include <QApplication>
#include <iostream>

int main(int argc, char *argv[])
{
	QApplication a(argc, argv);
	MainWindow w;
	w.show();

	std::cout << qPrintable(Settings::GetVersionInfo()) << std::endl;

	if (argc > 1)
	{
		w.startPlaying(argv[1]);
	}

	return a.exec();
}
