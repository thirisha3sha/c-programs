/*A Grandfather is the owner of 500Cr property, he wants to give this property to his grandson. What are the possible ways to access 
this property by his grandson? Use appropriate functions and variables.*/
#include <iostream>
using namespace std;

// Class representing the Grandfather
class Grandfather {
private:
    double propertyValue; // Property value in Crores

public:
    // Constructor
    Grandfather(double value) : propertyValue(value) {}

    // Function to transfer property as a gift
    void transferAsGift(class Grandson& grandson) {
        grandson.inheritProperty(propertyValue);
        cout << "Property transferred as a gift: " << propertyValue << " Cr." << endl;
    }

    // Function to sell the property to grandson
    void sellProperty(class Grandson& grandson, double amount) {
        if (amount >= propertyValue) {
            grandson.inheritProperty(propertyValue);
            cout << "Property sold to grandson for: " << amount << " Cr." << endl;
        } else {
            cout << "Insufficient amount to buy the property." << endl;
        }
    }
};

// Class representing the Grandson
class Grandson {
private:
    double inheritedProperty; // Inherited property value

public:
    Grandson() : inheritedProperty(0) {}

    // Function to inherit property
    void inheritProperty(double value) {
        inheritedProperty += value;
    }

    // Function to display inherited property value
    void displayInheritedProperty() const {
        cout << "Grandson's inherited property value: " << inheritedProperty << " Cr." << endl;
    }
};

int main() {
    Grandfather grandfather(500); // Grandfather owns 500 Cr property
    Grandson grandson;

    // Transfer property as a gift
    grandfather.transferAsGift(grandson);
    grandson.displayInheritedProperty();

    // Attempt to sell the property
    grandfather.sellProperty(grandson, 600); // Selling for 600 Cr
    grandson.displayInheritedProperty();

    // Attempt to sell the property with insufficient amount
    grandfather.sellProperty(grandson, 400); // Selling for 400 Cr
    grandson.displayInheritedProperty();

    return 0;
}

