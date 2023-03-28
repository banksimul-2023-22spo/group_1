#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>

QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();
    void getSerialInfo();

private slots:
    void numberClickedHandler();
    void EraseAndLoginClickhandler();

private:
    Ui::MainWindow *ui;
    QString pin;
    QString SerialInfo = NULL;
};
#endif // MAINWINDOW_H
