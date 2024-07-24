/*1.	Write a program to print the names of students by creating a Student class. If no name is passed while creating an object of the Student class, then the name should be "Unknown", otherwise the name should be equal to the String value passed while creating the object of the Student class.
Sample Input	Jhon
Sample Output	Jhon
Unknown
*/
#include <iostream>
#include <string>
using namespace std;
class student{
	private:
		string name;
	public:
		student(string studentname="unknown")
		{
			name=studentname;
		}
	void display()
	{
		cout<<name<<endl;
	}
};
int main()
{
	string input;
	cout<<"enter the name of the first student:";
	getline(cin,input);
	student stu1(input);
	stu1.display();
	student stu2;
	stu2.display();
	return 0;
	
}
