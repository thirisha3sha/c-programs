//C++ program to sort the given list of element in ascending using pointer
#include <iostream>
using namespace std;

// Function to sort an array
void sortArray(int arr[], int size) {
    for (int i = 0; i < size - 1; ++i) {
        for (int j = 0; j < size - i - 1; ++j) {
            if (arr[j] > arr[j + 1]) { // Compare using array indexing
                // Swap elements
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
}

// Function to display the array
void displayArray(int arr[], int size) {
    for (int i = 0; i < size; ++i) {
        cout << arr[i] << " "; // Accessing elements using array indexing
    }
    cout << endl;
}

int main() {
    int size;

    cout << "Enter the number of elements: ";
    cin >> size;

    int* arr = new int[size]; // Dynamically allocate array

    cout << "Enter " << size << " elements:" << endl;
    for (int i = 0; i < size; ++i) {
        cin >> arr[i]; // Storing input using array indexing
    }

    cout << "Original array: ";
    displayArray(arr, size);

    sortArray(arr, size); // Sort the array

    cout << "Sorted array in ascending order: ";
    displayArray(arr, size);

    delete[] arr; // Free dynamically allocated memory
    return 0;
}

