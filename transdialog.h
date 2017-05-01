#ifndef TRANSDIALOG_H
#define TRANSDIALOG_H
#define MAXWORD 2000

#include <QDialog>

namespace Ui {
class TransDialog;
}

class TransDialog : public QDialog
{
    Q_OBJECT

public:
    explicit TransDialog(QWidget *parent = 0);
    ~TransDialog();
    bool TransDialog::is_tested(int index);
    void TransDialog::ending();
    void TransDialog::setUsername(QString username);
    void TransDialog::setPath(QString pathword);
    void TransDialog::initListe();

private slots:
    void on_lineEdit_returnPressed();

    void on_pushButton_clicked();

    void on_next_button_clicked();

    void on_end_button_clicked();

    void on_start_clicked();

private:
    Ui::TransDialog *ui;
    bool endGame;
    int score;
    int min;
    int maxi;
    int nb;
    int used [MAXWORD];
    int current;
    int highscore;
    QStringList enList;
    QStringList frList;
    QString en;
    QString fr;
    QString best_player;
    QString username;
    QString path;
};

#endif // TRANSDIALOG_H
