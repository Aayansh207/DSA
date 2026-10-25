#include <iostream>
using namespace std;

/* -------------------- user-defined types -------------------- */
enum veh_type { car = 1, truck, motorcycle };   // 1-based to match the menu

union vehicle_detail {
    int airbags;       // for cars
    int cargoCapacity; // kg, for trucks
    int engine;        // cc, for motorcycles
};

struct vehicle {
    int         vehicle_no;
    veh_type    type;
    vehicle_detail detail;
};
/* ------------------------------------------------------------ */

int main() {
    vehicle v{};                                  // zero-initialise

    cout << "Welcome to vehicle data display\n";

    cout << "Enter Vehicle No : ";
    cin  >> v.vehicle_no;

    int choice;
    cout << "Enter Vehicle Type\n"
            "1: Car\n2: Truck\n3: Motorcycle\n";
    cin  >> choice;
    v.type = static_cast<veh_type>(choice);

    switch (v.type) {
        case car:
            cout << "Enter number of airbags : ";
            cin  >> v.detail.airbags;
            break;

        case truck:
            cout << "Enter cargo capacity (kg) : ";
            cin  >> v.detail.cargoCapacity;
            break;

        case motorcycle:
            cout << "Enter engine capacity (cc) : ";
            cin  >> v.detail.engine;
            break;

        default:
            cerr << "Invalid vehicle type!\n";
            return 1;
    }

    /* ---------- nicely formatted output ---------- */
    cout << "\n----------- Vehicle Summary -----------\n";
    cout << "Vehicle No : " << v.vehicle_no << '\n';
    cout << "Type       : ";
    switch (v.type) {
        case car:        cout << "Car\n";          break;
        case truck:      cout << "Truck\n";        break;
        case motorcycle: cout << "Motorcycle\n";   break;
    }

    cout << "Detail     : ";
    switch (v.type) {
        case car:        cout << v.detail.airbags      << " airbags\n";            break;
        case truck:      cout << v.detail.cargoCapacity<< " kg cargo capacity\n";  break;
        case motorcycle: cout << v.detail.engine       << " cc engine\n";          break;
    }
    cout << "---------------------------------------\n";
    return 0;
}
