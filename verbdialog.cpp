#include "verbdialog.h"
#include "ui_verbdialog.h"
#include <QDebug>
#include "utils.h"
#include <QtGlobal>
#include <QFile>

VerbDialog::VerbDialog(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::VerbDialog)
{
    ui->setupUi(this);

    ui->warning_label->setVisible(false);
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
    best_player = "Ms Duval";
    score = 0;
    min = 0;
    nb = 0;

    for (int i=0; i<MAXVERB; i++) {
        used[i]=-1;
    }

    //Load CSV
    initListe();

    maxi = inf.size();
    highscore = 100;

    //First generation
    current = randAB(min,maxi);
    used[nb]=current;

    infc = inf[current];
    pretc = pret[current];
    pastpc = pastp[current];
    meaningc = meaningc[current];

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
    qDebug() << path;

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
        meaning.append(line.split(',').at(3));
    }

    //Call truncate() on liste meaning
    meaning = truncate(meaning);

    qDebug() << inf;
    qDebug() << pret;
    qDebug() << pastp;
    qDebug() << meaning;
}
