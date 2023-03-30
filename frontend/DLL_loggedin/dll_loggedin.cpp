#include "dll_loggedin.h"
#include "ui_dll_loggedin.h"
#include <QDebug>

DLL_loggedin::DLL_loggedin(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::DLL_loggedin)
{
    ui->setupUi(this);
}

DLL_loggedin::~DLL_loggedin()
{
    delete ui;
}
