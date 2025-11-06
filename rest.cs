// Abstract class
abstract class Car {
    public abstract void Start();  // abstract method
    public abstract void Stop();

    public void FuelStatus() {     // normal method
        Console.WriteLine("Fuel level is good");
    }
}

// Interface
interface ICarFeatures {
    void PlayMusic();
}

// Derived class implementing both
class Tesla : Car, ICarFeatures {
    public override void Start() {
        Console.WriteLine("Tesla started silently.");
    }
    public override void Stop() {
        Console.WriteLine("Tesla stopped.");
    }
    public void PlayMusic() {
        Console.WriteLine("Playing music...");
    }
}

class Program {
    static void Main() {
        Tesla t = new Tesla();
        t.Start();
        t.FuelStatus();
        t.PlayMusic();
        t.Stop();
    }
}
