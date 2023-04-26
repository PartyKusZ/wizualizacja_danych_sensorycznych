#pragma once 

#include <QObject>
#include <QThread>

class signal_emiter: public QObject{
    Q_OBJECT
private:
public:
    signal_emiter(): QObject(){};
    ~signal_emiter(){};

    void emiter(){
    int x1 = 0;
    int x2 = 0;
    int x3 = 0;
    int x4 = 0;
    int x5 = 0;
    for(int i = 0; i < 100; ++i){
        emit sig(x1++, x2++, x3++, x4++, x5++);
        QThread::currentThread()->msleep(1000);

    }
}


signals:
    void sig(int x1, int x2, int x3, int x4,int x5);
};




