#ifndef WATERVEHICLE_H
#define WATERVEHICLE_H

#include "Vehicle.h"

class WaterVehicle : public Vehicle {
private:
    string vesselType;

public:
    WaterVehicle(string b, int y, string v) : Vehicle(b, y), vesselType(v) {}

    string getInfo() const override {
        return "WaterVehicle class:: Vessel type: " + vesselType + "\n" + "Vehicle class:: Brand: " + brand + "\n" + "Vehicle class:: Year: " + to_string(year);
    }
};

#endif // WATERVEHICLE_H
