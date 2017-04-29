#include "transdialog.h"
#include "ui_transdialog.h"
#include <QtGlobal>
#include <stdio.h>
#include <stdlib.h>

TransDialog::TransDialog(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::TransDialog)
{
    ui->setupUi(this);
}

TransDialog::~TransDialog()
{
    delete ui;
}

void TransDialog::on_lineEdit_returnPressed()
{
    QString response = ui->lineEdit->text();
    ui->label_6->setText((response));
}

void TransDialog::on_pushButton_clicked()
{
    TransDialog::on_lineEdit_returnPressed();
}
