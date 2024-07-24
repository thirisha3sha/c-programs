//Program to demonstrate the use of tokens, keywords, identifiers, and constants.
#include <iostream>
using namespace std;

// Constant
const float PI = 3.14159; // Constant

// Function to calculate the area of a circle
float calculateArea(float radius) { // Identifiers
    return PI * radius * radius; // Using the constant PI
}

int main() {
    // Keywords and Identifiers
    float radius; // Identifier for radius

    cout << "Enter the radius of the circle: ";
    cin >> radius; // Taking input for radius

    // Tokens: cin, <<, >>, etc.
    cout << "The area of the circle with radius " << radius << " is: "
         << calculateArea(radius) << endl; // Using the function to calculate area

    return 0; // End of program
}

