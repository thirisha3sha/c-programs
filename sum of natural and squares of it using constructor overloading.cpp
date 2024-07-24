//Write a program in C++ to find the sum of the series using the constructor overloading.
#include <iostream>
using namespace std;

class SeriesSum {
private:
    int n;
    
public:
    // Constructor for sum of the first n natural numbers
    SeriesSum(int num) : n(num) {
        cout << "Sum of the first " << n << " natural numbers: " << sumNaturalNumbers() << endl;
    }

    // Constructor for sum of squares of the first n natural numbers
    SeriesSum(double num) {
        n = static_cast<int>(num);
        cout << "Sum of squares of the first " << n << " natural numbers: " << sumSquares() << endl;
    }

private:
    // Function to calculate sum of first n natural numbers
    int sumNaturalNumbers() {
        return (n * (n + 1)) / 2;
    }

    // Function to calculate sum of squares of first n natural numbers
    int sumSquares() {
        return (n * (n + 1) * (2 * n + 1)) / 6;
    }
};

int main() {
    int n;
    
    cout << "Enter a number for the sum of natural numbers: ";
    cin >> n;
    SeriesSum sumNatural(n); // Calls the first constructor

    double m;
    cout << "Enter a number for the sum of squares of natural numbers: ";
    cin >> m;
    SeriesSum sumSquares(m); // Calls the second constructor

    return 0;
}

