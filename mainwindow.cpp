#include "mainwindow.h"
#include "utils.h"
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
    ui->label_warning->setVisible(false);
    ui->label_warning_2->setVisible(false);
    ui->widget->close();
    ui->widget_2->close();

    pathword = "C:\\Ethminer\\dataword.csv";
    pathverb = "C:\\Ethminer\\dataverbs.csv";

    connect(ui->actionLoad_vocabulary_CSV_file, SIGNAL(triggered()), this, SLOT(on_actionload_clicked()));
    connect(ui->actionLoad_irregular_verbs_CSV_file, SIGNAL(triggered()), this, SLOT(on_actionload2_clicked()));
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_pushButton_3_clicked()
{
    this->close();
}

void MainWindow::on_pushButton_clicked()
{
    TransDialog transdialog;
    transdialog.setUsername(username);
    transdialog.setPath(pathword);
    transdialog.setModal(true);
    transdialog.exec();
}

void MainWindow::on_pushButton_2_clicked()
{
    VerbDialog verbdialog;
    verbdialog.setUsername(username);
    verbdialog.setPath(pathverb);
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

void MainWindow::on_actionload_clicked()
{
    ui->lineEdit_2->setText(pathword);
    ui->widget->show();
}

void MainWindow::on_actionload2_clicked()
{
    ui->lineEdit_4->setText(pathverb);
    ui->widget_2->show();
}

/*
 * Accpet/Reject for load file
 */
void MainWindow::on_buttonBox_accepted()
{
    // SAVE DATA
    pathword = ui->lineEdit_2->text();

    //Check path
    if (!fileExists(pathword)) {
        qDebug() << "No such file";
        ui->label_warning->setVisible(true);
        return;
    }

    ui->label_warning->setVisible(false);
    ui->widget->close();
}

void MainWindow::on_buttonBox_rejected()
{
    // DO NOT SAVE
    ui->widget->close();
}

void MainWindow::on_buttonBox_2_accepted()
{
    // SAVE DATA
    pathverb = ui->lineEdit_4->text();

    //Check path
    if (!fileExists(pathverb)) {
        qDebug() << "No such file";
        ui->label_warning_2->setVisible(true);
        return;
    }

    ui->label_warning_2->setVisible(false);
    ui->widget_2->close();
}

void MainWindow::on_buttonBox_2_rejected()
{
    // DO NOT SAVE
    ui->widget_2->close();
}
