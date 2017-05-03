#include "headers/verbdialog.h"
#include "headers/ui_verbdialog.h"
#include <QDebug>
#include "headers/utils.h"
#include <QtGlobal>
#include <QFile>

VerbDialog::VerbDialog(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::VerbDialog)
{
    ui->setupUi(this);

    ui->warning_label->setVisible(false);
    ui->username_label->setVisible(false);
    ui->logged_as->setVisible(false);
    ui->lineEdit->setVisible(false);
    ui->lineEdit_2->setVisible(false);
    ui->pushButton->setVisible(false);
    ui->line->setVisible(false);
    ui->line_2->setVisible(false);
    ui->line_3->setVisible(false);
    ui->label->setVisible(false);
    ui->label_2->setVisible(false);
    ui->label_3->setVisible(false);
    ui->label_4->setVisible(false);
    ui->label_5->setVisible(false);
    ui->label_6->setVisible(false);
    ui->label_7->setVisible(false);
    ui->next_button->setVisible(false);
    ui->label_8->setVisible(false);
    ui->label_9->setVisible(false);
    ui->lcdNumber->setVisible(false);
    ui->progressBar->setVisible(false);
    ui->wrong_left->setVisible(false);
    ui->right_left->setVisible(false);
    ui->wrong_right->setVisible(false);
    ui->right_right->setVisible(false);
    ui->good_left->setVisible(false);
    ui->good_right->setVisible(false);
    ui->correct_left->setVisible(false);
    ui->correct_right->setVisible(false);
    ui->end_button->setVisible(false);
    ui->highname_label->setVisible(false);
    ui->high_label->setVisible(false);
    ui->max_label->setVisible(false);
    ui->congrat_label->setVisible(false);
    ui->lcdHigh->setVisible(false);
    ui->lcdMax->setVisible(false);
    ui->lcdScoreFinal->setVisible(false);
    ui->percent->setVisible(false);
    ui->percentage->setVisible(false);
    ui->line->setVisible(false);
    ui->line_5->setVisible(false);
    ui->line_6->setVisible(false);
    ui->line_4->setVisible(false);
    ui->line_7->setVisible(false);
    ui->label_percent->setVisible(false);
    QPixmap pixmap2("resources/british-icon.png");
    QPixmap pixmap3("resources/france-icon.png");
    ui->label_image->setPixmap(pixmap2);
    ui->label_image_2->setPixmap(pixmap3);
}

VerbDialog::~VerbDialog()
{
    delete ui;
}

void VerbDialog::on_start_clicked()
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
    score = 0;
    min = 0;
    nb = 0;


    for (int i=0; i<MAXVERB; i++) {
        used[i]=-1;
    }

    //Load CSV
    initListe();

    maxi = inf.size();

    ui->lcdNumber->display(score);
    ui->progressBar->reset();
    ui->progressBar->setRange(min,maxi);

    //First generation
    current = randAB(min,maxi);
    used[nb]=current;

    infc = inf[current];
    pretc = pret[current];
    pastpc = pastp[current];
    meaningc = meaning[current];

    ui->username_label->setText(this->username);
    ui->username_label->setVisible(true);
    ui->logged_as->setVisible(true);

    ui->lineEdit->setVisible(true);
    ui->lineEdit_2->setVisible(true);
    ui->pushButton->setVisible(true);
    ui->line->setVisible(true);
    ui->line_2->setVisible(true);
    ui->line_3->setVisible(true);
    ui->label->setVisible(true);
    ui->label_2->setVisible(true);
    ui->label_3->setVisible(true);
    ui->label_4->setVisible(true);
    ui->label_5->setText(infc);
    ui->label_6->setText(meaningc);
    ui->label_5->setVisible(true);
    ui->label_7->setVisible(true);
    ui->label_8->setVisible(true);
    ui->label_9->setVisible(true);
    ui->lcdNumber->setVisible(true);
    ui->progressBar->setVisible(true);


}

void VerbDialog::setUsername(QString username)
{
    this->username = username;
}

void VerbDialog::setPath(QString pathverb)
{
    this->path = pathverb;
}

void VerbDialog::initListe()
{
    //qDebug() << path;

    QFile file(path);
    if (!file.open(QIODevice::ReadOnly)) {
        qDebug() << file.errorString();
        return;
    }

    while(!file.atEnd()) {
        QByteArray line = file.readLine();
        inf.append(line.split(',').first());
        pret.append(line.split(',').at(1));
        pastp.append(line.split(',').at(2));
        meaning.append(QString::fromUtf8(line.split(',').at(3)));
    }

    //Call truncate() on liste meaning
    meaning = truncate(meaning);
}

