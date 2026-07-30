#include <iostream>
#include "Car.h"
#include "Truck.h"
#include "Motorcycle.h"
#include "Wheel.h"
#include "Rocket.h"
#include "HoverDevice.h"

using namespace std;

int main()
{
    Wheel wheel(65);
    Rocket rocket(500);
    HoverDevice hover(40);

    Car car("Toyota", "Camry", 2024, 4, &wheel);
    Truck truck("Ford", "F-150", 2023, 12000, &wheel);
    Motorcycle bike("Harley", "Sportster", 2022, false, &rocket);

    cout << car << endl;
    cout << car.move() << endl;

    cout << truck << endl;
    cout << truck.move() << endl;

    cout << bike << endl;
    cout << bike.move() << endl;

}
