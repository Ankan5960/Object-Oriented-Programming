#include <iostream>
#include <string>
using namespace std;

// Base class (Parent)
class Vehicle {
public:
    string brand;
};

// Derived class (Child)
class Car : public Vehicle {
public:
    int speed;
    void drive() {
        // 'brand' is inherited from Vehicle
        cout << brand << " is driving at " << speed << " km/h" << endl;
    }
};

int main() {
    Car c1; //<-- Object of derived class
    
    // We can set 'brand' because Car inherited it from Vehicle
    c1.brand = "Tesla"; 
    
    c1.speed = 120;
    c1.drive();
    return 0;
}