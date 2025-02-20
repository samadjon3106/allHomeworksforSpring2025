#ifndef TRUCK_H
#define TRUCK_H

#include "LandVehicle.h"
#include <sstream>  // For stringstream to convert the number to string

class Truck : public LandVehicle {
private:
    double loadCapacity;  // Load capacity in tons

public:
    Truck(string b, int y, int w, double lc) : LandVehicle(b, y, w), loadCapacity(lc) {}

    string getInfo() const override {
        // Convert the double to a string with one decimal point manually
        string loadCapacityStr = to_string(loadCapacity);

        // Remove trailing zeros after the decimal point
        if (loadCapacityStr.find('.') != string::npos) {
            loadCapacityStr.erase(loadCapacityStr.find_last_not_of('0') + 1, string::npos);
            if (loadCapacityStr.back() == '.') {
                loadCapacityStr.pop_back();
            }
        }

        // Returning the formatted string including the base class info
        return "Truck class:: Load capacity: " + loadCapacityStr + " tons\n" + "Vehicle class:: Brand: " + brand + "\n" +
               "Vehicle class:: Year: " + to_string(year) + "\n";
    }
};

#endif // TRUCK_H

