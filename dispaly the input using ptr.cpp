/*5.	C++ Program to insert and display data entered by using pointer notation.
Sample Input	Enter the 4 numbers: 
1
2.5
3.0
4
Sample Output	Displaying the data: 
1
2.5
3.0
4
*/
#include <iostream>
using namespace std;

int main() {
    const int size = 4;
    float numbers[size]; 
    cout << "Enter the " << size << " numbers: " << endl;
    for (int i = 0; i < size; ++i) 
	{
        cout << "Number " << (i + 1) << ": ";
        cin >> *(numbers + i); 
    }
    cout << "Displaying the data: " << endl;
    for (int i = 0; i < size; ++i) {
        cout << *(numbers + i) << endl; 
    }
    return 0;
}

