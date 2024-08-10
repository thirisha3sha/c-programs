//5.A Grandfather is the owner of 500Cr property, he wants to give this property to his grandson. What are the  possible ways to access this property by his grandson? Use appropriate functions and variables.
#include <iostream>

using namespace std;

// Function to calculate direct inheritance
void directInheritance(double propertyValue) {
    cout << "Direct Inheritance: The grandson will inherit the entire property worth " << propertyValue << " Cr." << endl;
}

// Function to calculate trust fund transfer
void trustFund(double propertyValue, double percentage) {
    double trustValue = (propertyValue * percentage) / 100.0;
    cout << "Trust Fund: The grandson will receive " << trustValue << " Cr from the trust fund." << endl;
}

// Function to calculate installment payments
void installmentPayments(double propertyValue, int numberOfInstallments) {
    double installmentAmount = propertyValue / numberOfInstallments;
    cout << "Installment Payments: The grandson will receive " << installmentAmount << " Cr per installment for " << numberOfInstallments << " installments." << endl;
}

// Function to calculate partial inheritance and partial trust fund
void partialInheritanceAndTrust(double propertyValue, double inheritancePercentage, double trustPercentage) {
    double inheritanceValue = (propertyValue * inheritancePercentage) / 100.0;
    double trustValue = (propertyValue * trustPercentage) / 100.0;
    cout << "Partial Inheritance and Trust Fund: The grandson will inherit " << inheritanceValue << " Cr and receive " << trustValue << " Cr from the trust fund." << endl;
}

int main() {
    double propertyValue = 500.0;  // Property value in Cr
    int numberOfInstallments = 10; // Example number of installments
    double inheritancePercentage = 50.0; // Example percentage of inheritance
    double trustPercentage = 50.0; // Example percentage for trust fund

    // Show possible ways to access the property
    cout << "Possible ways for the grandson to access the property worth " << propertyValue << " Cr:" << endl;

    // Direct inheritance
    directInheritance(propertyValue);

    // Trust fund
    trustFund(propertyValue, 50.0); // Example: 50% of the property value

    // Installment payments
    installmentPayments(propertyValue, numberOfInstallments);

    // Partial inheritance and partial trust fund
    partialInheritanceAndTrust(propertyValue, inheritancePercentage, trustPercentage);

    return 0;
}

