#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QDebug>
#include <QtSerialPort>

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    connect(ui->btn0,SIGNAL(clicked()),
            this,SLOT(numberClickedHandler()),Qt::QueuedConnection);

    connect(ui->btn1,SIGNAL(clicked()),
            this,SLOT(numberClickedHandler()),Qt::QueuedConnection);

    connect(ui->btn2,SIGNAL(clicked()),
            this,SLOT(numberClickedHandler()),Qt::QueuedConnection);

    connect(ui->btn3,SIGNAL(clicked()),
            this,SLOT(numberClickedHandler()),Qt::QueuedConnection);

    connect(ui->btn4,SIGNAL(clicked()),
            this,SLOT(numberClickedHandler()),Qt::QueuedConnection);

    connect(ui->btn5,SIGNAL(clicked()),
            this,SLOT(numberClickedHandler()),Qt::QueuedConnection);

    connect(ui->btn6,SIGNAL(clicked()),
            this,SLOT(numberClickedHandler()),Qt::QueuedConnection);

    connect(ui->btn7,SIGNAL(clicked()),
            this,SLOT(numberClickedHandler()),Qt::QueuedConnection);

    connect(ui->btn8,SIGNAL(clicked()),
            this,SLOT(numberClickedHandler()),Qt::QueuedConnection);

    connect(ui->btn9,SIGNAL(clicked()),
            this,SLOT(numberClickedHandler()),Qt::QueuedConnection);

    connect(ui->btnErase,SIGNAL(clicked()),
            this,SLOT(EraseAndLoginClickhandler()),Qt::QueuedConnection);

    connect(ui->btnLogin,SIGNAL(clicked()),
            this,SLOT(EraseAndLoginClickhandler()),Qt::QueuedConnection);

}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::getSerialInfo()
{
    QSerialPort serial;
        serial.setPortName("COM4");
        if(!serial.setBaudRate(QSerialPort::Baud9600))
            qDebug() << serial.errorString();
        if(!serial.setDataBits(QSerialPort::Data7))
            qDebug() << serial.errorString();
        if(!serial.setParity(QSerialPort::EvenParity))
            qDebug() << serial.errorString();
        if(!serial.setFlowControl(QSerialPort::HardwareControl))
            qDebug() << serial.errorString();
        if(!serial.setStopBits(QSerialPort::OneStop))
            qDebug() << serial.errorString();
        if(!serial.open(QIODevice::ReadOnly))
            qDebug() << serial.errorString();
        qDebug() << serial.bytesAvailable();
        while(serial.isOpen())
        {
            if(!serial.waitForReadyRead(-1)) //block until new data arrives
                qDebug() << "error: " << serial.errorString();
            else{
                qDebug() << "New data available: " << serial.bytesAvailable();
                QByteArray datas = serial.readAll();
                qDebug() << datas;
                SerialInfo = QString(datas);
                serial.close();
                ui->labelInfo->setText("Syötä pin koodi");
            }
        }

}

void MainWindow::numberClickedHandler()
{
    if(SerialInfo!=NULL){
        QPushButton * button = qobject_cast<QPushButton*>(sender());
        QString name = button->objectName();
        //qDebug() << "Button name:" << name;

        //qDebug() << "PIN:" << pin;
        if(pin.length()!=4){
            pin = pin + name.back();
            ui->labelPin->setText(QString(pin));
        }
    }

}

void MainWindow::EraseAndLoginClickhandler()
{
    if(SerialInfo!=NULL){
        QPushButton * button = qobject_cast<QPushButton*>(sender());
        QString name = button->objectName();

        if(name == "btnErase"){
            pin = pin.left(pin.length()-1);
            ui->labelPin->setText(QString(pin));
        }
    }

}

