#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "mydialog.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    setCentralWidget(ui->plainTextEdit);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_actionNew_Window_triggered()
{
    //Open a modal Window
    MyDialog modalDialog;
    modalDialog.setModal(true);
    modalDialog.exec();


    //Open a not modal Dialog Window
    mDialog = new MyDialog(this);
    mDialog->show();
}
