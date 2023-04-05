#include "mainwindow.h"
#include "enviroment.h"
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
    QByteArray datas = "1234";
    qDebug() << datas;
    SerialInfo = QString(datas);
    ui->labelInfo->setText("Syötä pin koodi");
    /*
    Q_FOREACH(QSerialPortInfo port, QSerialPortInfo::availablePorts()){
        //qDebug()<<port.portName();
        //qDebug()<<port.serialNumber();
        //qDebug()<<port.description();
        //qDebug()<<port.hasProductIdentifier();
        //qDebug()<<port.vendorIdentifier();
        //qDebug()<<port.manufacturer();
        if (port.serialNumber()=="OL406A9004C51F7"){
            portName = port.portName();
            //qDebug()<<port.portName();
        }
    }

        QSerialPort serial;
        serial.setPortName(portName);
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
                SerialBytes = serial.bytesAvailable();
                QByteArray datas = serial.readAll();
                qDebug() << datas;
                SerialInfo = QString(datas);
                serial.close();
                ui->labelInfo->setText("Syötä pin koodi");
            }
        }
        if(SerialBytes == 16){
            SerialInfo = SerialInfo.mid(2,11);
            qDebug() << SerialInfo;
        }
        else{
            SerialInfo = SerialInfo.mid(18,11);
            qDebug() << SerialInfo;
        }
*/
}

void MainWindow::numberClickedHandler()
{
    if(SerialInfo!=NULL){
        QPushButton * button = qobject_cast<QPushButton*>(sender());
        QString name = button->objectName();
        //qDebug() << "Button name:" << name;

        if(pin.length()!=4){
            pin = pin + name.back();

            fakePin = fakePin + "*";
            ui->labelPin->setText(QString(fakePin));

            qDebug() << "PIN:" << pin;
        }
    }

}

void MainWindow::EraseAndLoginClickhandler()
{
    if(SerialInfo!=NULL){
        QPushButton * button = qobject_cast<QPushButton*>(sender());
        QString name = button->objectName();
        //qDebug() << "Button name:" << name;

        if(name == "btnErase"){
            pin = pin.left(pin.length()-1);

            fakePin = fakePin.left(fakePin.length()-1);
            ui->labelPin->setText(QString(fakePin));

            qDebug() << "PIN:" << pin;
        }
        else {
            QJsonObject jsonObj;
            jsonObj.insert("idkortti",SerialInfo);
            jsonObj.insert("pinkoodi",pin);

            QString site_url=Enviroment::getBaseUrl()+"/login";
            QNetworkRequest request((site_url));
            request.setHeader(QNetworkRequest::ContentTypeHeader, "application/json");

            loginManager = new QNetworkAccessManager(this);
            connect(loginManager, SIGNAL(finished (QNetworkReply*)), this, SLOT(loginSlot(QNetworkReply*)));

            reply = loginManager->post(request, QJsonDocument(jsonObj).toJson());
        }
    }

}

void MainWindow::loginSlot(QNetworkReply *reply)
{
    response_data=reply->readAll();
    if(QString::compare(response_data, "false")!=0){
        ui->labelInfo->setText("login ok");

        testi.transportToken(response_data);
        testi.show();
        testi.getBalanceAndCredit("saldo");
        testi.getBalanceAndCredit("credit");
    }
    else{
        ui->labelInfo->setText("Väärä pin koodi");
        pin.clear();
        fakePin.clear();
        ui->labelPin->clear();
    }
    qDebug()<<response_data;
    reply->deleteLater();
    loginManager->deleteLater();
}

const QByteArray &MainWindow::getToken() const
{
    return token;
}

void MainWindow::setToken(const QByteArray &newToken)
{
    token = newToken;
}

