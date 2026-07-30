#include "Car.h"
#include <iostream>

using namespace std;

Car::Car() : Vehicle()
{
    doors = 4;
}

Car::Car(string make, string model, int year, int doors, Mover* mover)
    : Vehicle(make, model, year, mover)
{
    this->doors = doors;
}

Car::Car(const Car& right)
    : Vehicle(right)
{
    doors = right.doors;
}

Car::~Car()
{
}

int Car::getDoors() const
{
    return doors;
}

void Car::setDoors(int doors)
{
    this->doors = doors;
}

Car& Car::operator=(const Car& right)
{
    if (this != &right)
    {
        Vehicle::operator=(right);
        doors = right.doors;
    }

    return *this;
}

string Car::move()
{
    return "Car " + getMover()->move();
}

ostream& operator<<(ostream& out, const Car& c)
{
    out << c.getYear() << " "
        << c.getMake() << " "
        << c.getModel()
        << " Doors: " << c.getDoors()
        << " " << c.getMover()->move();

    return out;
}
