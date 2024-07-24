//Write a C++ program to create a class Student with attributes name and age. Create a pointer to an object of class Student and dynamically allocate memory to it. Use the this pointer to display the details of the student.
#include <iostream>
#include <string>
using namespace std;

class Student {
private:
    string name;
    int age;

public:
    // Constructor to initialize name and age
    Student(const string& studentName, int studentAge) {
        name = studentName;
        age = studentAge;
    }

    // Method to display student details
    void displayDetails() {
        cout << "Student Name: " << this->name << endl;
        cout << "Student Age: " << this->age << endl;
    }
};

int main() {
    string name;
    int age;

    // Get user input for student name and age
    cout << "Enter student name: ";
    getline(cin, name);
    cout << "Enter student age: ";
    cin >> age;

    // Dynamically allocate memory for a Student object
    Student* studentPtr = new Student(name, age);

    // Display the details of the student using this pointer
    studentPtr->displayDetails();

    // Free dynamically allocated memory
    delete studentPtr;

    return 0;
}

