#ifndef VERBDIALOG_H
#define VERBDIALOG_H
#define MAXVERB 2000

#include <QDialog>

namespace Ui {
class VerbDialog;
}

class VerbDialog : public QDialog
{
    Q_OBJECT

public:
    explicit VerbDialog(QWidget *parent = 0);
    ~VerbDialog();
    bool VerbDialog::is_tested(int index);
    void VerbDialog::ending();
    void VerbDialog::setUsername(QString username);
    void VerbDialog::setPath(QString pathverb);
    void VerbDialog::initListe();

private slots:
    void on_start_clicked();

private:
    Ui::VerbDialog *ui;
    bool endGame;
    int score;
    int min;
    int maxi;
    int nb;
    int used [MAXVERB];
    int current;
    int highscore;
    QString best_player;
    QString username;
    QString path;
    QStringList inf;
    QStringList pret;
    QStringList pastp;
    QStringList meaning;
    QString infc;
    QString pretc;
    QString pastpc;
    QString meaningc;
};

#endif // VERBDIALOG_H
