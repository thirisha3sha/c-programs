/*2.	C++ program for employee details using an array of objects .
Sample Input 	****************
Employee details
****************
Enter the number of employees:2
Enter the employee name:joe
Enter the employee id:54
Enter the basic salary:7000
Enter the hra:200
Enter the da:400
Enter the employee name:kalis
Enter the employee id:55
Enter the basic salary:8000
Enter the hra:300
Enter the da:400

Sample Output	EMPLOYEE NAME	ID	BASIC	HRA	DA	GP	NP
joe		54	7000	  200	400	7600	7100	6400
kalis		55	8000	  300	400	8700	8200	7700
*/
#include <iostream>
#include <iomanip> // For std::setw
using namespace std;

class Employee {
private:
    string name;
    int id;
    float basicSalary;
    float hra; // House Rent Allowance
    float da;  // Dearness Allowance

public:
    // Function to get employee details
    void inputDetails() {
        cout << "Enter the employee name: ";
        cin >> name;
        cout << "Enter the employee id: ";
        cin >> id;
        cout << "Enter the basic salary: ";
        cin >> basicSalary;
        cout << "Enter the hra: ";
        cin >> hra;
        cout << "Enter the da: ";
        cin >> da;
    }

    // Function to display employee details
    void displayDetails() {
        float grossPay = basicSalary + hra + da; // GP = Basic + HRA + DA
        float netPay = grossPay - 500; // Assuming 500 is a deduction for simplicity

        cout << setw(10) << name 
             << setw(10) << id 
             << setw(10) << basicSalary 
             << setw(10) << hra 
             << setw(10) << da 
             << setw(10) << grossPay 
             << setw(10) << netPay << endl;
    }
};

int main() {
    int numberOfEmployees;

    cout << "****************\nEmployee details\n****************" << endl;
    cout << "Enter the number of employees: ";
    cin >> numberOfEmployees;

    Employee* employees = new Employee[numberOfEmployees]; // Dynamic array of Employee objects

    for (int i = 0; i < numberOfEmployees; ++i) {
        employees[i].inputDetails(); // Get details for each employee
    }

    // Displaying the header for the output
    cout << "\nEMPLOYEE NAME" << setw(10) << "ID" 
         << setw(10) << "BASIC" 
         << setw(10) << "HRA" 
         << setw(10) << "DA" 
         << setw(10) << "GP" 
         << setw(10) << "NP" << endl;

    // Display details for each employee
    for (int i = 0; i < numberOfEmployees; ++i) {
        employees[i].displayDetails();
    }

    delete[] employees; // Clean up dynamically allocated memory
    return 0;
}

