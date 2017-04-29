#ifndef LISTEMOT_H
#define LISTEMOT_H

#include "mot.h"
#include "utils.h"
#include <time.h>
#include <iostream>
#include <string>
#include <vector>
#include <QtGlobal>
#include <QFile>
#include <QStringList>
#include <QDebug>

class ListeMot {

public:
    vector<Mot> getListe();
    void setListe(vector<Mot> list);
    void initialiseListe();
    Mot tirageAleatoire();

protected:
    vector<Mot> liste;

};

#endif // LISTEMOT_H
