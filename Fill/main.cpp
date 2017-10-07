#include <QCoreApplication>
#include <QDebug>
#include <QVector>

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);


    //--------------------------------------
    QVector<QString> Vect(5);

    qFill(Vect, "hello world");

    foreach(QString itm, Vect)
    {
        qDebug() << itm;
    }
    //--------------------------------------
    QVector<QString> Vect2(5);

    qFill(Vect2.begin()+1, Vect2.end()-1, "hello world");

    foreach(QString itm, Vect2)
    {
        qDebug() << itm;
    }


    return a.exec();
}
