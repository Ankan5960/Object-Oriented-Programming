# Object-Oriented Programming (OOP) Concepts

This document explains the **core principles of Object-Oriented Programming (OOP)** — including **Class, Object, Inheritance, Encapsulation, Polymorphism,** and **Abstraction** — with examples in **C++**, **C#**, and **Java**.

### Why OOP?

OOPS is a programming paradigm used to **_organize_** code into **_reusable_**, **_modular_** components called "objects" to make software development and maintenance more **_efficient_**, **_scalable_**, and **_secure_**.

---

## 🧩 2. Class and Object

**Class**: A class serves as a blueprint or a template for creating objects. It defines the structure and behavior that objects of that class will possess.

**Object**: An object is an instance of a class. It is a concrete entity created based on the blueprint provided by a class.

### Examples
#### C++

```cpp
class Car {
public:
    string brand;//its a attribute or properties.
    int speed;//its a attribute or properties.

    void drive() {
        cout << brand << " is driving at " << speed << " km/h" << endl;
    }
}; //<--- It a class

int main() {
    Car c1; //<-- Its a Object
    c1.brand = "Tesla";
    c1.speed = 120;
    c1.drive();
    return 0;
}
```

#### C#

```C#
using System;

class Car {
    public string Brand;//its a attribute or properties.
    public int Speed;//its a attribute or properties.

    public void Drive() {
        Console.WriteLine($"{Brand} is driving at {Speed} km/h");
    }
}//<--- It a class

class Program {
    static void Main() {
        Car c1 = new Car();//<-- Its a Object
        c1.Brand = "BMW";
        c1.Speed = 150;
        c1.Drive();
    }
}
```

#### Java

```java
// File: Car.java
class Car {
    public String brand;//its a attribute or properties.
    public int speed;//its a attribute or properties.

    public void drive() {
        System.out.println(brand + " is driving at " + speed + " km/h");
    }//Its a method.
}//<--- It a class

// File: Program.java
class Program {
    public static void main(String[] args) {
        Car c1 = new Car(); //<-- Its a Object
        c1.brand = "BMW";
        c1.speed = 150;
        c1.drive();
    }
}
```

---

## 🧬 Inheritance:

It's a concept where a class inhert the properties or Methods of a parent class and Reuse it.

![alt text](img\inheritance1.png)

| Language | Single Inheritance | Multilevel Inheritance | Multiple Inheritance                                                                        |
| -------- | ------------------ | ---------------------- | ------------------------------------------------------------------------------------------- |
| C++      | ✅ Yes             | ✅ Yes                 | ✅ Yes (e.g., class C : public A, public B)                                                 |
| C#       | ✅ Yes             | ✅ Yes                 | ❌ No (A class can only inherit from one base class. It can implement multiple interfaces.) |
| Java     | ✅ Yes             | ✅ Yes                 | ❌ No (A class can only extend one base class. It can implements multiple interfaces.) |



<table style="width:100%; border: 0;">
  <tr style="vertical-align:top;">
    
    <td style="width: 33%; padding: 10px;">
      <h3>C++</h3>
<pre><code class="language-cpp">
#include &lt;iostream&gt;
#include &lt;string&gt;
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
        cout &lt;&lt; brand &lt;&lt; " is driving at " 
             &lt;&lt; speed &lt;&lt; " km/h" &lt;&lt; endl;
    }
};

int main() {
    Car c1;
    c1.brand = "Tesla"; 
    c1.speed = 120;
    c1.drive();
    return 0;
}
</code></pre>
    </td>
    
    <td style="width: 33%; padding: 10px;">
      <h3>C#</h3>
<pre><code class="language-csharp">
using System;

// Base class (Parent)
class Vehicle {
    public string Brand;
}

// Derived class (Child)
class Car : Vehicle {
    public int Speed;
    public void Drive() {
        Console.WriteLine($"{Brand} is driving at {Speed} km/h");
    }
}

class Program {
    static void Main() {
        Car c1 = new Car();
        c1.Brand = "BMW";
        c1.Speed = 150;
        c1.Drive();
    }
}
</code></pre>
    </td>
    
    <td style="width: 33%; padding: 10px;">
      <h3>Java</h3>
<pre><code class="language-java">
// Base class (Parent)
class Vehicle {
    public String brand;
}

// Derived class (Child)
class Car extends Vehicle {
    public int speed;
    public void drive() {
        System.out.println(brand + " is driving at " 
                           + speed + " km/h");
    }
}

// Main program class
class Program {
    public static void main(String[] args) {
        Car c1 = new Car();
        c1.brand = "Audi";
        c1.speed = 130;
        c1.drive();
    }
}
</code></pre>
    </td>
    
  </tr>
</table>