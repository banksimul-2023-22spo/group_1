#include "transactions.h"
#include "ui_transactions.h"
#include <QDebug>



Transactions::Transactions(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Transactions)
{
    ui->setupUi(this);
}

Transactions::~Transactions()
{
    delete ui;
}

void Transactions::setMyData(const QString &newMyData)
{
    qDebug()<<"dawdadawd";
    myData = newMyData;
    qDebug()<<myData;
    ui->textEdit->setText(myData);
}
