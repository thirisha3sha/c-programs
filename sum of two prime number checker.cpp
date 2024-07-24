//Write a program in C++ to Check Whether a Number can be Express as Sum of Two Prime Numbers using constructor and destructor.
#include <iostream>
#include <cmath>
using namespace std;

class PrimeSumChecker {
private:
    int number;

    // Function to check if a number is prime
    bool isPrime(int num) {
        if (num <= 1) return false;
        if (num == 2) return true; // 2 is prime
        if (num % 2 == 0) return false; // even numbers greater than 2 are not prime
        for (int i = 3; i <= sqrt(num); i += 2) {
            if (num % i == 0) return false;
        }
        return true;
    }

    // Function to find two prime numbers whose sum equals 'number'
    bool findPrimePair() {
        for (int i = 2; i <= number / 2; ++i) {
            if (isPrime(i) && isPrime(number - i)) {
                cout << number << " can be expressed as " << i << " + " << (number - i) << endl;
                return true;
            }
        }
        cout << number << " cannot be expressed as the sum of two prime numbers." << endl;
        return false;
    }

public:
    // Constructor with parameter
    PrimeSumChecker(int num) {
        number = num;
        cout << "Checking if " << number << " can be expressed as the sum of two prime numbers..." << endl;
        findPrimePair();
    }
};

int main() {
    int num;
    cout << "Enter a number to check if it can be expressed as the sum of two prime numbers: ";
    cin >> num;

    PrimeSumChecker checker(num); // Create an instance of PrimeSumChecker with the entered number

    return 0;
}

