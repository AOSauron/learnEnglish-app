#include "verbe.h"
#include <iostream>
#include <string>

using namespace std;



Verbe::Verbe(string infi, string pret, string parti, string trad, int sco)
{
	this->infinitif = infi;
	this->preterit = pret;
	this->participePasse = parti;
	this->traduction = trad;
	this->score = sco;
}


string Verbe::GetInfinitf()
{
	return this->infinitif;
}

string Verbe::GetPreterit()
{
	return this->preterit;
}

string Verbe::GetParticipePasse()
{
	return this->participePasse;
}


string Verbe::GetTraduction()
{
	return this->traduction;
}

int Verbe::GetScore()
{
	return this->score;
}

void Verbe::SetInfinitif(string mot)
{
	this->infinitif =mot;
}

void Verbe::SetPreterit(string mot)
{
	this->preterit = mot;
}

void Verbe::SetParticipePasse(string mot)
{
	this->participePasse = mot;
}

void Verbe::SetTraduction(string mot)
{
	this->traduction = mot;
}

void Verbe::SetScore(int score)
{
	this->score = score;
}

void Verbe::ScorePlus()
{
	this->score++;
}

void Verbe::ScoreMoins()
{
	this->score--;
}
