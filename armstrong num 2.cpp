//Create a program to check whether a given number is Armstrong or not.
#include <iostream>
#include <cmath> // For pow() and log10()
using namespace std;

// Function to check if a number is an Armstrong number
bool isArmstrong(int number) {
    int originalNumber = number;
    int sum = 0;
    int digits = 0;

    // Count the number of digits
    while (number > 0) {
        number /= 10;
        digits++;
    }

    number = originalNumber; // Reset number to original value

    // Calculate the sum of powers of digits
    while (number > 0) {
        int digit = number % 10;
        sum += pow(digit, digits);
        number /= 10;
    }

    return (sum == originalNumber);
}

int main() {
    int number;

    cout << "Enter a number: ";
    cin >> number;

    if (isArmstrong(number)) {
        cout << number << " is an Armstrong number." << endl;
    } else {
        cout << number << " is not an Armstrong number." << endl;
    }

    return 0;
}

