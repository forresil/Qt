#include <QCoreApplication>
#include <QDebug>


int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);

    QList<int> List;

    List <<2<<3<<1<<0;
//------------------------------------
    qSort(List);

    foreach (int i, List) {
        qDebug()<<i;
    }
 //------------------------------------

    List <<2<<3<<1<<0;
    qSort(List.begin()+1,List.end()-1);

    foreach (int i, List) {
        qDebug()<<i;
    }

    return a.exec();
}
