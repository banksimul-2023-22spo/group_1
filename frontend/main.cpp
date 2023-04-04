#include "mainwindow.h"

#include <QApplication>
#include <QtSerialPort>
#include <QTimer>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    MainWindow mainwindow;
    mainwindow.show();



    //QTimer::singleShot(1000, &a, [&]() {
       // w.getSerialInfo();
   // });

    return a.exec();
}
