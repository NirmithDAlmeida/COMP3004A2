#ifndef CONTROL_SYSTEMS_H
#define CONTROL_SYSTEMS_H

#include <vector>
#include <string>

#include "Elevator.h"


class Control_Systems{
private:
    int CountPass;
    int CountCars;
    bool fire;
    bool overload;
    bool power;
    bool elevatorStuck;
    vector<Elevator*> elevators;
    bool ElevatorCalled;//check if elevator is called or not
    bool ElevatorButtonIlluminated;//check if elevator buttons are illuminated

public:
// not sure on what input will come in here
    Control_Systems();
    ~Control_Systems();
    void basicCase();
    void helpButton();
    void DoorObstacle();
    void FireCase();
    void overloadCase();
    void outage();
    bool getElevatorCalled();
    bool getElevatorButtonIlluminated();
    bool setElevatorCalled();
    bool setElevatorButtonIlluminated();
    void printSafetyFeatures();//this will be the main display showing any safetyIssues - WILL BE CALLED WHEN SAFETY FEATURE IS TRIGGERED
    void printNormalUpdates();//WILL BE CALLED WHEN TEST CASE IS SUCCESSFUL

protected:
    bool hasElevatorArrived();
    bool ElevatorAvailable(Elevator*);
    bool isElevatorStuck(Elevator*);
};

#endif // CONTROL_SYSTEMS_H
