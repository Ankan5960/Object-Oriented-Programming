class Car {
public:
    // 'virtual' allows this method to be overridden
    virtual void drive() {
        cout << "Car is driving normally at 60 km/h" << endl;
    }
};

class SportsCar : public Car {
public:
    // 'override' provides a new implementation for SportsCar
    void drive() override {
        cout << "SportsCar is driving FAST at 200 km/h!" << endl;
    }
};

int main() {
    // Pointer to base class holding a derived object
    Car* myVehicle = new SportsCar();
    
    // Calls the overridden SportsCar version, not the generic Car version
    myVehicle->drive(); 
    
    delete myVehicle;
    return 0;
}