#include "dialog.h"
#include "ui_dialog.h"

Dialog::Dialog(QWidget *parent) : QDialog(parent), ui(new Ui::Dialog)
{
    ui->setupUi(this);
    ui->listWidget->addItem("Hello");

    for(int i=0;i<9;i++)
    {
        ui->listWidget->addItem(QString::number(i)+" Item");
    }
}

Dialog::~Dialog()
{
    delete ui;
}

void Dialog::on_pushButton_clicked()
{
    ui->listWidget->currentItem()->setText("Fuzzy bunnys of doom");
    QListWidgetItem *itm = ui->listWidget->currentItem();
    itm->setTextColor(Qt::red);
    itm->setBackgroundColor(Qt::black);
}
