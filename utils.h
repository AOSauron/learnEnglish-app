#ifndef UTILS_H
#define UTILS_H

#include <iostream>
#include <string>
#include <QtGlobal>
#include <QDebug>

using namespace std;

int randAB(int a, int b);

bool fileExists(QString path);

QStringList truncate(QStringList list);

bool is_tested(int index, int tab [], int maximum);

QStringList make_empty(QStringList list);

bool userExists(QStringList users, QString user);

QStringList noWhiteSpace(QStringList list);

QStringList bestVerbOrWord(QStringList users, QStringList values);

#endif // UTILS_H
