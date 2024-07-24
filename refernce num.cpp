//Develop a C++ program with a function that returns a reference to an integer variable and modifies its value. Use this function to update the value of a variable in the main function.
#include <iostream>
using namespace std;

// Function that returns a reference to an integer
int& getReference(int& num) {
    return num; // Return the reference to the passed integer
}

int main() {
    int value; // Declare an integer variable

    // Get user input for the initial value
    cout << "Enter an integer value: ";
    cin >> value;

    cout << "Original value: " << value << endl;

    // Get reference to the variable and modify it
    getReference(value) = 20; // Update the value using the reference

    cout << "Updated value: " << value << endl; // Output the updated value

    return 0;
}

