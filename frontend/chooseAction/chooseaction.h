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
    QByteArray transportToken(QByteArray);

private:
    Ui::chooseAction *ui;
    QByteArray tokenValue;
    QByteArray response;
    QNetworkAccessManager *manager;
    QNetworkReply *reply;

private slots:
    void ClickerHandler();
    void logOutClickerHandler();
    //void getMyDataSlot(QNetworkReply *reply);


};

#endif // CHOOSEACTION_H

