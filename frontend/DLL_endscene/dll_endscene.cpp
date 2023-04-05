#include "dll_endscene.h"
#include "ui_dll_endscene.h"

DLL_endscene::DLL_endscene(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::DLL_endscene)
{
    ui->setupUi(this);
}

DLL_endscene::~DLL_endscene()
{
    delete ui;
}
