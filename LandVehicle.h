#ifndef LANDVEHICLE_H
#define LANDVEHICLE_H

#include "Vehicle.h"

class LandVehicle : public Vehicle {
private:
    int numWheels;

public:
    LandVehicle(string b, int y, int w) : Vehicle(b, y), numWheels(w) {}

    string getInfo() const override {
        return "LandVehicle class:: Number of wheels: " + to_string(numWheels) + "\n" + "Vehicle class:: Brand: " + brand + "\n" + "Vehicle class:: Year: " + to_string(year);
    }
};

#endif // LANDVEHICLE_H
