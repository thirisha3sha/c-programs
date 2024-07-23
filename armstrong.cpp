//armstrong number
#include <iostream>
#include <cmath>
using namespace std;

int main() {
    int n, temp, remainder, sum = 0, num_digits = 0;

    cout << "Enter the number: ";
    cin >> n;

    // Store the original number to check later
    temp = n;

    // Count the number of digits
    while (temp != 0) {
        temp /= 10;
        num_digits++;
    }

    // Reset temp to original number
    temp = n;

    // Calculate the sum of the powers of its digits
    while (temp != 0) {
        remainder = temp % 10;
        sum += pow(remainder, num_digits);
        temp /= 10;
    }

    // Check if the sum of the powers is equal to the original number
    if (sum == n) {
        cout << n << " is an Armstrong number." << endl;
    } else {
        cout << n << " is not an Armstrong number." << endl;
    }

    return 0;
}

