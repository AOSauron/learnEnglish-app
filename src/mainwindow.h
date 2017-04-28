#ifndef DEF_MAINWINDOW
#define DEF_MAINWINDOW

#include <QApplication>
#include <QWidget>
#include <QPushButton>
#include <QFont>

class mainwindow : public QWidget
{
    public:
    mainwindow();

    private:
    QPushButton *m_quitbutton;
    QPushButton *m_launchbutton;
};

#endif
