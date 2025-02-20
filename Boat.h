#ifndef BOAT_H
#define BOAT_H

#include "WaterVehicle.h"
#include <sstream>  // For stringstream to convert the number to string

class Boat : public WaterVehicle {
private:
    double length;

public:
    // Constructor
    Boat(string b, int y, string v, double l) : WaterVehicle(b, y, v), length(l) {}

    // Overriding the getInfo() function
    string getInfo() const override {
        // Convert the double to a string with one decimal point manually
        string lengthStr = to_string(length);

        // Remove trailing zeros after the decimal point
        if (lengthStr.find('.') != string::npos) {
            lengthStr.erase(lengthStr.find_last_not_of('0') + 1, string::npos);
            if (lengthStr.back() == '.') {
                lengthStr.pop_back();
            }
        }

        // Returning the formatted string including the base class info
        return "Boat class:: Length: " + lengthStr + " meters\n"   + "Helicopter class:: Brand: " + brand + "\n" +
            "Boat class:: Year: " + to_string(year) + "\n";;
    }
};

#endif // BOAT_H
