//Write a C++ program to demonstrate the use of default constructor and destructor in a class "Employee".
#include <iostream>
#include <string>
using namespace std;

class Employee {
private:
    string name;
    int id;

public:
    // Default constructor
    Employee() {
        name = "Unknown";
        id = 0;
        cout << "Default Constructor: Employee created with name: " << name << " and ID: " << id << endl;
    }

    // Destructor
    ~Employee() {
        cout << "Destructor: Employee with name: " << name << " and ID: " << id << " is being destroyed." << endl;
    }

    // Function to set employee details
    void setDetails(const string& empName, int empId) {
        name = empName;
        id = empId;
        cout << "Employee details updated to name: " << name << " and ID: " << id << endl;
    }

    // Function to display employee details
    void displayDetails() const {
        cout << "Employee Name: " << name << ", ID: " << id << endl;
    }
};

int main() {
    // Creating an Employee object using the default constructor
    Employee emp;

    // Variables to hold user input
    string name;
    int id;

    // Getting user input for employee details
    cout << "Enter employee name: ";
    getline(cin, name); // Use getline to allow for spaces in names
    cout << "Enter employee ID: ";
    cin >> id;

    // Setting employee details
    emp.setDetails(name, id);

    // Displaying employee details
    emp.displayDetails();

    // The destructor will be called automatically when 'emp' goes out of scope
    return 0;
}

