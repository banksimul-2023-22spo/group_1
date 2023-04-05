#ifndef MYDATA_H
#define MYDATA_H

#include <QDialog>

namespace Ui {
class Transactions;
}

class Transactions : public QDialog
{
    Q_OBJECT

public:
    explicit Transactions(QWidget *parent = nullptr);
    ~Transactions();

    void setMyData(const QString &newMyData);

private:
    Ui::Transactions *ui;
    QString myData;

private slots:
    void clickerHandler();
};

#endif // MYDATA_H
