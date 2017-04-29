#ifndef TRANSDIALOG_H
#define TRANSDIALOG_H

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

private slots:
    void on_lineEdit_returnPressed();

    void on_pushButton_clicked();

private:
    Ui::TransDialog *ui;
};

#endif // TRANSDIALOG_H
