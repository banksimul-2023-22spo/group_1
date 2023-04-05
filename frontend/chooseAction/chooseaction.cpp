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
                float credit = jsonObj["credit"].toDouble();
                QString saldoValue = QString::number(saldo);
                QString CreditValue = QString::number(credit);

                if(balOrCred == "saldo"){
                    ui->Balance->setText(saldoValue);
                    qDebug() << balOrCred+": "<<response;
                }
                else if(balOrCred == "credit"){
                    ui->Credit->setText(CreditValue);
                    qDebug() << balOrCred+": "<<response;
                }

            } else {
                qDebug() << "Error: " << reply->errorString();
            }
            reply->deleteLater();
            manager->deleteLater();
        });
}

void chooseAction::getTransactions(QString showAll, QString idtili)
{
        QString site_url=Enviroment::getBaseUrl()+"/tilitapahtumat/getbytiliid/"+idtili;
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
                qDebug()<<data;
                foreach (const QJsonValue &value, json_array){
                    QJsonObject json_obj = value.toObject();
                    float summa = json_obj["summa"].toDouble();
                    QString summaValue = QString::number(summa);
                    QString aikaValue = json_obj["aika"].toString();
                    QString date =  aikaValue.left(10);
                    QString time =  aikaValue.right(15);
                    time =  time.mid(2,8);
                    qDebug()<<summaValue;
                    data += "Päivämäärä:  "+ date +"   "+ time +"    |    -"+ summaValue +"€\n";
                }

                qDebug()<<data;
                if(showAll == "no"){
                    ui->listWidget->addItem(data);
                }

                if(showAll == "yes"){
                    Transactions *objTransactions=new Transactions(this);
                    objTransactions->setMyData(data);
                    qDebug()<<data;
                    objTransactions->open();
                    reply->deleteLater();
                    manager->deleteLater();
                }
            }
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
        getTransactions("yes", "2");

    }
    else if(name == "Back"){
        qDebug() << "Button name:" << name;
        close();
    }  
}

void chooseAction::logOutClickerHandler()
{

}


