#include "mot.h"
#include "utils.h"
#include <time.h>
#include <iostream>
#include <string>
#include <vector>
#include <QtGlobal>

using namespace std;

class ListeMot {

public:
    vector<Mot> getListe();
    void setListe(vector<Mot> list);
    void initialiseListe();
    Mot tirageAleatoire();

protected:
    vector<Mot> liste;


};

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

    //TODO a completer
}

Mot ListeMot::tirageAleatoire()
{
    int taille = liste.size();
    int random = randAB(0, taille - 1);
    return liste[random];
}

