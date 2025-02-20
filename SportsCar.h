#ifndef SPORTSCAR_H
#define SPORTSCAR_H

#include "Car.h"

class SportsCar : public Car {
private:
    int maxSpeed;

public:
    SportsCar(string b, int y, int w, int d, int s) : Car(b, y, w, d), maxSpeed(s) {}

    string getInfo() const override {
        // Only print the info related to the sports car, not the Car or LandVehicle
        return "SportsCar class:: Max speed: " + to_string(maxSpeed) + " km/h\n" +
               "Vehicle class:: Brand: " + brand + "\n" +
               "Vehicle class:: Year: " + to_string(year) + "\n";
    }
};

#endif // SPORTSCAR_H
