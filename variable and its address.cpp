/*4.	Build a C++ code to print the address of the variable.
Sample Input	Input given in the program itself
Sample Output	Address of var1: 0x7fff5fbff8ac
Address of var2: 0x7fff5fbff8a8
Address of var3: 0x7fff5fbff8a4
*/
#include <iostream>
using namespace std;

int main() {
    int var1;
    float var2;
    char var3;

    cout << "Enter an integer: ";
    cin >> var1;
    cout << "Enter a float: ";
    cin >> var2;
    cout << "Enter a character: ";
    cin >> var3;

    cout << "Address of var1: " << &var1 << endl;
    cout << "Address of var2: " << &var2 << endl;
    cout << "Address of var3: " << static_cast<void*>(&var3) << endl;

    return 0;
}

