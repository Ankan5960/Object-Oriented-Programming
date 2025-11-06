public class test {
class Car {
    public void drive() {
        System.out.println("Car is driving normally at 60 km/h");
    }
}

class SportsCar extends Car {
    // @Override ensures we are correctly replacing the parent method
    @Override
    public void drive() {
        System.out.println("SportsCar is driving FAST at 200 km/h!");
    }
}

// File: Program.java
class Program {
    public static void main(String[] args) {
        // Base class variable holding a derived object
        Car myVehicle = new SportsCar();
        
        // Calls the overridden SportsCar version
        myVehicle.drive();
    }
}
}
