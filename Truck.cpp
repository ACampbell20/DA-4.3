#include "Truck.h"

Truck::Truck() : Vehicle()
{
    towingCapacity = 0;
}

Truck::Truck(string make, string model, int year, double towingCapacity, Mover* mover)
    : Vehicle(make, model, year, mover)
{
    this->towingCapacity = towingCapacity;
}

Truck::Truck(const Truck& right)
    : Vehicle(right)
{
    towingCapacity = right.towingCapacity;
}

Truck::~Truck()
{
}

double Truck::getTowingCapacity() const
{
    return towingCapacity;
}

void Truck::setTowingCapacity(double towingCapacity)
{
    this->towingCapacity = towingCapacity;
}

Truck& Truck::operator=(const Truck& right)
{
    if (this != &right)
    {
        Vehicle::operator=(right);
        towingCapacity = right.towingCapacity;
    }

    return *this;
}

string Truck::move()
{
    if (getMover() != nullptr)
        return getMover()->move();

    return "Truck cannot move.";
}

ostream& operator<<(ostream& out, const Truck& t)
{
    out << t.getYear() << " "
        << t.getMake() << " "
        << t.getModel()
        << " Towing: " << t.getTowingCapacity();

    if (t.getMover() != nullptr)
        out << " " << t.getMover()->move();

    return out;
}
