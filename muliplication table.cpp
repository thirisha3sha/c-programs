//Program to print multiplication table of a number using for loop.
#include <iostream>
using namespace std;

int main() {
    int number;

    // Prompt the user to enter a number
    cout << "Enter a number to print its multiplication table: ";
    cin >> number;

    // Print the multiplication table using a for loop
    cout << "Multiplication Table of " << number << ":\n";
    for (int i = 1; i <= 10; ++i) {
        cout << number << " x " << i << " = " << number * i << endl;
    }

    return 0;
}

