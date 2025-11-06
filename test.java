public class test {
// Abstract class
abstract class Car {
    abstract void start();
    abstract void stop();

    void fuelStatus() {
        System.out.println("Fuel level is good");
    }
}

// Interface
interface CarFeatures {
    void playMusic();
}

// Derived class implementing both
class Tesla extends Car implements CarFeatures {
    void start() {
        System.out.println("Tesla started silently.");
    }
    void stop() {
        System.out.println("Tesla stopped.");
    }
    public void playMusic() {
        System.out.println("Playing music...");
    }
}

class Main {
    public static void main(String[] args) {
        Car myCar = new Tesla();
        myCar.start();
        myCar.fuelStatus();
        ((Tesla)myCar).playMusic();
        myCar.stop();
    }
}
}
