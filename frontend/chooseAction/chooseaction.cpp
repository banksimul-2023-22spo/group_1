#include "chooseaction.h"
#include "transactions.h"
#include "ui_chooseaction.h"
#include <QDebug>
#include "enviroment.h"
#include <QJsonDocument>


chooseAction::chooseAction(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::chooseAction)
{
    ui->setupUi(this);

    connect(ui->Withdraw,SIGNAL(clicked()),
            this,SLOT(ClickerHandler()),Qt::QueuedConnection);

    connect(ui->Transactions,SIGNAL(clicked()),
            this,SLOT(ClickerHandler()),Qt::QueuedConnection);

    connect(ui->Back,SIGNAL(clicked()),
            this,SLOT(ClickerHandler()),Qt::QueuedConnection);

    connect(ui->logOut,SIGNAL(clicked()),
            this,SLOT(logOutClickerHandler()),Qt::QueuedConnection);

}

chooseAction::~chooseAction()
{
    delete ui;
}

QByteArray chooseAction::transportToken(QByteArray token)
{
    tokenValue = token;
    return 0;
}

void chooseAction::getTili(QString a)
{
    tili=a;
}

void chooseAction::getBalanceAndCredit(QString balOrCred)
{
        QString site_url=Enviroment::getBaseUrl()+"/tili/"+tili+"/"+balOrCred;
        QNetworkRequest request((site_url));

        QString web_token = tokenValue;
        request.setRawHeader("Authorization", ("Bearer " + web_token).toUtf8());

        QNetworkAccessManager *manager = new QNetworkAccessManager(this);
        QNetworkReply *reply = manager->get(request);

        connect(reply, &QNetworkReply::finished, [=]() {
            if (reply->error() == QNetworkReply::NoError) {
                QString response = reply->readAll();
                QJsonDocument jsonDoc = QJsonDocument::fromJson(response.toUtf8());
                QJsonObject jsonObj = jsonDoc.object();

                float saldo = jsonObj["saldo"].toDouble();
                QString saldoString = QString::number(saldo);

                if(balOrCred == "saldo"){
                    ui->Balance->setText(saldoString);
                    qDebug() << balOrCred+": "<<response;
                }
                else if(balOrCred == "credit"){
                    ui->Credit->setText(saldoString);
                    qDebug() << balOrCred+": "<<response;
                }

            } else {
                qDebug() << "Error: " << reply->errorString();
            }
            reply->deleteLater();
            manager->deleteLater();
        });
}

void chooseAction::ClickerHandler()
{
    QPushButton * button = qobject_cast<QPushButton*>(sender());
    QString name = button->objectName();
    if(name == "Withdraw"){
        qDebug() << "Button name:" << name;
    }
    else if(name == "Transactions"){
        qDebug() << "Button name:" << name;

        QString site_url=Enviroment::getBaseUrl()+"/tilitapahtumat/getbytiliid/2";
        QNetworkRequest request((site_url));

        QString web_token = tokenValue;
        request.setRawHeader("Authorization", ("Bearer " + web_token).toUtf8());

        QNetworkAccessManager *manager = new QNetworkAccessManager(this);
        QNetworkReply *reply = manager->get(request);



        connect(reply, &QNetworkReply::finished, [=]() {
            if (reply->error() == QNetworkReply::NoError) {
                QString response = reply->readAll();

                qDebug()<<response;
                QJsonDocument json_doc = QJsonDocument::fromJson(response.toUtf8());
                QJsonArray json_array = json_doc.array();
                QJsonObject json_obj = json_doc.object();
                QString data;
                foreach (const QJsonValue &value, json_array) {
                    QJsonObject json_obj = value.toObject();
                    data += json_obj["idtilitapahtumat"].toString()+" | "+json_obj["aika"].toString()+" | "+QString::number(json_obj["summa"].toInt())+" | "+json_obj["idtili"].toString()+"\r";}

               // data=json_obj["aika"].toString()+"\r\n"+json_obj["summa"].toString()+json_obj["idtili"].toString()+"\r\n"+json_obj["idtilitapahtumat"].toString()+"\r\n";

                qDebug()<<data;
                Transactions *objTransactions=new Transactions(this);
                objTransactions->setMyData(data);
                objTransactions->open();

                reply->deleteLater();
                manager->deleteLater();

            }
        });


    }
    else if(name == "Back"){
        qDebug() << "Button name:" << name;
        close();
    }
}

void chooseAction::logOutClickerHandler()
{

}