void VerbDialog::on_pushButton_clicked()
{
    //If one of the lineEdit is empty, or nextbutton visible, do nop.
    QString temppret = ui->lineEdit->text();
    temppret.remove(QRegExp("[/ /]"));
    QString temppast= ui->lineEdit_2->text();
    temppast.remove(QRegExp("[/ /]"));
    if (temppret == "" || temppast == "" || ui->next_button->isVisible()) {
        return;
    }

    //UI stuff
    ui->pushButton->setVisible(false);
    ui->next_button->setVisible(true);
    ui->label_6->setVisible(true);

    //Validation preterite

    if (temppret == pretc) {
        ui->right_left->setVisible(true);
        score++;
    }
    else if (temppret != pretc) {
        ui->wrong_left->setVisible(true);
        ui->correct_left->setVisible(true);
        ui->good_left->setText(pretc);
        ui->good_left->setVisible(true);
    }

    //Validation past participle

    if (temppast == pastpc) {
        ui->right_right->setVisible(true);
        score++;
    }
    else if (temppast != pastpc) {
        ui->wrong_right->setVisible(true);
        ui->correct_right->setVisible(true);
        ui->good_right->setText(pastpc);
        ui->good_right->setVisible(true);
    }

    //Nb of words tested
    nb++;
    ui->progressBar->setValue(nb);
    ui->lcdNumber->display(score);
}

void VerbDialog::on_lineEdit_2_returnPressed()
{
    on_pushButton_clicked();
}

void VerbDialog::on_lineEdit_returnPressed()
{
    on_pushButton_clicked();
}

void VerbDialog::on_next_button_clicked()
{
    //Hide next button and other stuff
    ui->next_button->setVisible(false);
    ui->pushButton->setVisible(true);
    ui->label_6->setVisible(false);
    ui->lineEdit->clear();
    ui->lineEdit_2->clear();
    ui->wrong_left->setVisible(false);
    ui->right_left->setVisible(false);
    ui->wrong_right->setVisible(false);
    ui->right_right->setVisible(false);
    ui->good_left->setVisible(false);
    ui->good_right->setVisible(false);
    ui->correct_left->setVisible(false);
    ui->correct_right->setVisible(false);

    //Game end reached
    if (nb==maxi) {
        endGame = true;
        ending();
        return;
    }

    //Change the verb
    for (int i=0; i<maxi; i++) {
        current = randAB(min,maxi);
        if (!is_tested(current, used, maxi)) break;
    }

    //Add to array 'used'
    used[nb]=current;

    //Displaying new word
    infc = inf[current];
    pretc = pret[current];
    pastpc = pastp[current];
    meaningc = meaning[current];

    ui->label_5->setText(infc);
    ui->label_6->setText(meaningc);
}

void VerbDialog::ending()
{
    //Hide most of all widgets
    ui->lineEdit->setVisible(false);
    ui->lineEdit_2->setVisible(false);
    ui->pushButton->setVisible(false);
    ui->line->setVisible(false);
    ui->line_2->setVisible(false);
    ui->line_3->setVisible(false);
    ui->label->setVisible(false);
    ui->label_2->setVisible(false);
    ui->label_3->setVisible(false);
    ui->label_4->setVisible(false);
    ui->label_5->setVisible(false);
    ui->label_6->setVisible(false);
    ui->label_7->setVisible(false);
    ui->next_button->setVisible(false);
    ui->label_8->setVisible(false);
    ui->label_9->setVisible(false);
    ui->lcdNumber->setVisible(false);
    ui->progressBar->setVisible(false);
    ui->wrong_left->setVisible(false);
    ui->right_left->setVisible(false);
    ui->wrong_right->setVisible(false);
    ui->right_right->setVisible(false);
    ui->good_left->setVisible(false);
    ui->good_right->setVisible(false);
    ui->correct_left->setVisible(false);
    ui->correct_right->setVisible(false);

    ui->lcdScoreFinal->display(score);
    ui->lcdMax->display(maxi*2);
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

    float percent = score*100/(maxi*2);
    QString percentage = QString(" %1 % ").arg(percent);

    ui->percentage->setText(percentage);
    ui->percentage->setVisible(true);
    ui->line_5->setVisible(true);
    ui->line_6->setVisible(true);
    ui->line_7->setVisible(true);
    ui->line_4->setVisible(true);
    ui->label_percent->setVisible(true);
}

void VerbDialog::on_end_button_clicked()
{
    this->setVisible(false);
}

QString VerbDialog::getHighscore()
{
    int res =  this->score;
    if (score !=0) res = score*100/(maxi*2);
    return QString::number(res);
}

void VerbDialog::setHighestscore(QString value)
{
    this->highscore = value.toInt();
}

void VerbDialog::resetHighscore()
{
    this->score = 0;
}

void VerbDialog::setBest(QString bestplayer)
{
    this->best_player = bestplayer;
}
