#ifndef ROCKET_H
#define ROCKET_H

#include "Mover.h"

class Rocket : public Mover
{
public:
    Rocket();
    Rocket(double mph);

    string move() override;
};

#endif
