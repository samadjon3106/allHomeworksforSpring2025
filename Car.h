#ifndef CAR_H
#define CAR_H

#include "LandVehicle.h"

class Car : public LandVehicle {
private:
    int numDoors;

public:
    Car(string b, int y, int w, int d) : LandVehicle(b, y, w), numDoors(d) {}

    string getInfo() const override {
        // Only print the info related to the car, not the LandVehicle
        return "Car class:: Number of doors: " + to_string(numDoors) + "\n" +
               "Vehicle class:: Brand: " + brand + "\n" +
               "Vehicle class:: Year: " + to_string(year) + "\n";
    }
};

#endif // CAR_H
