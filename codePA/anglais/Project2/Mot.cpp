#include "Verbe.h"
#include <iostream>
#include <string>

using namespace std;

class Mot {
protected:
	string mot;
	string traduction;

public:
	string getMot();
	string getTraduction();
	void setMot(string mot);
	void setTraduction(string trad);
};

string Mot::getMot()
{
	return this->mot;
}

string Mot::getTraduction()
{
	return this->traduction;
}

void Mot::setMot(string mot)
{
	this->mot = mot;
}

void Mot::setTraduction(string trad)
{
	this->traduction = trad;
}
