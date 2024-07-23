/*7.	C++ Program to to display address of each element of an array
Sample Input	No input is needed
Sample Output	Displaying address using arrays: 
&arr[0] = 0x61fef0
&arr[1] = 0x61fef4
&arr[2] = 0x61fef8

Displaying address using pointers: 
ptr + 0 = 0x61fef0
ptr + 1 = 0x61fef4
ptr + 2 = 0x61fef8
*/
#include <iostream>
using namespace std;

int main() {
    int arr[3] = {10, 20, 30};
    int* ptr = arr;

    cout << "Displaying address using arrays: " << endl;
    for (int i = 0; i < 3; ++i) {
        cout << "&arr[" << i << "] = " << &arr[i] << endl;
    }

    cout << "\nDisplaying address using pointers: " << endl;
    for (int i = 0; i < 3; ++i) {
        cout << "ptr + " << i << " = " << (ptr + i) << endl;
    }

    return 0;
}

