#ifndef MOT_H
#define MOT_H

#include "verbe.h"
#include <iostream>
#include <string>

using namespace std;

class Mot {

protected:
    string mot;
    string traduction;
    int score;

public:
    string getMot();
    string getTraduction();
    int getScore();
    void setMot(string mot);
    void setTraduction(string trad);
    void setScore(int score);
    Mot(string mot, string trad, int score);
    void ScorePlus();
    void ScoreMoins();
};


#endif // MOT_H
