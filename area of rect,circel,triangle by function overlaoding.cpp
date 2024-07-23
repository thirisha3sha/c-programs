//Write a C++ program that demonstrates function overloading for different data types. Create overloaded functions to calculate the area of a rectangle, circle, and triangle
#include <iostream>
#include <cmath>
using namespace std;

// Function to calculate the area of a rectangle
double area(double length, double width) {
    return length * width;
}

// Function to calculate the area of a circle
double area(float radius) {
    return M_PI * radius * radius; // Using M_PI from <cmath>
}

// Function to calculate the area of a triangle
double area(double base, double height, bool isTriangle) {
    return 0.5 * base * height;
}

int main() {
    double length, width,  base, height;
    float radius;
    
    // Calculate area of a rectangle
    cout << "Enter length and width of the rectangle: ";
    cin >> length >> width;
    cout << "Area of Rectangle = " << area(length, width) << endl;

    // Calculate area of a circle
    cout << "Enter radius of the circle: ";
    cin >> radius;
    cout << "Area of Circle = " << area(radius) << endl;

    // Calculate area of a triangle
    cout << "Enter base and height of the triangle: ";
    cin >> base >> height;
    cout << "Area of Triangle = " << area(base, height, true) << endl;

    return 0;
}

