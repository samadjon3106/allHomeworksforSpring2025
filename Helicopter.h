#ifndef HELICOPTER_H
#define HELICOPTER_H

#include "AirVehicle.h"

class Helicopter : public AirVehicle {
private:
    int RotorCount;

public:
    Helicopter(string b, int y, int a, int r) : AirVehicle(b, y, a), RotorCount(r) {}

    string getInfo() const override {
        return "Helicopter class:: Rotor count: " + to_string(RotorCount) + "\n" +
        "Helicopter class:: Brand: " + brand + "\n" +
            "Helicopter class:: Year: " + to_string(year) + "\n";
    }
};

#endif // HELICOPTER_H
