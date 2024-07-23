/*4.	Create a class to print the area of a square and a rectangle. The class has two functions with the same name but different number of parameters. The function for printing the area of rectangle has two parameters which are its length and breadth respectively while the other function for printing the area of square has one parameter which is the side of the square.
Sample Input	7
7,8
Sample Output	49
56
*/
#include <iostream>
using namespace std;
class areacalculator {
public:
    void printarea(int side) {
        int area = side * side;
        cout << area << endl;
    }
    void printarea(int length, int breadth) {
        int area = length * breadth;
        cout << area << endl;
    }
};

int main() {
    areacalculator calci;
    int squareSide, length,breadth;
    cout << "Enter the side of the square: ";
    cin >> squareSide;
    calci.printarea(squareSide);
    cout << "Enter the length and breadth of the rectangle : ";
    cin >> length >> breadth;
    calci.printarea(length, breadth);  
    return 0;
}

