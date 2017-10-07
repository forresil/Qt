#include <QCoreApplication>
#include <QDebug>
#include <QStringList>

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);
//-------------------------------------
    QStringList List;

    List.append("Hello");

    foreach (QString itm, List) {
        qDebug()<< itm;
    }
//-------------------------------------

    QString Line = "a,b,c,d,e,f,g";

    List = Line.split(",");

    foreach (QString itm, List) {
        qDebug()<< itm;
    }
//-------------------------------------

    List.replaceInStrings("b","batman");

    foreach (QString itm, List) {
        qDebug()<< itm;
    }

    //-------------------------------------

    QString After = List.join(",");
    qDebug()<< After;

    return a.exec();
}
