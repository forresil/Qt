#include "dialog.h"
#include "ui_dialog.h"
#include <QtCore>
#include <QtGui>
#include <QMessageBox>

Dialog::Dialog(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Dialog)
{
    ui->setupUi(this);

    ui->comboBox->addItem("Hello");
    ui->comboBox->addItem("World");

    for(int i=0;i<9;i++)
    {
        ui->comboBox->addItem(QString::number(i)+" Item");
    }
}

Dialog::~Dialog()
{
    delete ui;
}

void Dialog::on_pushButton_clicked()
{
    QMessageBox::information(this,"Title",ui->comboBox->currentText());
}
