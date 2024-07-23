//Develop a C++ program that dynamically allocates memory for an array of integers based on user input for the array size. Implement error handling for memory allocation failure.
#include <iostream>
#include <new> 
using namespace std;
int main() 
{
    int* array;
    int size;
    cout << "Enter the size of the array: ";
    cin >> size;
    array = new(nothrow) int[size];
    if (array == NULL)
	 {
        cout << "Memory allocation failed!" << endl;
        return 1; 
    }
	 else 
	 {
        cout << "Memory allocation successful." << endl;
        cout << "Enter " << size << " integer values:" << endl;
        for (int i = 0; i < size; i++) {
            cin >> array[i];
        }
        cout << "The values in the array are:" << endl;
        for (int i = 0; i < size; i++) {
            cout << array[i] << " ";
        }
        cout << endl;
        delete[] array;
    }

    return 0;
}

