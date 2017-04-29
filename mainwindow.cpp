#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "transdialog.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
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
    transdialog.setModal(true);
    transdialog.exec();
}
