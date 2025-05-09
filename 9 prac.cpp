// #include <iostream>
// using namespace std;

// // Base class Vehicle
// class Vehicle {
// public:
//     int maxSpeed;

//     Vehicle(int mSpeed) {
//         maxSpeed = mSpeed;
//     }
// };

// // Derived class Car
// class Car : public Vehicle {
// public:
//     int speed;

//     Car(int mSpeed, int s) : Vehicle(mSpeed) {
//         speed = s;
//     }
// };

// // Derived class Bicycle
// class Bicycle : public Vehicle {
// public:
//     int speed;

//     Bicycle(int mSpeed, int s) : Vehicle(mSpeed) {
//         speed = s;
//     }
// };

// int main() {
//     // Create instances of Car and Bicycle
//     Car car(180, 120);
//     Bicycle bicycle(30, 20);

//     // Print the details
//     cout << "Car - Max Speed: " << car.maxSpeed << " km/h, Speed: " << car.speed << " km/h" << endl;
//     cout << "Bicycle - Max Speed: " << bicycle.maxSpeed << " km/h, Speed: " << bicycle.speed << " km/h" << endl;

//     return 0;
// }
#include <iostream>
using namespace std;

// Base class Animal
class Animal {
public:
    string type;  // Animal type (e.g., mammal, reptile)
    
    Animal(string t) {
        type = t;
    }
};

// Derived class Dog
class Dog : public Animal {
public:
    string sound;  // Sound made by the dog (e.g., bark)

    Dog(string t, string s) : Animal(t) {
        sound = s;
    }
};

// Derived class Turtle
class Turtle : public Animal {
public:
    string sound;  // Sound made by the turtle (e.g., grunt)

    Turtle(string t, string s) : Animal(t) {
        sound = s;
    }
};

int main() {
    // Create instances of Dog and Turtle
    Dog dog("Mammal", "Bark");
    Turtle turtle("Reptile", "Grunt");

    // Print the details for Dog
    cout << "Dog - Type: " << dog.type << ", Sound: " << dog.sound << endl;

    // Print the details for Turtle
    cout << "Turtle - Type: " << turtle.type << ", Sound: " << turtle.sound << endl;

    return 0;
}
