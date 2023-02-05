#ifndef MAINBUTTONS_H
#define MAINBUTTONS_H
//Essentially Main Class
#include "Control_Systems.h"
#include "Elevator.h"

class MainButtons{
private:
    Control_Systems* C;
public:
    MainButtons();
    ~MainButtons();
    void Launch();
};


#endif // MAINBUTTONS_H
