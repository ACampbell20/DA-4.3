#include "Rocket.h"

Rocket::Rocket() : Mover()
{
}

Rocket::Rocket(double mph) : Mover(mph)
{
}

string Rocket::move()
{
    return "Shoots through the air at " + to_string(getMPH()) + " mph";
}
