/*4.	Write a C++ Program to find the greatest of three numbers using pointers.
Sample Input	enter the three numbers : 
35
45 
21
*/
#include <iostream>
using namespace std;

int main()
{
    int num1, num2, num3;
    cout << "Enter the three numbers: " << endl;
    cout << "First number: ";
    cin >> num1;
    cout << "Second number: ";
    cin >> num2;
    cout << "Third number: ";
    cin >> num3;
    int* ptr1 = &num1;
    int* ptr2 = &num2;
    int* ptr3 = &num3;
    int* greatest = ptr1; 

    if (*ptr2 > *greatest)
	 {
        greatest = ptr2; 
    }
    if (*ptr3 > *greatest) 
	{
        greatest = ptr3;
    }
    cout << "The greatest number is: " << *greatest << endl;

    return 0;
}

