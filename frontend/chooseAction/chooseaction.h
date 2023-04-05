#ifndef CHOOSEACTION_H
#define CHOOSEACTION_H

#include <QDialog>
#include <QNetworkAccessManager>
#include <QtNetwork>
#include <QJsonDocument>

namespace Ui {
class chooseAction;
}

class chooseAction : public QDialog
{
    Q_OBJECT

public:
    explicit chooseAction(QWidget *parent = nullptr);
    ~chooseAction();
    void getBalanceAndCredit(QString);
    void getTransactions(QString, QString);
    QByteArray transportToken(QByteArray);
    void getTili(QString);

private:
    Ui::chooseAction *ui;
    QByteArray tokenValue;
    QByteArray response;
    QNetworkAccessManager *manager;
    QNetworkReply *reply;

    QString tili;

    QString data;


private slots:
    void ClickerHandler();
    void logOutClickerHandler();


};

#endif // CHOOSEACTION_H

