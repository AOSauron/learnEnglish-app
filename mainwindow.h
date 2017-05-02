#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include "transdialog.h"
#include "verbdialog.h"

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();
    void initListe();
    void setHighWord(QString value);
    void setHighVerb(QString value);
    void updateData();
    void loadHighscores();

private slots:
    void on_pushButton_3_clicked();

    void on_pushButton_clicked();

    void on_pushButton_2_clicked();

    void on_pushButton_4_clicked();

    void on_lineEdit_returnPressed();

    void on_actionload_clicked();

    void on_actionload2_clicked();

    void on_actionload3_clicked();

    void on_buttonBox_accepted();

    void on_buttonBox_rejected();

    void on_buttonBox_2_accepted();

    void on_buttonBox_2_rejected();

    void on_buttonBox_3_accepted();

    void on_buttonBox_3_rejected();

    void on_lineEdit_2_returnPressed();

    void on_lineEdit_4_returnPressed();

    void on_lineEdit_5_returnPressed();

    void on_pushButton_5_clicked();

private:
    Ui::MainWindow *ui;
    TransDialog transdialog;
    VerbDialog verbdialog;
    QString username;
    QString pathword;
    QString pathverb;
    QString pathsave;
    QStringList users;
    QStringList highwords;
    QStringList highverbs;
    QString userhighword;
    QString userhighverb;
    QString ownhighword;
    QString ownhighverb;
};

#endif // MAINWINDOW_H
