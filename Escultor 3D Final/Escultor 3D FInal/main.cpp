#include "mainwindow.h"

#include <QApplication>

//na main terá "só" a chamada da aplicação em QT

int main(int argc, char *argv[]){

    QApplication a(argc, argv);
    MainWindow w;
    w.show();
    return a.exec();
}
