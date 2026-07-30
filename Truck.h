#ifndef TRUCK_H
#define TRUCK_H

#include <iostream>
#include <string>
#include "Vehicle.h"

using namespace std;

class Truck : public Vehicle
{
private:
    double towingCapacity;

public:
    Truck();
    Truck(string make, string model, int year, double towingCapacity, Mover* mover);
    Truck(const Truck& right);
    ~Truck();

    double getTowingCapacity() const;
    void setTowingCapacity(double towingCapacity);

    Truck& operator=(const Truck& right);

    string move() override;

    friend ostream& operator<<(ostream& out, const Truck& t);
};

#endif
