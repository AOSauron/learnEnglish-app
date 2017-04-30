#ifndef VERBDIALOG_H
#define VERBDIALOG_H

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

private:
    Ui::VerbDialog *ui;
};

#endif // VERBDIALOG_H
