#ifndef DLL_LOGGEDIN_H
#define DLL_LOGGEDIN_H

#include <QDialog>
#include <DLL_loggedin_global.h>

namespace Ui {
class DLL_loggedin;
}

class DLL_loggedin : public QDialog
{
    Q_OBJECT

public:
    explicit DLL_loggedin(QWidget *parent = nullptr);
    ~DLL_loggedin();

private:
    Ui::DLL_loggedin *ui;
};

#endif // DLL_LOGGEDIN_H
