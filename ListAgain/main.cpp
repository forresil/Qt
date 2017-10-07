#include <QCoreApplication>
#include <QList>
#include <QDebug>

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);
//---------------------------------------
    QList<int> List;

    for(int i=0; i<10;i++)
    {
        List.append(i);
    }
//---------------------------------------
    QListIterator<int> Iter(List);

    while(Iter.hasNext())
    {
        qDebug()<<Iter.next();
    }
//---------------------------------------
    Iter.toBack();
    while(Iter.hasPrevious())
    {
        qDebug()<<Iter.previous();
    }
//---------------------------------------
    Iter.toBack();
    while(Iter.hasPrevious())
    {
        qDebug()<<Iter.previous();
        if(Iter.hasPrevious())
        {
            qDebug()<<"next..."<<Iter.peekPrevious();
        }
    }
    
    return a.exec();
}
