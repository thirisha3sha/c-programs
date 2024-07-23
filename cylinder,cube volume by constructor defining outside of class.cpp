//Write a program to declare the constructor inside the class, and then define it outside of the class by specifying the name of the class.
#include <iostream>
#include <cmath>
using namespace std;
class Volume {
public:
    double vol;
    Volume(double side);         
    Volume(double radius, double height); 

    void displayVolume();
};

Volume::Volume(double side) 
{
    vol = pow(side, 3);
}
Volume::Volume(double radius, double height) 
{
    vol = M_PI * pow(radius, 2) * height;
}
void Volume::displayVolume() 
{
    cout << vol << endl;
}

int main() {
    double side, radius, height;
    cout << "Enter side length of the cube: ";
    cin >> side;
    Volume cube(side);
    cout << "Volume of Cube: ";
    cube.displayVolume();

    cout << "Enter radius and height of the cylinder: ";
    cin >> radius >> height;
    Volume cylinder(radius, height);
    cout << "Volume of Cylinder: ";
    cylinder.displayVolume();
    return 0;
}


