/////////////////////////////    Learn'English  -  Desktop app to learn English ! //////////////////////////////////////////
/////////////////////////////////////    v 1.0.0.0        17/12/2016     ///////////////////////////////////////////////////


#include <QApplication>
#include <QPushButton>

int main(int argc, char *argv[]) {

    QApplication app(argc, argv);
    QPushButton button("CLIK LA FDP");
    button.setToolTip("ALLAHUAKBAR");
    button.setFont(QFont("Times New Roman", 20, QFont::Bold, false));
    button.setCursor(Qt::PointingHandCursor);
    button.setIcon(QIcon(QCoreApplication::applicationDirPath() + "/bomb.png"));

    button.show();

    return app.exec();

}
