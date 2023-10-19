#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "Elevator.h"
#include <QMessageBox>
#include <QLine>
#include <iostream>
#include <string>
#include <iomanip>
#include <cstdlib>
#include <QLCDNumber>

#define TOP_FLOOR 20
#define BOTTOM_FLOOR 0

using namespace std;


int currentFloor;
bool doorOpen= false;
string display="";
bool doorClear = true;





MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow){

    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete ui;
}

//---------------------------Elevator Class---------------------------//




bool closeDoors(){
    if(doorClear == true || doorOpen == false){
        doorOpen = false;
        cout << "Doors are closed" << endl;
        return true;
    }
    else{
        cout<<"DOORS HAVE AN OBSTRUCTION!"<<endl;
        return false;
    }
}
string changeDisplay(string info){
    display = info;
    cout<<display<<endl;
    return display;
}

bool openDoors(){
    if(doorOpen == false){
        doorOpen = true;
        cout << "Doors are now open" << endl;
        return true;
    }
    else{
        return true;
    }
}



int showFloor(){
    cout<<"Current floor: "<<currentFloor<<endl;
    return currentFloor;
}

bool changeFloor(int floor){
    if(floor>= TOP_FLOOR || floor <= BOTTOM_FLOOR){
        cout<<"Floor out of range"<<endl;
        return false;
    }
    else{
        currentFloor = (floor);
        cout<<"Floor changed to: "<<currentFloor<<endl;
        return true;
    }
}


void displayFloorNum(){
    cout<<"Current floor: "<<currentFloor<<endl;
}
//-------------------------------------------------------------

void MainWindow::on_OpenButton_clicked()
{
    openDoors();
}
void MainWindow::on_floorPushButton_clicked()
{
    closeDoors();
    QString floorNum = ui->FloorBox_line->text();
    changeFloor(floorNum.toInt());
    ui->FloorNumDisp->display(floorNum.toDouble());
    openDoors();

}



void MainWindow::on_CloseButton_clicked()
{
    if (!closeDoors()){
        QMessageBox::warning(this,"Door Error!", "Doors are not clear!");
    }
    else{
        cout<<"Doors are closed"<<endl;
    }
}

void MainWindow::on_BlockButton_clicked()
{
    doorClear = false;
    cout<<"Doors are not clear!"<<endl;
}

void MainWindow::on_ClearButton_clicked()
{
    doorClear = true;
    cout<<"Door is now clear"<<endl;
}

void MainWindow::on_servButton_clicked()
{
    QMessageBox::warning(this,"Services!", "Building Services are being called");
}
