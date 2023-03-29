#ifndef LOGGEDWINDOW_H
#define LOGGEDWINDOW_H

#include <QDialog>

namespace Ui {
class loggedwindow;
}

class loggedwindow : public QDialog
{
    Q_OBJECT

public:
    explicit loggedwindow(QWidget *parent = nullptr);
    ~loggedwindow();

private:
    Ui::loggedwindow *ui;
};

#endif // LOGGEDWINDOW_H
