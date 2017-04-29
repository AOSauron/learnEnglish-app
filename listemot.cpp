#include "mot.h"
#include "utils.h"
#include "listemot.h"
#include <time.h>
#include <iostream>
#include <string>
#include <vector>
#include <QtGlobal>
#include <QFile>
#include <QStringList>
#include <QDebug>

vector<Mot> ListeMot::getListe()
{
    return this->liste;
}

void ListeMot::setListe(vector<Mot> list)
{
    this->liste = list;
}

void ListeMot::initialiseListe()
{
    QFile file("dataword.csv");
    if (!file.open(QIODevice::ReadOnly)) {
        qDebug() << file.errorString();
        return;
    }

    QStringList wordListEnglish;
    QStringList wordListFrench;

    while (!file.atEnd()) {
        QByteArray line = file.readLine();
        wordListEnglish.append(line.split(',').first());
        wordListFrench.append(line.split(',').at(1));
    }

    qDebug() << wordListEnglish;
    qDebug() << wordListFrench;
}

Mot ListeMot::tirageAleatoire()
{
    int taille = liste.size();
    int random = randAB(0, taille - 1);
    return liste[random];
}

