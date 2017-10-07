#include <QApplication>
#include <QtGui>
#include <QtCore>
#include <QLabel>
#include <QPushButton>
#include <QHBoxLayout>
#include <QVBoxLayout>
#include <QLineEdit>

int main(int argc, char *argv[]){
    QApplication app(argc, argv);
    //-----------------------------------------------------------
    //QLabel *label =new QLabel("<b>Hello</b> <i>world</i>");
    QLabel *label =new QLabel("<h2>Hello<font color=red> world!</font></h2>");
    label->setWindowTitle("Label with HTML Format");
    label->show();
    //-----------------------------------------------------------
    QWidget *windowH = new QWidget;
    windowH->setWindowTitle("My App");;
    QPushButton *button1 = new QPushButton("one");
    QPushButton *button2 = new QPushButton("two");
    QPushButton *button3 = new QPushButton("three");
    QHBoxLayout *hlayout = new QHBoxLayout;
    hlayout->addWidget(button1);
    hlayout->addWidget(button2);
    hlayout->addWidget(button3);
    windowH->setLayout(hlayout);
    windowH->setWindowTitle("Horizontal Layout");
    windowH->show();
    //----------------------------------------------------------
    QWidget *windowV = new QWidget;
    windowV->setWindowTitle("My App");;
    QPushButton *button1v = new QPushButton("one");
    QPushButton *button2v = new QPushButton("two");
    QPushButton *button3v = new QPushButton("three");
    QVBoxLayout *vlayout = new QVBoxLayout;
    vlayout->addWidget(button1v);
    vlayout->addWidget(button2v);
    vlayout->addWidget(button3v);
    windowV->setLayout(vlayout);
    windowV->setWindowTitle("Vertical Layout");
    windowV->show();
    //----------------------------------------------------------
    QWidget *windowGrid = new QWidget;
    QGridLayout *gridLayout = new QGridLayout;
    QLabel *label1 = new QLabel("Name:");
    QLabel *label2 = new QLabel("Name:");
    QLineEdit *txtName1 = new QLineEdit;
    QLineEdit *txtName2 = new QLineEdit;
    gridLayout->addWidget(label1,0,0);
    gridLayout->addWidget(txtName1,0,1);
    gridLayout->addWidget(label2,1,0);
    gridLayout->addWidget(txtName2,1,1);
    QPushButton *pushButton = new QPushButton("Ok");
    gridLayout->addWidget(pushButton,2,0,1,2);
    windowGrid->setWindowTitle("Grid Layout");
    windowGrid->setLayout(gridLayout);
    windowGrid->show();

    return app.exec();
}
