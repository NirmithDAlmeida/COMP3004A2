#ifndef ELEVATOR_H
#define ELEVATOR_H
#include <vector>


class Elevator{
private:
    int floorNumber;
    int CountPass;
    float WeightLimit;// might change to MaxPassengers
    vector<int> destFloor;
    //safety feature
    bool overload;
    bool fire;
    bool power;
    bool helpbutton;
    bool elevatorStuck;
    bool sensorObstacle;
    //general behaviour
    bool isMoving;// can be replaced with Elevator Stuck - issue will be when elevator is stopped
    bool isStoppedatFloor;//Fix above issue
    bool doorOpen;
    bool ReachedDestination;//will be false when elevator is moving will be true when elevator is stopped at a floor in the destFloor vector


public:
    Elevator(int=1,int=0,float=200);
    ~Elevator();
    //main functions
    void move(int);
    bool requestFloor(vector<int>);
    //getters and setters
    //general behaviour
    int getMaxWeightLimit();
    int getFloorNumber();
    bool getMoving();
    bool getStopped();
    bool doorOpen();
    bool ReachedDestination();
    bool setMoving();
    bool setStopped();
    bool soorOpen();
    bool setReachedDestination();// when user reaches destination
    //safety featrures
    bool getOverload();
    bool getFire();
    bool getSensorInterrupt();
    bool getPower();//if there is power true no power = false
    bool getHelpButton();//if button is pressed or not
    bool getElevatorStuck();//if elevator is stuck in between
    bool setOverload();
    bool setFire();
    bool setSensorInterrupt();
    bool setPower();
    bool setHelpButton();
    bool setElevatorStuck();
};

#endif // ELEVATOR_H
