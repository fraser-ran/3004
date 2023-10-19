#include "Elevator.h"

using namespace std;

Elevator::Elevator(string currentFloor, int currentWeight, bool doorOpen, string text){
    this->currentFloor = currentFloor;
    this->currentWeight = currentWeight;
    this->doorOpen = doorOpen;
    this->display = text;
}

Elevator::~Elevator(){}

bool Elevator::checkWeight(){
    if(currentWeight > MAX_WEIGHT){
        cout << "The elevator is too heavy!" << endl;
        return false;
    }
    else{
        cout << "The elevator is not too heavy!" << endl;
        return true;
    }
}

string Elevator::changeDisplay(string info){
    display = info;
    cout<<display<<endl;
    return display;
}

bool Elevator:: openDoors(){
    if(doorOpen == false){
        doorOpen = true;
        cout << "Doors are now open" << endl;
        return true;
    }
    else{
        return true;
    }
}

bool Elevator::closeDoors(){
    if(doorClear == true || doorOpen == false){
        doorOpen = false;
        cout << "Doors are closed" << endl;
        return true;
    }
    else{
        return false;
    }
}

string Elevator::showFloor(){
    cout<<"Current floor: "<<currentFloor<<endl;
    return currentFloor;
}

bool Elevator::changeFloor(string floor){
    if(stoi(floor) >= TOP_FLOOR || stoi(floor)<= BOTTOM_FLOOR){
        cout<<"Floor out of range"<<endl;
        return false;
    }
    else{
        currentFloor = floor;
        cout<<"Floor changed to: "<<currentFloor<<endl;
        return true;
    }
}

int Elevator::showWeight(){
    cout<<"Current weight: "<<currentWeight<<endl;
    return currentWeight;
}

void Elevator::displayFloorNum(){
    cout<<"Floor number: "<<currentFloor<<endl;
}
// Elevator::Elevator(){
//     this->currentFloor = "0";
//     this->currentWeight = 0;
//     this->doorOpen = false;
//     this->doorClear = true;
// }