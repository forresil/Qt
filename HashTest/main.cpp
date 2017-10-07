#include <QCoreApplication>
#include <QHash>
#include <QDebug>

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);

    QHash<int, QString> Employees;  //<--- A very fast form of QMap

    Employees.insert(1,"Bob");
    Employees.insert(2,"Chad");
    Employees.insert(3,"Mary");

    foreach(int i, Employees.keys())
    {
        qDebug()<< Employees[i];
    }

    qDebug()<< "3 = "<< Employees.value(3);

    QHashIterator<int,QString> Iter(Employees);

    while (Iter.hasNext()) {
        Iter.next();
        qDebug()<<Iter.key() << " = " << Iter.value();
    }


    return a.exec();
}
