#ifndef VEHICLE_H
#define VEHICLE_H

#include <string>
#include "Mover.h"

using namespace std;

class Vehicle
{
private:
    string make;
    string model;
    int year;
    Mover* mover;

public:
    Vehicle();
    Vehicle(string make, string model, int year);
    Vehicle(string make, string model, int year, Mover* mover);
    Vehicle(Mover* mover);
    Vehicle(const Vehicle& right);
    virtual ~Vehicle();

    string getMake() const;
    string getModel() const;
    int getYear() const;

    void setMake(string make);
    void setModel(string model);
    void setYear(int year);

    Mover* getMover() const;
    void setMover(Mover* mover);

    Vehicle& operator=(const Vehicle& right);

    virtual string move() = 0;
};

#endif
