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
    void ending();
    void setUsername(QString username);
    void setPath(QString pathverb);
    QString getHighscore();
    void setHighestscore(QString value);
    void setBest(QString bestplayer);
    void resetHighscore();
    void initListe();

private slots:
    void on_start_clicked();

    void on_pushButton_clicked();

    void on_lineEdit_2_returnPressed();

    void on_lineEdit_returnPressed();

    void on_next_button_clicked();

    void on_end_button_clicked();

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
