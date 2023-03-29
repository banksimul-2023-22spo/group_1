#include "loggedwindow.h"
#include "ui_loggedwindow.h"

loggedwindow::loggedwindow(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::loggedwindow)
{
    ui->setupUi(this);
}

loggedwindow::~loggedwindow()
{
    delete ui;
}
