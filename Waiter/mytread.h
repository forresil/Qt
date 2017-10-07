#ifndef MYTREAD_H
#define MYTREAD_H

#include <QThread>

class MyThread : public QThread
{
    Q_OBJECT
public:
    explicit MyThread(QObject *parent = 0);

protected:
    void run();  //<--- Overide run (start)

signals:
    
public slots:
    
};

#endif // MYTREAD_H
