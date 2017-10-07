#include <QCoreApplication>
#include <QDebug>
#include <QDir>
#include <QFileInfo>

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);

    QDir mDir("/home/forresil/workspace/Qt/Tutorials");
    //---------------------------------------------
    qDebug() << mDir.exists();
    //---------------------------------------------
    foreach(QFileInfo mItm, mDir.drives())
    {
        qDebug() << mItm.absoluteFilePath();
    }
    //---------------------------------------------
    QString mPath = "/home/forresil/workspace/Qt/Tutorials/Dirs/ZZZ";
    if(!mDir.exists(mPath))
    {
        mDir.mkpath(mPath);
        qDebug() << "Created";
    }
    else
    {
        qDebug() << "Already exists";
    }
    //---------------------------------------------
    mDir.setPath(mPath);
    foreach(QFileInfo mitm, mDir.entryInfoList())
    {
        qDebug()<< mitm.absoluteFilePath();
        if(mitm.isDir()) qDebug()<<"Dir: mitm.absoluteFilePath()";
        if(mitm.isFile()) qDebug()<<"Dir: mitm.absoluteFilePath()";
    }


    return a.exec();
}
