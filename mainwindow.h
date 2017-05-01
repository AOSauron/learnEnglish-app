#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();

private slots:
    void on_pushButton_3_clicked();

    void on_pushButton_clicked();

    void on_pushButton_2_clicked();

    void on_pushButton_4_clicked();

    void on_lineEdit_returnPressed();

    void on_actionload_clicked();

    void on_actionload2_clicked();

    void on_buttonBox_accepted();

    void on_buttonBox_rejected();

    void on_buttonBox_2_accepted();

    void on_buttonBox_2_rejected();

private:
    Ui::MainWindow *ui;
    QString username;
    QString pathword;
    QString pathverb;
};

#endif // MAINWINDOW_H
