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

protected:
    bool hasElevatorArrived();
    bool ElevatorAvailable(Elevator*);
    bool isElevatorStuck(Elevator*);
};

#endif // CONTROL_SYSTEMS_H
