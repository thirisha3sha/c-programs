//10.	Write a program in C++ to print a pattern of right angle triangle with a number that will repeat a number in the row by using the constructor overloading.10.	Write a program in C++ to print a pattern of right angle triangle with a number that will repeat a number in the row by using the constructor overloading.10.	Write a program in C++ to print a pattern of right angle triangle with a number that will repeat a number in the row by using the constructor overloading.10.	Write a program in C++ to print a pattern of right angle triangle with a number that will repeat a number in the row by using the constructor overloading.
#include <iostream>
using namespace std;
class RightAngleTriangle 
{
private:
    int rows;

public:
    // Default constructor
    RightAngleTriangle() : rows(5) { // Default to 5 rows if no value is provided
        cout << "Right angle triangle with default rows (5) created." << endl;
    }

    // Parameterized constructor
    RightAngleTriangle(int r) : rows(r) {
        cout << "Right angle triangle with " << rows << " rows created." << endl;
    }
    void printPattern() const {
        for (int i = 1; i <= rows; ++i) {
            for (int j = 1; j <= i; ++j) {
                cout << i << " ";
            }
            cout << endl;
        }
    }
    ~RightAngleTriangle() {
        cout << "Right angle triangle object destroyed." << endl;
    }
};

int main() {
    int rows;
    cout << "Enter the number of rows for the triangle: ";
    cin >> rows;
    RightAngleTriangle triangle(rows-1);
    triangle.printPattern();
    RightAngleTriangle defaultTriangle;
    defaultTriangle.printPattern();
    return 0;
}

