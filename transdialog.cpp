#include "transdialog.h"
#include "ui_transdialog.h"
#include "utils.h"
#include <QtGlobal>
#include <stdio.h>
#include <stdlib.h>
#include <QDebug>
#include <QFile>

TransDialog::TransDialog(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::TransDialog)
{
    ui->setupUi(this);

    //Hide all except start button
    ui->label_8->setVisible(false);
    ui->label_11->setVisible(false);
    ui->next_button->setVisible(false);
    ui->highname_label->setVisible(false);
    ui->high_label->setVisible(false);
    ui->max_label->setVisible(false);
    ui->congrat_label->setVisible(false);
    ui->lcdHigh->setVisible(false);
    ui->lcdMax->setVisible(false);
    ui->lcdScoreFinal->setVisible(false);
    ui->username_label->setVisible(false);
    ui->logged_as->setVisible(false);
    ui->end_button->setVisible(false);

    ui->progressBar->setVisible(false);
    ui->pushButton->setVisible(false);
    ui->lineEdit->setVisible(false);
    ui->label_4->setVisible(false);
    ui->label_5->setVisible(false);
    ui->label_10->setVisible(false);
    ui->label_2->setVisible(false);
    ui->label_9->setVisible(false);
    ui->lcdNumber->setVisible(false);
    ui->warning_label->setVisible(false);
    ui->percent->setVisible(false);
    ui->percentage->setVisible(false);
    ui->line->setVisible(false);
    ui->line_2->setVisible(false);
    ui->line_3->setVisible(false);
    ui->line_4->setVisible(false);
    ui->label_percent->setVisible(false);
}

TransDialog::~TransDialog()
{
    delete ui;
}

void TransDialog::on_lineEdit_returnPressed()
{
    //If Next Button visible or End Game or Nothing writed, do nop/next action.
    if (ui->next_button->isVisible() || !ui->lineEdit->isVisible() || endGame || ui->lineEdit->text() == "") {
        return;
    }

    //Else, do stuff
    QString response = ui->lineEdit->text();
    QString good = ui->label_7->text();
    ui->label_6->setText(response);
    ui->label_6->setVisible(true);
    ui->label_7->setVisible(true);

    //Validation
    if (good!=response) {
        ui->label_8->setVisible(true);
    }
    else {
        ui->label_11->setVisible(true);
        score++;
        ui->lcdNumber->display(score);
    }

    //Nb of words tested
    nb++;
    ui->progressBar->setValue(nb);

    //Print next button
    ui->next_button->setVisible(true);

}

//Press enter
void TransDialog::on_pushButton_clicked()
{
    TransDialog::on_lineEdit_returnPressed();
}

//Button next
void TransDialog::on_next_button_clicked()
{
    //Hide next button and other stuff
    ui->label_8->setVisible(false);
    ui->label_11->setVisible(false);
    ui->label_6->setVisible(false);
    ui->good_label->setVisible(false);
    ui->label_7->setVisible(false);
    ui->lineEdit->clear();
    ui->next_button->setVisible(false);

    //qDebug() << nb;

    //Game end reached
    if (nb==maxi) {
        endGame = true;
        ending();
        return;
    }

    //Change the word to translate
    for (int i=0; i<maxi; i++) {
        current = randAB(min,maxi);
        if (!is_tested(current)) break;
    }

    //Add to array 'used'
    used[nb]=current;

    //Displaying new word
    en = enList[current];
    fr = frList[current];

    ui->good_label->setText(en);
    ui->good_label->setVisible(true);
    ui->label_7->setVisible(false);
    ui->label_7->setText(fr);
}

//Check if a word has been tested
bool TransDialog::is_tested(int index)
{
    for (int i=0; i<maxi; i++) {
        if (used[i]==index) return true;
    }

    return false;
}

//End Game function
void TransDialog::ending()
{
    ui->progressBar->setVisible(false);
    ui->pushButton->close();
    ui->lineEdit->close();
    ui->label_4->setVisible(false);
    ui->label_5->setVisible(false);
    ui->label_10->setVisible(false);
    ui->label_2->setVisible(false);
    ui->label_9->setVisible(false);
    ui->lcdNumber->setVisible(false);

    ui->lcdScoreFinal->display(score);
    ui->lcdMax->display(maxi);
    ui->lcdHigh->display(highscore);
    ui->highname_label->setText("by " + best_player);

    ui->end_button->setVisible(true);
    ui->highname_label->setVisible(true);
    ui->high_label->setVisible(true);
    ui->max_label->setVisible(true);
    ui->congrat_label->setVisible(true);
    ui->lcdHigh->setVisible(true);
    ui->lcdMax->setVisible(true);
    ui->lcdScoreFinal->setVisible(true);
    ui->percent->setVisible(true);

    float percent = score*100/maxi;
    QString percentage = QString(" %1 % ").arg(percent);

    ui->percentage->setText(percentage);
    ui->percentage->setVisible(true);
    ui->line->setVisible(true);
    ui->line_2->setVisible(true);
    ui->line_3->setVisible(true);
    ui->line_4->setVisible(true);
    ui->label_percent->setVisible(true);
}

void TransDialog::setUsername(QString username)
{
    this->username = username;
}

void TransDialog::on_end_button_clicked()
{
    this->close();
}

void TransDialog::setPath(QString pathword)
{
    this->path=pathword;
}

void TransDialog::on_start_clicked()
{
    // Enter seems to make pbs ..
    if (!ui->start->isVisible()) {
        return;
    }

    //Check inital path
    if (!fileExists(path)) {
        qDebug() << "No such file";
        ui->warning_label->setVisible(true);
        return;
    }

    ui->start->close();

    //Basic inits
    endGame = false;
    best_player = "Ms Duval";
    score = 0;
    min = 0;
    nb = 0;

    for (int i=0; i<MAXWORD; i++) {
        used[i]=-1;
    }

    //Launch init of the wordlist.
    initListe();

    maxi = enList.size();
    highscore = 100;

    qDebug() << nb;

    //First generation
    current = randAB(min,maxi);
    used[nb]=current;

    en = enList[current];
    fr = frList[current];

    //UI
    ui->good_label->setText(en);
    ui->label_7->setVisible(false);
    ui->label_7->setText(fr);

    ui->lcdNumber->display(score);
    ui->progressBar->reset();
    ui->progressBar->setRange(min,maxi);

    ui->username_label->setText(this->username);
    ui->username_label->setVisible(true);
    ui->logged_as->setVisible(true);

    ui->progressBar->setVisible(true);
    ui->pushButton->show();
    ui->lineEdit->show();
    ui->label_4->setVisible(true);
    ui->label_5->setVisible(true);
    ui->label_10->setVisible(true);
    ui->label_2->setVisible(true);
    ui->label_9->setVisible(true);
    ui->lcdNumber->setVisible(true);

}

void TransDialog::initListe()
{
    QFile file(path);
    if (!file.open(QIODevice::ReadOnly)) {
        qDebug() << file.errorString();
        return;
    }

    while(!file.atEnd()) {
        QByteArray line = file.readLine();
        enList.append(line.split(',').first());
        frList.append(line.split(',').at(1));
    }

    //Call truncate() on liste meaning
    frList = truncate(frList);
}
