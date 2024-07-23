//Create a class "Customer" with member functions to add, delete, and display customer details.
#include <iostream>
#include <string>
#include <vector>

using namespace std;

// Customer class
class Customer {
private:
    string name;
    int id;

public:
    // Constructor
    Customer(string n, int i) : name(n), id(i) {}

    // Function to display customer details
    void display() const {
        cout << "Customer ID: " << id << ", Name: " << name << endl;
    }

    // Function to get the customer ID
    int getId() const {
        return id;
    }
};

// Class to manage customers
class CustomerManager {
private:
    vector<Customer> customers;

public:
    // Function to add a customer
    void addCustomer(const string& name, int id) {
        customers.push_back(Customer(name, id)); // Use push_back for C++98 compatibility
        cout << "Customer added successfully." << endl;
    }

    // Function to delete a customer by ID
    void deleteCustomer(int id) {
        for (vector<Customer>::iterator it = customers.begin(); it != customers.end(); ++it) {
            if (it->getId() == id) {
                customers.erase(it);
                cout << "Customer with ID " << id << " deleted successfully." << endl;
                return;
            }
        }
        cout << "Customer with ID " << id << " not found." << endl;
    }

    // Function to display all customers
    void displayCustomers() const {
        if (customers.empty()) {
            cout << "No customers to display." << endl;
            return;
        }
        cout << "Customer List:" << endl;
        for (size_t i = 0; i < customers.size(); ++i) {
            customers[i].display(); // Use traditional for loop
        }
    }
};

int main() {
    CustomerManager manager;
    int choice;
    string name;
    int id;

    do {
        cout << "\nCustomer Management System\n";
        cout << "1. Add Customer\n";
        cout << "2. Delete Customer\n";
        cout << "3. Display Customers\n";
        cout << "4. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice) {
            case 1:
                cout << "Enter customer name: ";
                cin.ignore(); // Clear the newline character from the input buffer
                getline(cin, name);
                cout << "Enter customer ID: ";
                cin >> id;
                manager.addCustomer(name, id);
                break;
            case 2:
                cout << "Enter customer ID to delete: ";
                cin >> id;
                manager.deleteCustomer(id);
                break;
            case 3:
                manager.displayCustomers();
                break;
            case 4:
                cout << "Exiting..." << endl;
                break;
            default:
                cout << "Invalid choice. Please try again." << endl;
        }
    } while (choice != 4);

    return 0;
}

