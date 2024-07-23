//Create a class Array to represent a dynamic array. Implement member functions to insert elements into the array and retrieve elements by index. Handle the exception if an invalid index is provided for retrieval and throw an exception. Write a test case to insert elements and retrieve elements by index.
#include <iostream>
#include <stdexcept>
using namespace std;

class Array {
private:
    int* arr;
    int capacity;
    int size;

public:
    // Constructor to initialize the dynamic array
    Array(int cap) : capacity(cap), size(0) {
        arr = new int[capacity];
    }

    // Destructor to free allocated memory
    ~Array() {
        delete[] arr;
    }

    // Function to insert an element into the array
    void insert(int element) {
        if (size < capacity) {
            arr[size++] = element;
        } else {
            cout << "Array is full. Cannot insert element." << endl;
        }
    }

    // Function to retrieve an element by index
    int retrieve(int index) {
        if (index < 0 || index >= size) {
            throw out_of_range("Invalid index access.");
        }
        return arr[index];
    }

    // Function to display the array elements
    void display() {
        for (int i = 0; i < size; ++i) {
            cout << arr[i] << " ";
        }
        cout << endl;
    }
};

int main() {
    int capacity;
    cout << "Enter the capacity of the array: ";
    cin >> capacity;

    Array myArray(capacity); // Create an Array with user-defined capacity

    int element;
    char choice;
    
    // Insert elements into the array based on user input
    do {
        cout << "Enter an element to insert: ";
        cin >> element;
        myArray.insert(element);

        cout << "Do you want to insert another element? (y/n): ";
        cin >> choice;
    } while (choice == 'y' || choice == 'Y');

    // Display the elements
    cout << "Elements in the array: ";
    myArray.display();

    // Test retrieving elements
    int index;
    cout << "Enter an index to retrieve the element: ";
    cin >> index;

    try {
        cout << "Element at index " << index << ": " << myArray.retrieve(index) << endl; // Retrieve element by index
    } catch (const out_of_range& e) {
        cout << "Exception: " << e.what() << endl; // Catch invalid index access
    }

    return 0;
}

