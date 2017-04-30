#include "mot.h"
#include "utils.h"
#include "listemot.h"
#include <time.h>
#include <iostream>
#include <string>
#include <vector>
#include <QtGlobal>
#include <QFile>
#include <QtCore>
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
{
    QFile file("c:\\Ethminer\\dataword.csv");
    if (!file.open(QIODevice::ReadOnly)) {
        qDebug() << file.errorString();
        return;
    }

    QString data = file.readAll();
    QStringList atom = data.split(';');
    for (int i=0; i<atom.size(); i++) {
        wordEnglishlist.append(atom[i].split(',').first());
        wordFrenchlist.append(atom[i].split(',').at(1));
    }

    qDebug() << wordEnglishlist.size();

/*
    wordEnglishlist.append("mouse");
    wordEnglishlist.append("key");
    wordEnglishlist.append("cat");
    wordEnglishlist.append("dog");
    wordFrenchlist.append("souris");
    wordFrenchlist.append("clé");
    wordFrenchlist.append("chat");
    wordFrenchlist.append("chien");
    //qDebug() << wordListEnglish;
    //qDebug() << wordListFrench;*/
}

Mot ListeMot::tirageAleatoire()
{
    int taille = liste.size();
    int random = randAB(0, taille - 1);
    return liste[random];
}

