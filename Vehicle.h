#ifndef VEHICLE_H
#define VEHICLE_H

#include <string>
#include <iostream>

using namespace std;

class Vehicle {
protected:
    string brand;
    int year;

public:
    Vehicle(string b, int y) : brand(b), year(y) {}

    virtual string getInfo() const = 0;  // Pure virtual function

    virtual ~Vehicle() {}
};

#endif // VEHICLE_H
