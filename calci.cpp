/*6.	Develop a C++ program to perform different arithmetic operations such as addition, subtraction, division, modulus and multiplication switch case
Sample Input	Calculator:
1.Addition
2. Subtraction.
3.Multiplication
4. Division
5.Modulus
Enter your choice:1
Number 1: 20
Number 2:30
Sample Output	The value  of addition is 50
*/
#include <iostream>
#include <cmath>
using namespace std;

int main() {
    int choice;
    float num1, num2;

    cout << "Calculator:" << endl;
    cout << "1. Addition" << endl;
    cout << "2. Subtraction" << endl;
    cout << "3. Multiplication" << endl;
    cout << "4. Division" << endl;
    cout << "5. Modulus" << endl;
    cout << "Enter your choice: ";
    cin >> choice;

    cout << "Number 1: ";
    cin >> num1;
    cout << "Number 2: ";
    cin >> num2;

    switch(choice) {
        case 1:
            cout << "The value of addition is " << num1 + num2 << endl;
            break;
        case 2:
            cout << "The value of subtraction is " << num1 - num2 << endl;
            break;
        case 3:
            cout << "The value of multiplication is " << num1 * num2 << endl;
            break;
        case 4:
            if (num2 != 0)
                cout << "The value of division is " << num1 / num2 << endl;
            else
                cout << "Division by zero error!" << endl;
            break;
        case 5:
            if (num2 != 0)
                cout << "The value of modulus is " << fmod(num1, num2) << endl;
            else
                cout << "Modulus by zero error!" << endl;
            break;
        default:
            cout << "Invalid choice!" << endl;
    }

    return 0;
}

