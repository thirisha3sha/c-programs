//Write a C++ program that calculates the area of a circle. Use a constant variable for the value of pi and prompt the user to enter the radius. Display the calculated area.
#include <iostream>
using namespace std;

int main() {
    const double PI = 3.141592653589793; 
    double radius;
    cout << "Enter the radius of the circle: ";
    cin >> radius;
    double area = PI * radius * radius;
    cout << "The area of the circle is: " << area << endl;

    return 0;
}

