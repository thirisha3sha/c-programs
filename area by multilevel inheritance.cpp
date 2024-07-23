/*1.	Develop a C++ code to find area circle,rectangle and volume of cylinder using the concept of multilevel inheritance.
Sample Input / output	Getting the radius of the circle
         Enter the radius: 4
         The area = 48

 Getting the length and breadth of the rectangle
         Enter the length : 6
         Enter the breadth : 7
         The area = 42

 Getting the height and radius of the cylinder
         Enter the radius: 3
         Enter the length : 4
         Enter the breadth : 5
         The volume of the cylinder is: 108
*/
#include <iostream>
#include <cmath> 
using namespace std;
class Circle {
protected:
    double radius;

public:
    void getRadius() 
	{
        cout << "Getting the radius of the circle" << endl;
        cout << "Enter the radius: ";
        cin >> radius;
    }

    double area() {
        return M_PI * radius * radius; // Area = p * r^2
    }
};
class Rectangle : public Circle 
{
protected:
    double length;
    double breadth;

public:
    void getDimensions() {
        cout << "\nGetting the length and breadth of the rectangle" << endl;
        cout << "Enter the length: ";
        cin >> length;
        cout << "Enter the breadth: ";
        cin >> breadth;
    }

    double area() {
        return length * breadth; // Area = length * breadth
    }
};
class Cylinder : public Rectangle {
private:
    double height;

public:
    void getDimensions() {
        Rectangle::getDimensions();
        cout << "\nGetting the height of the cylinder" << endl;
        cout << "Enter the height: ";
        cin >> height;
    }

    double volume() {
        return area() * height; // Volume = base area * height
    }
};

int main() {
    Circle circle;
    circle.getRadius();
    cout << "The area of the circle = " << circle.area() << endl;
    Rectangle rectangle;
    rectangle.getDimensions();
    cout << "The area of the rectangle = " << rectangle.area() << endl;
    Cylinder cylinder;
    cylinder.getDimensions();
    cout << "The volume of the cylinder is: " << cylinder.volume() << endl;
    return 0;
}

