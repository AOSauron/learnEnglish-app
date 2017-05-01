#include "mainwindow.h"
#include "utils.h"
#include "ui_mainwindow.h"
#include "transdialog.h"
#include "verbdialog.h"
#include <QDebug>
#include <QFile>

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
    ui->label_warning_3->setVisible(false);
    ui->save_warning->setVisible(false);
    ui->widget->close();
    ui->widget_2->close();
    ui->widget_3->close();

    pathword = "C:\\Ethminer\\dataword.csv";
    pathverb = "C:\\Ethminer\\dataverbs.csv";
    pathsave = "C:\\Ethminer\\savegs.csv";

    connect(ui->actionLoad_vocabulary_CSV_file, SIGNAL(triggered()), this, SLOT(on_actionload_clicked()));
    connect(ui->actionLoad_irregular_verbs_CSV_file, SIGNAL(triggered()), this, SLOT(on_actionload2_clicked()));
    connect(ui->actionLoad_save_CSV_file, SIGNAL(triggered()), this, SLOT(on_actionload3_clicked()));
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

    if (fileExists(pathsave)) {
        initListe();
        ui->pushButton->setVisible(true);
        ui->pushButton_2->setVisible(true);
    }
    else {
        ui->save_warning->setVisible(true);
        ui->label_warning_3->setVisible(true);
        on_actionload3_clicked();
    }

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

void MainWindow::on_actionload3_clicked()
{
    ui->lineEdit_5->setText(pathsave);
    ui->widget_3->show();
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

void MainWindow::on_buttonBox_3_accepted()
{
    // SAVE DATA
    pathsave = ui->lineEdit_5->text();

    //Check path
    if (!fileExists(pathsave)) {
        qDebug() << "No such file";
        ui->label_warning_3->setVisible(true);
        return;
    }

    //Load save
    users = make_empty(users);
    highverbs = make_empty(highverbs);
    highwords = make_empty(highwords);
    initListe();

    ui->save_warning->setVisible(false);
    ui->label_warning_3->setVisible(false);
    ui->widget_3->close();

    if (!ui->pushButton_4->isVisible()) {
        ui->pushButton->setVisible(true);
        ui->pushButton_2->setVisible(true);
    }
}

void MainWindow::on_buttonBox_3_rejected()
{
    // DO NOT SAVE
    ui->widget_3->close();
}

void MainWindow::initListe()
{
    QFile file(pathsave);
    if (!file.open(QIODevice::ReadOnly)) {
        qDebug() << file.errorString();
        return;
    }

    while(!file.atEnd()) {
        QByteArray line = file.readLine();
        users.append(QString::fromUtf8(line.split(',').first()));
        highwords.append(line.split(',').at(1));
        highverbs.append(line.split(',').at(2));
    }

    //Call truncate() on liste highverbs
    highverbs = truncate(highverbs);

    qDebug() << users;
    qDebug() << highverbs;
    qDebug() << highwords;
}


