#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "transdialog.h"
#include "verbdialog.h"
#include <QDebug>

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    //Hide the 2 game button
    ui->pushButton->setVisible(false);
    ui->pushButton_2->setVisible(false);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_pushButton_3_clicked()
{
    exit(0);
}

void MainWindow::on_pushButton_clicked()
{
    TransDialog transdialog;
    transdialog.setUsername(username);
    transdialog.setModal(true);
    transdialog.exec();
}

void MainWindow::on_pushButton_2_clicked()
{
    VerbDialog verbdialog;
    verbdialog.setModal(true);
    verbdialog.exec();
}

void MainWindow::on_pushButton_4_clicked()
{
    username=ui->lineEdit->text();
    if (username == "" || username == " " || username == "," || username == "." || username == ";" || username == "  ") {
        ui->label->setText("Username is not valid !");
        return;
    }
    ui->pushButton_4->setVisible(false);
    ui->lineEdit->setVisible(false);
    ui->label->setVisible(false);
    ui->label_3->setText("Your are logged under : ");
    ui->label_4->setText(username);
    ui->pushButton->setVisible(true);
    ui->pushButton_2->setVisible(true);
}

void MainWindow::on_lineEdit_returnPressed()
{
    MainWindow::on_pushButton_4_clicked();
}
