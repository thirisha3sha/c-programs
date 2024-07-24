//Create a C++ program that reads an integer from the user and calculates its square root. Handle the exception if the user enters a negative number and display an appropriate error message.
#include <iostream>
#include <cmath> // For sqrt() function
#include <stdexcept> // For std::invalid_argument
using namespace std;

double calculateSquareRoot(int number) {
    if (number < 0) {
        throw invalid_argument("Error: Cannot calculate the square root of a negative number.");
    }
    return sqrt(number);
}

int main() {
    int number;

    cout << "Enter an integer: ";
    cin >> number;

    try {
        double result = calculateSquareRoot(number);
        cout << "The square root of " << number << " is: " << result << endl;
    } catch (const invalid_argument& e) {
        cout << e.what() << endl; // Display error message
    }

    return 0;
}

