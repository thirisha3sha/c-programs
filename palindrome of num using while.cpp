//Write a program in C++ to check if a number is palindrome or not using control statements?
#include <iostream>
using namespace std;

int main() {
    int num, originalNum, reversedNum = 0, remainder;

    // Input a number from the user
    cout << "Enter an integer: ";
    cin >> num;

    originalNum = num; // Store the original number

    // Reverse the number
    while (num != 0) {
        remainder = num % 10; // Get the last digit
        reversedNum = reversedNum * 10 + remainder; // Build the reversed number
        num /= 10; // Remove the last digit
    }

    // Check if the original number and reversed number are the same
    if (originalNum == reversedNum) {
        cout << originalNum << " is a palindrome." << endl;
    } else {
        cout << originalNum << " is not a palindrome." << endl;
    }

    return 0;
}

