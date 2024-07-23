/*1.	Write a program to calculate the bonus of the employees. The class master derives the information from both admin and account classes which derives information from the class person. Create base and all derived classes having same  member functions and parameters called getdata, display data and bonus. 
Sample Input	enter salary : 10000
Sample Output	bonus = 11000
*/
#include <iostream>
using namespace std;
class Person
{
public:
    float salary;
    void getdata() 
	{
        cout <<"Enter salary: ";
        cin >> salary;
    }
    void displaydata() {
        cout << "Salary: " << salary << endl;
    }
    virtual float bonus() = 0;
};

class Admin : virtual public Person
{
public:
    float bonus() override 
	{
        return salary * 1.1; 
    }
};

class Account : virtual public Person 
{
public:
    float bonus() override {
        return salary * 1.1; 
    }
};

class Master :public Admin, public Account {
public:
    float bonus() override 
	{
        return Admin::bonus();
    }
};

int main() 
{
    Master employee;
    employee.getdata();
    employee.displaydata();
    cout << "Bonus = " << employee.bonus() << endl;
    return 0;
}

