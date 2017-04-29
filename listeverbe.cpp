#include "verbe.h"
#include "utils.h"
#include "listeverbe.h"
#include <iostream>
#include <string>
#include <vector>
#include <QtGlobal>

vector<Verbe> ListeVerbe::getListe()
{
    return this->liste;
}

void ListeVerbe::setListe(vector<Verbe> list)
{
    this->liste = list;
}

void ListeVerbe::initialiseListe()
{
    Verbe abide = Verbe("abide", "abode", "abode", "respecter/se conformer a",0);
    Verbe arise = Verbe("arise", "arose", "arisen", "survenir",0);
    //TODO a completer
}

Verbe ListeVerbe::tirageAleatoire()
{
    int taille = liste.size();
    int random = randAB(0, taille - 1);
    return liste[random];
}

