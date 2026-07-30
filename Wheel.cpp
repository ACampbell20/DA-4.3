#include "Wheel.h"

Wheel::Wheel() : Mover()
{
}

Wheel::Wheel(double mph) : Mover(mph)
{
}

string Wheel::move()
{
    return "Rolls over the ground at " + to_string(getMPH()) + " mph";
}
