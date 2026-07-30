#ifndef MOVER_H
#define MOVER_H

#include <string>

using namespace std;

class Mover
{
private:
    double mph;

public:
    Mover();
    Mover(double mph);
    virtual ~Mover();

    double getMPH() const;
    void setMPH(double mph);

    virtual string move() = 0;
};

#endif
