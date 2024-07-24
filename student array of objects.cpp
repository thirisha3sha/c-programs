
#include <iostream>
#include <string>
using namespace std;

class Student {
private:
    string name;
    int id,age;

public:
    void getDetails() {
        cout << "student name: ";
        cin.ignore(); 
        getline(cin, name);
        cout << "student id: ";
        cin >> id;
        cout<<"student age:";
        cin>>age;
    }

    void displayDetails() const
	 {
        cout << "\nstudent Name: " << name ;
		cout<< "\nstudent id: " << id ;
		cout<<"\nstudent age:"<<age;
		
    }
};

int main() {
    int numberOfStudents;

    cout << "Enter the number of students: ";
    cin >> numberOfStudents;
    Student* students = new Student[numberOfStudents];
    for (int i = 0; i < numberOfStudents; i++)
	{
        cout << "student details  " << (i + 1) << ":" << endl;
        students[i].getDetails();
    }
    cout << "\ndispalying Student details:\n";
    for (int i = 0; i < numberOfStudents; i++) {
        students[i].displayDetails();
    }
    delete[] students;

    return 0;
}

