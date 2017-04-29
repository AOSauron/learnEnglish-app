#ifndef LISTEVERBE_H
#define LISTEVERBE_H
#include "verbe.h"
#include "utils.h"
#include <iostream>
#include <string>
#include <vector>
#include <QtGlobal>

class ListeVerbe {

    public :
        vector<Verbe> getListe();
        void setListe(vector<Verbe> list);
        void initialiseListe();
        Verbe tirageAleatoire();

    protected :
        vector<Verbe> liste;

};

#endif // LISTEVERBE_H
