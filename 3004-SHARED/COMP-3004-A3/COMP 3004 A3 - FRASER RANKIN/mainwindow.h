#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
// #include "Elevator.h"


QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private slots:
    void on_floorPushButton_clicked();

    void on_OpenButton_clicked();

    void on_CloseButton_clicked();

    void on_BlockButton_clicked();

    void on_ClearButton_clicked();

    void on_servButton_clicked();

private:
    Ui::MainWindow *ui;
};
#endif // MAINWINDOW_H
