#include "mot.h"
#include <iostream>
#include <string>

using namespace std;

Mot::Mot(string mot, string trad, int sco)
{
	this->mot = mot;
	this->traduction = trad;
	this->score = sco;
}

string Mot::getMot()
{
	return this->mot;
}

string Mot::getTraduction()
{
	return this->traduction;
}

int Mot::getScore()
{
	return this->score;
}

void Mot::setMot(string mot)
{
	this->mot = mot;
}

void Mot::setTraduction(string trad)
{
	this->traduction = trad;
}

void Mot::setScore(int score)
{
	this->score = score;
}

void Mot::ScorePlus()
{
	this->score++;
}

void Mot::ScoreMoins()
{
	this->score--;
}
