#include "Verbe.h"
#include <iostream>
#include <string>
#include <vector> 

using namespace std;

class ListeVerbe {

	public :
		vector<Verbe> getListe();
		void setListe(vector<Verbe> list);
		void initialiseListe();
		Verbe tirageAleatoire();

	protected :
		vector<Verbe> liste;


};

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
	Verbe abide = Verbe("arise", "arose", "arisen", "survenir",0);
	//TODO a completer
}

Verbe ListeVerbe::tirageAleatoire()
{
	int taille = liste.size();
	int random = randAB(0, taille - 1);
	return liste[random];
}

int randAB(int a, int b) {
	if (a < b) {
		return (int)(((double)rand() * (double)(b - a) / (double)RAND_MAX)) + a;
	}
	else { return (int)(((double)rand() * (double)(a - b) / (double)RAND_MAX)) + b; }
}

