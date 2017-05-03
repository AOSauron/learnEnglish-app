#include "headers/mainwindow.h"
#include "headers/utils.h"
#include "headers/ui_mainwindow.h"
#include "headers/transdialog.h"
#include "headers/verbdialog.h"
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
    ui->highscore_1->setVisible(false);
    ui->highscore_2->setVisible(false);
    ui->highvalue_1->setVisible(false);
    ui->highvalue_2->setVisible(false);
    ui->pushButton_5->setVisible(false);
    ui->widget->close();
    ui->widget_2->close();
    ui->widget_3->close();

    QPixmap pixmap("resources/icon.png");
    QIcon ButtonIcon(pixmap);
    ui->pushButton_5->setIcon(ButtonIcon);
    ui->pushButton_5->setIconSize(pixmap.rect().size());

    QPixmap pixmap2("resources/british-icon.png");
    QPixmap pixmap3("resources/france-icon.png");
    ui->label_image->setPixmap(pixmap2);
    ui->label_image_2->setPixmap(pixmap3);

    transdialog.resetHighscore();
    verbdialog.resetHighscore();

    pathword = "databases/dataword.csv";
    pathverb = "databases/dataverbs.csv";
    pathsave = "databases/saves.csv";

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
    if (!ui->pushButton_4->isVisible()) {
        updateData();
    }
    this->close();
}

void MainWindow::on_pushButton_clicked()
{
    transdialog.setUsername(username);
    transdialog.setPath(pathword);
    transdialog.setModal(true);
    transdialog.exec();
}

void MainWindow::on_pushButton_2_clicked()
{
    verbdialog.setUsername(username);
    verbdialog.setPath(pathverb);
    verbdialog.setModal(true);
    verbdialog.exec();
}

void MainWindow::on_pushButton_4_clicked()
{
    username=ui->lineEdit->text();
    username.remove(QRegExp("[/^\\s/]"));
    username.remove(QRegExp("[/^\,/]"));
    if (username == "" || username == "," || username == "." || username == ";") {
        ui->label->setText("Username is not valid !");
        return;
    }
    ui->pushButton_4->setVisible(false);
    ui->lineEdit->setVisible(false);
    ui->label->setVisible(false);
    ui->label_8->setVisible(false);
    ui->label_3->setText("Your are logged under : ");
    ui->label_4->setText(username);

    if (fileExists(pathsave)) {
        initListe();
        loadHighscores();
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
        loadHighscores();
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

    //Call truncate() on liste highverbs, and delete white spaces of users
    highverbs = truncate(highverbs);
    users = noWhiteSpace(users);

    qDebug() << users;
    qDebug() << highwords;
    qDebug() << highverbs;
}


void MainWindow::on_lineEdit_2_returnPressed()
{
    on_buttonBox_accepted();
}

void MainWindow::on_lineEdit_4_returnPressed()
{
    on_buttonBox_2_accepted();
}

void MainWindow::on_lineEdit_5_returnPressed()
{
    on_buttonBox_3_accepted();
}

void MainWindow::setHighWord(QString value)
{
    this->ownhighword = value;
}

void MainWindow::setHighVerb(QString value)
{
    this->ownhighverb = value;
}

void MainWindow::updateData()
{
    QFile file(pathsave);
    if (!file.open(QIODevice::ReadWrite | QFile::Truncate)) {
        qDebug() << file.errorString();
        return;
    }

    QTextStream stream(&file);

    int size = users.size();

    //Gather scores
    int index = users.indexOf(username);
    if (ownhighword.toInt() <= transdialog.getHighscore().toInt()) highwords[index] = transdialog.getHighscore();
    if (ownhighverb.toInt() <= verbdialog.getHighscore().toInt()) highverbs[index] = verbdialog.getHighscore();

    for (int i=0; i<size; i++) {
        stream << users[i] + "," + highwords[i] + "," + highverbs[i] << endl;
    }
}

void MainWindow::on_pushButton_5_clicked()
{
    if (ownhighword.toInt() <= transdialog.getHighscore().toInt()) {
        ownhighword = transdialog.getHighscore();
        ui->highvalue_1->setText(ownhighword + " %");
    }

    if (ownhighverb.toInt() <= verbdialog.getHighscore().toInt()) {
        ownhighverb = verbdialog.getHighscore();
        ui->highvalue_2->setText(ownhighverb + " %");
    }

}

void MainWindow::loadHighscores()
{
    QStringList bestVerb = bestVerbOrWord(users, highverbs);
    QStringList bestWord = bestVerbOrWord(users, highwords);

    qDebug() << bestVerb;
    qDebug() << bestWord;
    transdialog.setHighestscore(bestVerb[1]);
    transdialog.setBest(bestVerb[0]);
    verbdialog.setHighestscore(bestWord[1]);
    verbdialog.setBest(bestWord[0]);

    ui->pushButton->setVisible(true);
    ui->pushButton_2->setVisible(true);
    ui->pushButton_5->setVisible(true);

    ui->highscore_1->setVisible(true);
    ui->highscore_2->setVisible(true);

    if (userExists(users, username)) {
        int index = users.indexOf(username);
        ownhighword = highwords[index];
        ownhighverb = highverbs[index];
    }
    else {
        ownhighword = "0";
        ownhighverb = "0";
        users.append(username);
        highwords.append(ownhighword);
        highverbs.append(ownhighverb);
    }

    ui->highvalue_1->setText(ownhighword + " %");
    ui->highvalue_2->setText(ownhighverb + " %");

    ui->highvalue_1->setVisible(true);
    ui->highvalue_2->setVisible(true);
}
