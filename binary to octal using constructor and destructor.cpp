//8.	Write a C++ program of binary to octal conversion with Constructor with constructor.
#include <iostream>
#include <string>
#include <cmath>
using namespace std;

class binary_to_octal {
private:
    string binary_input;

public:
    binary_to_octal(string input) {
        binary_input = input;
        cout << "Binary to octal converter object created with binary: " << binary_input << endl;
    }

    int binary_to_decimal(string binary_input) {
        int decimal = 0;
        int power = 1; // Start with 2^0

        // Traverse the binary string from right to left
        for (int i = binary_input.length() - 1; i >= 0; i--) {
            if (binary_input[i] == '1') {
                decimal += power; // Add the corresponding power of 2
            }
            power *= 2; // Increment the power (2^0, 2^1, 2^2, ...)
        }
        return decimal;
    }

    string decimal_to_octal(int decimal) {
        if (decimal == 0) return "0"; // Handle the case where decimal is 0

        string octal;
        while (decimal > 0) {
            octal = char((decimal % 8) + '0') + octal; // Convert int to char
            decimal /= 8; // Divide by 8 for next digit
        }
        return octal; // Return the octal representation
    }

    void display() {
        int decimal = binary_to_decimal(binary_input);
        string octal = decimal_to_octal(decimal);
        cout << "Binary: " << binary_input << " -> Octal: " << octal << endl;
    }

    ~binary_to_octal() {
        cout << "Binary to octal converter object destroyed" << endl;
    }
};

int main() {
    string input;
    cout << "Enter a binary number: ";
    cin >> input;
    binary_to_octal object(input);
    object.display();
    return 0;
}


