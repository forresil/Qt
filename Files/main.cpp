#include <QCoreApplication>
#include <QFile>
#include <QString>
#include <QDebug>
#include <QTextStream>
void Write(QString Filename)
{
    QFile mFile(Filename);
    if(!mFile.open(QFile::WriteOnly|QFile::Text))
    {
        qDebug() << "could not open file for writting!";
        return;
    }
    QTextStream out(&mFile);
    out << "Hello World";
    mFile.flush();
    mFile.close();
}

void Read(QString Filename)
{
    QFile mFile(Filename);
    if(!mFile.open(QFile::ReadOnly|QFile::Text))
    {
        qDebug() << "could not open file for read!";
        return;
    }
    QTextStream in(&mFile);
    QString mText = in.readAll();
    qDebug() << mText;
    mFile.close();
}

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);
    
    QString mFilename="/home/forresil/workspace/Qt/Tutorials/Files/myfile.txt";
    Write(mFilename);
    Read(mFilename);
    //-----------------------------------------------------
    Read(":/MyFiles/Files.pro");

    return a.exec();
}
