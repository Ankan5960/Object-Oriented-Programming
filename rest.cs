using System;

class Car {
    // 'virtual' allows this method to be overridden
    public virtual void Drive() {
        Console.WriteLine("Car is driving normally at 60 km/h");
    }
}

class SportsCar : Car {
    // 'override' is REQUIRED to change the behavior
    public override void Drive() {
        Console.WriteLine("SportsCar is driving FAST at 200 km/h!");
    }
}

class Program {
    static void Main() {
        // Base class variable holding a derived object
        Car myVehicle = new SportsCar();
        
        // Calls the overridden SportsCar version
        myVehicle.Drive(); 
    }
}