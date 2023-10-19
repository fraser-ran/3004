#ifndef ELEVATOR_H
#define ELVATOR_H

#include <iostream>
#include <string>
#include <iomanip>
#include <cstdlib>



class ElevatorCmpt{
    private:
        int currentFloor;
        int currentWeight;
        bool doorOpen;
        // string display;
        // object ECD;
        // object callButtons;
        // object Sensots;
        // object Engine;
        // Object Doors;
        // Object Display;

    public:
        bool checkWeight();
        bool checkFloor();
        bool openDoors();
        bool closeDoors();
        string display(string info);
        
};

class ECD{
    private:
        int currentFloor;
        int buttonPressed;
        // string display;
    
    public:
        bool emergencyStop();
        bool openDoors();
        bool closeDoors();
        bool floorRequest();

        // string display(string info);
};

class CallButtons{
    private:
        bool upButton;
        bool downButton;
        // string display;
    
    public:
        bool callElevatorUp();
        bool callElevatorDown();
};

class Sensors{
    private:
        bool doorSensor;
        int currentWeight;
        bool floorSensor;
    
    public:
        bool checkWeight();
        bool checkFloor();
        bool checkWeight();
};

class Engine{
    private:
        int currentFloor;
        int cord;
        int speed;
        // string display;
    
    public:
        bool moveUp();
        bool moveDown();
        bool stop();
        bool checkWeight();
};
#endif