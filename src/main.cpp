/////////////////////////////    Learn'English  -  Desktop app to learn English ! //////////////////////////////////////////
/////////////////////////////////////    v 1.0.0.0        17/12/2016     ///////////////////////////////////////////////////


#include <QApplication>
#include "mainwindow.h"

int main(int argc, char *argv[]) {

    QApplication app(argc, argv);

    mainwindow window;
    window.show();

    return app.exec();

}
