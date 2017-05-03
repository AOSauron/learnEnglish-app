#include "headers/mainwindow.h"
#include <QApplication>

//
// Debugging : qDebug() << stuff
// Don't forget to include <QDebug>
//

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    MainWindow w;
    w.show();

    return a.exec();
}
