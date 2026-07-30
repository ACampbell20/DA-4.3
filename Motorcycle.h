#ifndef MOTORCYCLE_H
#define MOTORCYCLE_H

#include <iostream>
#include <string>
#include "Vehicle.h"

using namespace std;

class Motorcycle : public Vehicle
{
private:
    bool hasSidecar;

public:
    Motorcycle();
    Motorcycle(string make, string model, int year, bool hasSidecar, Mover* mover);
    Motorcycle(const Motorcycle& right);
    ~Motorcycle();

    bool getHasSidecar() const;
    void setHasSidecar(bool hasSidecar);

    Motorcycle& operator=(const Motorcycle& right);

    string move() override;

    friend ostream& operator<<(ostream& out, const Motorcycle& m);
};

#endif
