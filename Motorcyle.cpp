#include "Motorcycle.h"

Motorcycle::Motorcycle() : Vehicle()
{
    hasSidecar = false;
}

Motorcycle::Motorcycle(string make, string model, int year, bool hasSidecar, Mover* mover)
    : Vehicle(make, model, year, mover)
{
    this->hasSidecar = hasSidecar;
}

Motorcycle::Motorcycle(const Motorcycle& right)
    : Vehicle(right)
{
    hasSidecar = right.hasSidecar;
}

Motorcycle::~Motorcycle()
{
}

bool Motorcycle::getHasSidecar() const
{
    return hasSidecar;
}

void Motorcycle::setHasSidecar(bool hasSidecar)
{
    this->hasSidecar = hasSidecar;
}

Motorcycle& Motorcycle::operator=(const Motorcycle& right)
{
    if (this != &right)
    {
        Vehicle::operator=(right);
        hasSidecar = right.hasSidecar;
    }

    return *this;
}

string Motorcycle::move()
{
    if (getMover() != nullptr)
        return getMover()->move();

    return "Motorcycle cannot move.";
}

ostream& operator<<(ostream& out, const Motorcycle& m)
{
    out << m.getYear() << " "
        << m.getMake() << " "
        << m.getModel()
        << " Sidecar: "
        << (m.getHasSidecar() ? "Yes" : "No");

    if (m.getMover() != nullptr)
        out << " " << m.getMover()->move();

    return out;
}
