public class test {
// File: Car.java
class Car {
    private int speed;

    // Public 'setter' method to set the speed
    public void setSpeed(int s) {
        if (s >= 0) { // Our rule: speed must be positive
            speed = s;
        } else {
            System.out.println("Error: Speed cannot be negative.");
        }
    }

    // Public 'getter' method to read the speed
    public int getSpeed() {
        return speed;
    }
}

// File: Program.java
}


