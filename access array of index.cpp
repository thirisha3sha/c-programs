//Write a program to illustrate array index out of bounds exceptions.
#include <iostream>
#include <stdexcept> // For std::out_of_range
using namespace std;

int main() {
    const int SIZE = 5;
    int myArray[SIZE] = {10, 20, 30, 40, 50};
    int index;

    while (true) {
        cout << "Enter an index to access (0 to " << SIZE - 1 << "): ";
        cin >> index;

        // Check if the index is out of bounds
        if (index < 0 || index >= SIZE) {
            cout << "Error: Index out of bounds! Please try again." << endl;
        } else {
            // Access the array element safely
            cout << "Element at index " << index << ": " << myArray[index] << endl;
            break; // Exit the loop after successful access
        }
    }

    return 0;
}

