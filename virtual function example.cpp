/*5.	Write a C++ code to find area of square and circle using abstract class and pure virtual function
Sample Input	Enter radius of the circle: 5
Enter the length of the square: 4
Sample Output	Area of square: 16
Area of circle: 78.5
*/
#include <iostream>
#include <cmath> // For M_PI
using namespace std;

// Abstract base class
class Shape {
public:
    virtual double area() const = 0;
};
class Square : public Shape {
private:
    double length;
public:
    Square(double l)
	{
    	length=l; 	
	}
    double area() const override 
	{
        return length * length;
    }
};
class Circle : public Shape 
{
private:
    double radius;
public:
    Circle(double r){
    	radius=r;
	} 
    double area() const override
	{
        return M_PI * radius * radius;
    }
};

int main() 
{
    double radius, length;
    cout << "Enter radius of the circle: ";
    cin >> radius;
    cout << "Enter the length of the square: ";
    cin >> length;

    Circle circle(radius);
    Square square(length);

    cout << "Area of square: " << square.area() << endl;
    cout << "Area of circle: " << circle.area() << endl;

    return 0;
}

