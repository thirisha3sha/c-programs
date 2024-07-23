//Implement a program to find the GCD and LCM of two numbers.
#include <iostream>
using namespace std;

// Function to calculate GCD using Euclidean algorithm
int gcd(int a, int b) {
    while (b != 0) {
        int temp = b;
        b = a % b;
        a = temp;
    }
    return a;
}

// Function to calculate LCM
int lcm(int a, int b) {
    return (a * b) / gcd(a, b);
}

int main() {
    int num1, num2;

    cout << "Enter two numbers: ";
    cin >> num1 >> num2;

    // Calculate GCD and LCM
    int gcdValue = gcd(num1, num2);
    int lcmValue = lcm(num1, num2);

    // Display the results
    cout << "GCD of " << num1 << " and " << num2 << " is: " << gcdValue << endl;
    cout << "LCM of " << num1 << " and " << num2 << " is: " << lcmValue << endl;

    return 0;
}

