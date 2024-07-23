//Program to perform arithmetic operations on different data types.
#include <iostream>
using namespace std;

// Function prototypes
int add(int a, int b);
float add(float a, float b);
double add(double a, double b);

int subtract(int a, int b);
float subtract(float a, float b);
double subtract(double a, double b);

int multiply(int a, int b);
float multiply(float a, float b);
double multiply(double a, double b);

float divide(float a, float b);
double divide(double a, double b);

int main() {
    int int1, int2;
    float float1, float2;
    double double1, double2;

    // Input for integers
    cout << "Enter two integers: ";
    cin >> int1 >> int2;
    cout << "Addition: " << add(int1, int2) << endl;
    cout << "Subtraction: " << subtract(int1, int2) << endl;
    cout << "Multiplication: " << multiply(int1, int2) << endl;
    cout << "Division: " << divide(static_cast<float>(int1), static_cast<float>(int2)) << endl; // Casting for division

    // Input for floats
    cout << "\nEnter two floats: ";
    cin >> float1 >> float2;
    cout << "Addition: " << add(float1, float2) << endl;
    cout << "Subtraction: " << subtract(float1, float2) << endl;
    cout << "Multiplication: " << multiply(float1, float2) << endl;
    cout << "Division: " << divide(float1, float2) << endl;

    // Input for doubles
    cout << "\nEnter two doubles: ";
    cin >> double1 >> double2;
    cout << "Addition: " << add(double1, double2) << endl;
    cout << "Subtraction: " << subtract(double1, double2) << endl;
    cout << "Multiplication: " << multiply(double1, double2) << endl;
    cout << "Division: " << divide(double1, double2) << endl;

    return 0;
}

// Function definitions
int add(int a, int b) {
    return a + b;
}

float add(float a, float b) {
    return a + b;
}

double add(double a, double b) {
    return a + b;
}

int subtract(int a, int b) {
    return a - b;
}

float subtract(float a, float b) {
    return a - b;
}

double subtract(double a, double b) {
    return a - b;
}

int multiply(int a, int b) {
    return a * b;
}

float multiply(float a, float b) {
    return a * b;
}

double multiply(double a, double b) {
    return a * b;
}

float divide(float a, float b) {
    if (b != 0) {
        return a / b;
    } else {
        cout << "Error: Division by zero!" << endl;
        return 0;
    }
}

double divide(double a, double b) {
    if (b != 0) {
        return a / b;
    } else {
        cout << "Error: Division by zero!" << endl;
        return 0;
    }
}

