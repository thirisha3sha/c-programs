//Write a C++ code to find area of square and circle using abstract class and pure virtual function
#include <iostream>
#include <cmath>
using namespace std;

// Abstract base class
class Shape {
public:
    // Pure virtual function
    virtual double area() const = 0; 
};

// Derived class for Square
class Square : public Shape {
private:
    double side;

public:
    Square(double s) : side(s) {}

    // Override area function
    double area() const override {
        return side * side;
    }
};

// Derived class for Circle
class Circle : public Shape {
private:
    double radius;

public:
    Circle(double r) : radius(r) {}

    // Override area function
    double area() const override {
        return M_PI * radius * radius; // Using M_PI from <cmath>
    }
};

int main() {
    double side, radius;

    // Get input for Square
    cout << "Enter the side length of the square: ";
    cin >> side;
    Square square(side);
    cout << "Area of Square = " << square.area() << endl;

    // Get input for Circle
    cout << "Enter the radius of the circle: ";
    cin >> radius;
    Circle circle(radius);
    cout << "Area of Circle = " << circle.area() << endl;

    return 0;
}

