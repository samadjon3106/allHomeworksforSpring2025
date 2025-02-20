#ifndef AIRVEHICLE_H
#define AIRVEHICLE_H

#include "Vehicle.h"

class AirVehicle : public Vehicle {
private:
    int maxAltitude;

public:
    AirVehicle(string b, int y, int a) : Vehicle(b, y), maxAltitude(a) {}

    string getInfo() const override {
        return "AirVehicle class:: Max altitude: " + to_string(maxAltitude) + " meters\n" + "Vehicle class:: Brand: " + brand + "\n" + "Vehicle class:: Year: " + to_string(year);
    }
};

#endif // AIRVEHICLE_H
