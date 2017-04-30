#include "verbdialog.h"
#include "ui_verbdialog.h"

VerbDialog::VerbDialog(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::VerbDialog)
{
    ui->setupUi(this);
}

VerbDialog::~VerbDialog()
{
    delete ui;
}
