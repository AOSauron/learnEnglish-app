#ifndef UTILS_H
#define UTILS_H

#include <iostream>
#include <string>
#include <QtGlobal>
#include <QDebug>

using namespace std;

int randAB(int a, int b);

bool fileExists(QString path);

//Cut \r and \n from the QStrings (in the return variable)
QStringList truncate(QStringList list);

bool is_tested(int index, int tab [], int maximum);

#endif // UTILS_H
