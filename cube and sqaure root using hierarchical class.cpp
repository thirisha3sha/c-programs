/*3.	Develop a C++ code to find to get square and cube of a number using Hierarchical inheritance

Sample Input /ouput	Enter an integer number: 10
Square of 10 is: 100
Enter an integer number: 20
Cube   of 10 is: 8000
*/
#include <iostream>
using namespace std;

// Base class for number input
class Number {
protected:
    int number;

public:
    void inputNumber() {
        cout << "Enter an integer number: ";
        cin >> number;
    }
};

// Derived class for calculating the square
class Square : public Number {
public:
    void calculateSquare() {
        cout << "Square of " << number << " is: " << number * number << endl;
    }
};

// Derived class for calculating the cube
class Cube : public Number {
public:
    void calculateCube() {
        cout << "Cube of " << number << " is: " << number * number * number << endl;
    }
};

int main() {
    Square square;
    square.inputNumber();
    square.calculateSquare();

    Cube cube;
    cube.inputNumber();
    cube.calculateCube();

    return 0;
}

