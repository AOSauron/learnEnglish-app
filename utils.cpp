#include <iostream>
#include "utils.h"
#include <string>
#include <vector>
#include <QtGlobal>
#include <QFileInfo>
#include <QDebug>

using namespace std;

int randAB(int a, int b)
{
    if (a < b) {
        return (int)(((double)rand() * (double)(b - a) / (double)RAND_MAX)) + a;
    }
    else { return (int)(((double)rand() * (double)(a - b) / (double)RAND_MAX)) + b; }
}

bool fileExists(QString path)
{
    QFileInfo check_file(path);
    // check if file exists and if yes: Is it really a file and no directory?
    return check_file.exists() && check_file.isFile();
}

QStringList truncate(QStringList list)
{
    int size = list.size();

    for (int i = 0; i<size; i++) {
        list[i].remove(QRegExp("[\\n\\t\\r]"));;
    }
    return list;
}

bool is_tested(int index, int tab [], int maximum)
{
    for (int i=0; i<maximum; i++) {
        if (tab[i]==index) return true;
    }

    return false;
}

QStringList make_empty(QStringList list)
{
    while (!list.isEmpty()) {
        list.removeLast();
    }

    return list;
}

bool userExists(QStringList users, QString user)
{
    int size = users.size();

    for (int i = 0; i<size; i++) {
        if (users[i] == user) {
            return true;
        }
    }
    return false;
}

QStringList noWhiteSpace(QStringList list)
{
    int size = list.size();

    for (int i = 0; i<size; i++) {
        list[i].remove(QRegExp("[/^\\s/]"));
    }
    return list;
}

QStringList bestVerbOrWord(QStringList users, QStringList values)
{
    int index = 0;
    int valmax = 0;
    QStringList res;

    for (int i=0; i<users.size(); i++) {
        if (values[i].toInt() > valmax) {
            index = i;
            valmax = values[i].toInt();
        }
    }

    res.append(users[index]);
    res.append(QString::number(valmax));

    return res;
}
