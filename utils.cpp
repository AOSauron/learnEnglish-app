#include <iostream>
#include <string>
#include <vector>
#include <QtGlobal>
#include <QFileInfo>

using namespace std;

int randAB(int a, int b) {
    if (a < b) {
        return (int)(((double)rand() * (double)(b - a) / (double)RAND_MAX)) + a;
    }
    else { return (int)(((double)rand() * (double)(a - b) / (double)RAND_MAX)) + b; }
}

bool fileExists(QString path) {
    QFileInfo check_file(path);
    // check if file exists and if yes: Is it really a file and no directory?
    return check_file.exists() && check_file.isFile();
}
