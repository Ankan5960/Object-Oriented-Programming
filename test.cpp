#include <iostream>
using namespace std;

// Abstract class
class Car {
public:
    virtual void start() = 0;   // abstract (pure virtual)
    virtual void stop() = 0;
    void fuelStatus() {         // normal method
        cout << "Fuel level is good\n";
    }
};

// Interface (pure virtual class)
class IMusicSystem {
public:
    virtual void playMusic() = 0;
    virtual void stopMusic() = 0;
    virtual ~IMusicSystem() {} // virtual destructor for safety
};

// Derived class
class Tesla : public Car, public IMusicSystem {
public:
    void start() override {
        cout << "Tesla started silently.\n";
    }
    void stop() override {
        cout << "Tesla stopped.\n";
    }

    void playMusic() override {
        cout << "Playing music in Tesla.\n";
    }
    void stopMusic() override {
        cout << "Music stopped.\n";
    }
};

int main() {
    Car* myCar = new Tesla();
    myCar->start();
    myCar->fuelStatus();
    myCar->stop();
    delete myCar;
}
