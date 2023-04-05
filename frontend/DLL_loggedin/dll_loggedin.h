#ifndef DLL_LOGGEDIN_H
#define DLL_LOGGEDIN_H

#include <QDialog>
#include <DLL_loggedin_global.h>
#include <QtNetwork>
#include <QNetworkAccessManager>
#include <QJsonDocument>

namespace Ui {
class DLL_loggedin;
}

class DLL_loggedin : public QDialog
{
    Q_OBJECT

public:
    explicit DLL_loggedin(QWidget *parent = nullptr);
    ~DLL_loggedin();
    void setToken_idKortti(QByteArray, QString);

signals:
    void logOutClicked();


private slots:
    void btnClickedHandler();
    void logOutClickedHandler();
    void tilisReplyFinished(QNetworkReply *reply);
    void omistajaSlot (QNetworkReply *reply);

private:
    void retrieveAndSetTilis();

    Ui::DLL_loggedin *ui;
    QByteArray token;
    QString idkortti;
    void setUsername();
    QString username;
    QNetworkAccessManager *loginManager;
    QNetworkReply *reply;
    QByteArray response_data;
};

#endif // DLL_LOGGEDIN_H
