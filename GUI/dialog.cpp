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
    ui->label->setText("<b>Hallo</b> everyone");
    ui->checkBox->setChecked(true);
//    //-----------------------------------------------
//    ui->comboBox->addItem("Hallo");
//    ui->comboBox->addItem("World");
//    //-----------------------------------------------
//    for (int i =0;1<9;i++)
//    {
//        ui->comboBox->addItem(QString::number(i)+"item");
//    }
}

Dialog::~Dialog()
{
    delete ui;
}

void Dialog::on_pushButton_clicked()
{
    QMessageBox::information(this, "Title here","Hello World");
    //-----------------------------------------------
     QMessageBox::information(this, "Title here",ui->lineEdit->text());
     ui->lineEdit->setText("hello world");
     //-----------------------------------------------

}

void Dialog::on_pushButton_2_clicked()
{
    if (ui->checkBox->isChecked())
    {
        QMessageBox::information(this,"Cats","You like cats.");
    }
    else
    {
        QMessageBox::information(this,"Cats","You don't like cats.");
    }
}

void Dialog::on_pushButton_3_clicked()
{
    if(ui->radioButton->isChecked())
    {
        QMessageBox::information(this,"Title",ui->radioButton->text());
    }

    if(ui->radioButton_2->isChecked())
    {
        QMessageBox::information(this,"Title",ui->radioButton_2->text());
    }
}
