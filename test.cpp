class Car {
// The 'speed' variable is private and hidden
private:
    int speed; 

public:
    // Public 'setter' method to set the speed
    void setSpeed(int s) {
        speed=s;
    }
    // Public 'getter' method to read the speed
    int getSpeed() {
        return speed;
    }
};