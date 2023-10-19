#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    connect(ui->pushButton, SIGNAL(clicked()), this, SLOT(doSomething()));
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::doSomething(){
    // do something
    qInfo("Hello World");
    // do something else
}

//void MainWindow::on_pushButton_clicked()
//{
//    // do something
//    qInfo("Hello World");
//    // do something else
//}
