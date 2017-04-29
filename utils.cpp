#include <iostream>
#include <string>
#include <vector>
#include <QtGlobal>

using namespace std;

int randAB(int a, int b) {
    if (a < b) {
        return (int)(((double)rand() * (double)(b - a) / (double)RAND_MAX)) + a;
    }
    else { return (int)(((double)rand() * (double)(a - b) / (double)RAND_MAX)) + b; }
}

