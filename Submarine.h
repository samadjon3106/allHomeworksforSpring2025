#ifndef SUBMARINE_H
#define SUBMARINE_H

#include "WaterVehicle.h"

class Submarine : public WaterVehicle {
private:
    int maxDepth;

public:
    Submarine(string b, int y, string v, int depth) : WaterVehicle(b, y, v), maxDepth(depth) {}

    string getInfo() const override {
        return "Submarine class:: Max depth: " + to_string(maxDepth) + " meters\n" + + "Helicopter class:: Brand: " + brand + "\n" +
            "Boat class:: Year: " + to_string(year) + "\n";
    }
};

#endif // SUBMARINE_H
