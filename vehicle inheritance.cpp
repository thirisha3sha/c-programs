//Write a C++ program to demonstrate the use of inheritance for a class "Vehicle" and its derived class "Car"
#include <iostream>
#include <string>
using namespace std;

// Base class
class Vehicle {
protected:
    string brand;
    int year;

public:
    // Constructor
    Vehicle(string b, int y) : brand(b), year(y) {}

    // Function to display vehicle details
    void displayInfo() const {
        cout << "Brand: " << brand << ", Year: " << year << endl;
    }
};

// Derived class
class Car : public Vehicle {
private:
    int doors;

public:
    // Constructor
    Car(string b, int y, int d) : Vehicle(b, y), doors(d) {}

    // Function to display car details
    void displayCarInfo() const {
        displayInfo(); // Call base class function
        cout << "Doors: " << doors << endl;
    }
};

int main() {
    string brand;
    int year, doors;

    // Get user input
    cout << "Enter car brand: ";
    getline(cin, brand);
    cout << "Enter manufacturing year: ";
    cin >> year;
    cout << "Enter number of doors: ";
    cin >> doors;

    // Create an object of Car using user input
    Car myCar(brand, year, doors);

    // Display car details
    myCar.displayCarInfo();

    return 0;
}

