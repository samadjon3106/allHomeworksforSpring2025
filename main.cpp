#include <iostream>
#include <vector>
#include "LandVehicle.h"
#include "Car.h"
#include "SportsCar.h"
#include "Truck.h"
#include "AirVehicle.h"
#include "Helicopter.h"
#include "WaterVehicle.h"
#include "Boat.h"
#include "Submarine.h"
#include <sstream>
using namespace std;

int main() {
    vector<Vehicle*> vehicles;
    vehicles.push_back(new LandVehicle("LandBrand", 2020, 4));
    vehicles.push_back(new Car("Toyota", 2021, 4, 4));
    vehicles.push_back(new SportsCar("Ferrari", 2023, 4, 2, 350));
    vehicles.push_back(new Truck("Volvo", 2019, 6, 18.5));
    vehicles.push_back(new AirVehicle("Boeing", 2018, 12000));
    vehicles.push_back(new Helicopter("Apache", 2022, 5000, 4));
    vehicles.push_back(new WaterVehicle("Yamaha", 2020, "Recreational"));
    vehicles.push_back(new Boat("Sunseeker", 2021, "Luxury", 10.5));
    vehicles.push_back(new Submarine("Seawolf", 2015, "Military", 800));

    for (int i = 0; i < vehicles.size(); i++) {
        cout << vehicles[i]->getInfo() << endl;
        cout << "---------------------------" << endl;
    }

    // Clean up allocated memory
    for (int i = 0; i < vehicles.size(); i++) {
        delete vehicles[i];
    }

    return 0;
}



// TIP See CLion help at <a
// href="https://www.jetbrains.com/help/clion/">jetbrains.com/help/clion/</a>.
//  Also, you can try interactive lessons for CLion by selecting
//  'Help | Learn IDE Features' from the main menu.