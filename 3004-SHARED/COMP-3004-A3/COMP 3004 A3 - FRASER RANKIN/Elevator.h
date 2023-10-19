#ifndef ELEVATOR_H
#define ELVATOR_H

#include <iostream>
#include <string>
#include <iomanip>
#include <cstdlib>

using namespace std;
#define TOP_FLOOR 20
#define BOTTOM_FLOOR 1
#define MAX_WEIGHT 1000

class Elevator{
    private:
        string currentFloor;
        int currentWeight;
        bool doorOpen;
        string display;
        bool doorClear;


    public:
        // Elevator();
        Elevator(string currentFloor="0", int currentWeight=0, bool doorOpen=false, string text="");
        ~Elevator();
        bool checkWeight();
        bool openDoors();
        bool closeDoors();
        bool checkDoors();
        string changeDisplay(string info);
        string showFloor();
        int showWeight();
        bool changeFloor(string floor);
        void displayFloorNum();
};











#endif