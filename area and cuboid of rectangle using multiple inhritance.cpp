/*2.	Write a C++ program to demonstrate multiple inheritance by creating a class cuboid which extends class rectangle, class shape. It calculates area and volume. Use appropriate member functions  and member variables. 

Sample Input	LENGTH = 10
BREATH = 10
HEIGHT = 10
Sample Output	AREA OF RECTANGLE = 100
VOLUME OF RECTANGLE = 1000
*/
#include <iostream>
using namespace std;

class Shape {
public:
    virtual void area() = 0; 
};

class Rectangle : public Shape {
public:
    int length;
    int breadth;
    Rectangle(int l, int b) : length(l), breadth(b) {}
    
    void area() override {
        cout << "AREA OF RECTANGLE = " << length * breadth << endl;
    }
};

class Cuboid : public Rectangle {
public:
    int height;
    Cuboid(int l, int b, int h) : Rectangle(l, b), height(h) {} 
    
    void volume() {
        cout << "VOLUME OF CUBOID = " << length * breadth * height << endl;
    }
};

int main() {
    int length, breadth, height;

    cout << "Enter the length of the rectangle: ";
    cin >> length;
    cout << "Enter the breadth of the rectangle: ";
    cin >> breadth;
    cout << "Enter the height of the cuboid: ";
    cin >> height;

    Cuboid obj(length, breadth, height);
    obj.area();  
    obj.volume(); 

    return 0;
}



