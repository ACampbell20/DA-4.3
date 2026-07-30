#include "Mover.h"

Mover::Mover()
{
    mph = 0;
}

Mover::Mover(double mph)
{
    this->mph = mph;
}

Mover::~Mover()
{
}

double Mover::getMPH() const
{
    return mph;
}

void Mover::setMPH(double mph)
{
    this->mph = mph;
}
