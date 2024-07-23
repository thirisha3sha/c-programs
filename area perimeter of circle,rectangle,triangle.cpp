//Write a C++ program with function prototypes for calculating the area and perimeter of a rectangle, circle, and triangle. Implement overloaded functions to handle each shape's calculations.
#include <iostream>
#include <cmath> // For M_PI
using namespace std;

// Function prototypes
double area(double length, double width); // Rectangle
double area(double radius); // Circle
double area(double base, double height); // Triangle

double perimeter(double length, double width); // Rectangle
double perimeter(double radius); // Circle
double perimeter(double side1, double side2, double side3); // Triangle

int main() {
    double length, width, radius, base, height;
    double side1, side2, side3;

    // Rectangle
    cout << "Enter length and width of the rectangle: ";
    cin >> length >> width;
    cout << "Area of Rectangle = " << area(length, width) << endl;
    cout << "Perimeter of Rectangle = " << perimeter(length, width) << endl;

    // Circle
    cout << "Enter radius of the circle: ";
    cin >> radius;
    cout << "Area of Circle = " << area(radius) << endl;
    cout << "Perimeter (Circumference) of Circle = " << perimeter(radius) << endl;

    // Triangle
    cout << "Enter base and height of the triangle: ";
    cin >> base >> height;
    cout << "Area of Triangle = " << area(base, height) << endl;

    cout << "Enter the lengths of the three sides of the triangle: ";
    cin >> side1 >> side2 >> side3;
    cout << "Perimeter of Triangle = " << perimeter(side1, side2, side3) << endl;

    return 0;
}

// Function definitions

// Area functions
double area(double length, double width) {
    return length * width; // Rectangle
}

double area(double radius) {
    return M_PI * radius * radius; // Circle
}

double area(double base, double height) {
    return 0.5 * base * height; // Triangle
}

// Perimeter functions
double perimeter(double length, double width) {
    return 2 * (length + width); // Rectangle
}

double perimeter(double radius) {
    return 2 * M_PI * radius; // Circle
}

double perimeter(double side1, double side2, double side3) {
    return side1 + side2 + side3; // Triangle
}

