//Develop a program to find the power of a number using recursion.
#include <iostream>
using namespace std;

// Recursive function to calculate power
double power(int base, int exponent) {
    if (exponent == 0) {
        return 1; // Base case: any number to the power of 0 is 1
    } else if (exponent < 0) {
        return 1 / power(base, -exponent); // Handle negative exponent
    } else {
        return base * power(base, exponent - 1); // Recursive case
    }
}

int main() {
    int base, exponent;

    cout << "Enter base: ";
    cin >> base;
    cout << "Enter exponent: ";
    cin >> exponent;

    double result = power(base, exponent);
    
    cout << base << " raised to the power of " << exponent << " is: " << result << endl;

    return 0;
}

