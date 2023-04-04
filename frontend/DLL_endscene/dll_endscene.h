#ifndef DLL_ENDSCENE_H
#define DLL_ENDSCENE_H

#include <QDialog>
#include <DLL_endscene_global.h>

namespace Ui {
class DLL_endscene;
}

class DLL_endscene : public QDialog
{
    Q_OBJECT

public:
    explicit DLL_endscene(QWidget *parent = nullptr);
    ~DLL_endscene();

private:
    Ui::DLL_endscene *ui;
};

#endif // DLL_ENDSCENE_H
