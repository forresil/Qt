#include <QCoreApplication>
#include <QList>
#include <QDebug>

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);

    QList<int> List;

    for(int i=0; i<10; i++)
    {
        List.append(i);
    }

    List.removeOne(5);

    
    foreach(int mNumber, List)
    {
        qDebug()<< mNumber;
    }

    return a.exec();
}
