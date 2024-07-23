//Implement an inline function named square that calculates the square of a number. Use this function to square a user-input integer.
#include <iostream>
using namespace std;

// Inline function to calculate the square of a number
inline int square(int number) {
    return number * number;
}

int main() {
    int num;

    // Get user input
    cout << "Enter an integer: ";
    cin >> num;

    // Calculate and display the square
    int result = square(num);
    cout << "The square of " << num << " is " << result << endl;

    return 0;
}

