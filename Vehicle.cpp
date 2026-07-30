#include "Vehicle.h"

Vehicle::Vehicle()
{
    make = "";
    model = "";
    year = 0;
    mover = nullptr;
}

Vehicle::Vehicle(string make, string model, int year)
{
    this->make = make;
    this->model = model;
    this->year = year;
    mover = nullptr;
}

Vehicle::Vehicle(string make, string model, int year, Mover* mover)
{
    this->make = make;
    this->model = model;
    this->year = year;
    this->mover = mover;
}

Vehicle::Vehicle(Mover* mover)
{
    make = "";
    model = "";
    year = 0;
    this->mover = mover;
}

Vehicle::Vehicle(const Vehicle& right)
{
    make = right.make;
    model = right.model;
    year = right.year;
    mover = right.mover;
}

Vehicle::~Vehicle()
{
}

string Vehicle::getMake() const
{
    return make;
}

string Vehicle::getModel() const
{
    return model;
}

int Vehicle::getYear() const
{
    return year;
}

void Vehicle::setMake(string make)
{
    this->make = make;
}

void Vehicle::setModel(string model)
{
    this->model = model;
}

void Vehicle::setYear(int year)
{
    this->year = year;
}

Mover* Vehicle::getMover() const
{
    return mover;
}

void Vehicle::setMover(Mover* mover)
{
    this->mover = mover;
}

Vehicle& Vehicle::operator=(const Vehicle& right)
{
    if (this != &right)
    {
        make = right.make;
        model = right.model;
        year = right.year;
        mover = right.mover;
    }

    return *this;
}
