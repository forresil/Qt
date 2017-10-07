#include <QCoreApplication>
#include <QDebug>
#include <QLinkedList>

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);
    
    QLinkedList<int> List;   //<--- A very fast kind of List!!!!!

    List << 1 << 3 << 5;    //where every element contains a pointer to the next element.

    foreach(int i, List)
    {
        qDebug() << i;
    }

    return a.exec();
}
