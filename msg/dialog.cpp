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
}

Dialog::~Dialog()
{
    delete ui;
}

void Dialog::on_pushButton_clicked()
{
    //info
    QMessageBox::information(this, "Title here", "Text here");
}

void Dialog::on_pushButton_2_clicked()
{
    //question
    QMessageBox::StandardButton reply;
    reply= QMessageBox::question(this,"Title here", "Do you like cats?", QMessageBox::Yes|QMessageBox::No);
    if (reply==QMessageBox::Yes)
    {
        QMessageBox::information(this, "Title", "Yes you love cats!");
    }
}

void Dialog::on_pushButton_3_clicked()
{
    QMessageBox::warning(this, "Title", "Text Here");
}

void Dialog::on_pushButton_4_clicked()
{
    QMessageBox::question(this, "Title here", "Text here", QMessageBox::Yes |QMessageBox::YesAll| QMessageBox::NoAll|QMessageBox::No );
}
