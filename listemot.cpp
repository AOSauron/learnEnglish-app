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

QStringList ListeMot::getenListe() {
    return this->wordEnglishlist;
}

QStringList ListeMot::getfrListe(){
    return this->wordFrenchlist;
}

void ListeMot::setListe(vector<Mot> list)
{
    this->liste = list;
}

void ListeMot::initialiseListe()
{ /*
    QFile file("dataword.csv");
    if (!file.open(QIODevice::ReadOnly)) {
        qDebug() << file.errorString();
        return;
    }

    while (!file.atEnd()) {
        QByteArray line = file.readLine();
        wordEnglishlist.append(line.split(',').first());
        wordFrenchlist.append(line.split(',').at(1));
    }
*/
    wordEnglishlist.append("mouse");
    wordEnglishlist.append("key");
    wordEnglishlist.append("cat");
    wordEnglishlist.append("dog");
    wordFrenchlist.append("souris");
    wordFrenchlist.append("clé");
    wordFrenchlist.append("chat");
    wordFrenchlist.append("chien");
    //qDebug() << wordListEnglish;
    //qDebug() << wordListFrench;
}

Mot ListeMot::tirageAleatoire()
{
    int taille = liste.size();
    int random = randAB(0, taille - 1);
    return liste[random];
}

