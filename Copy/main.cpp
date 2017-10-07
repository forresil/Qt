#include <QCoreApplication>
#include <QDebug>
#include <QStringList>
#include <QVector>

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);

    QStringList List;

    List << "a" << "b" << "c";

    QVector<QString> Vect(3);
//----------------------------------------------------
    qCopy(List.begin(),List.end(),Vect.begin());

    foreach(QString itm, Vect)
    {
        qDebug() << itm;
    }

//----------------------------------------------------
    qCopy(List.begin()+1,List.end(),Vect.begin());

    foreach(QString itm, Vect)
    {
        qDebug() << itm;
    }
    
    return a.exec();
}
