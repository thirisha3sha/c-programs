//5.	Write a c++ program to create a class for student with a constructor and a destructor
#include <iostream>
#include <string>
using namespace std;
class student{
	private:
		string name,major;
		int age;
		double gpa;
	public:
		student(string n,int a,string m,double g)
		{
			name=n;
			age=a;
			major=m;
			gpa=g;
			cout<<"student object is created!!!";
		}
		~student()
		{
			cout<<"student object destroyed!!!";
		}
		void display()
		{
			cout<<"student detail.....";
			cout<<"name:"<<name<<endl;
			cout<<"major:"<<major<<endl;
			cout<<"age:"<<age<<endl;
			cout<<"GPA:"<<gpa<<endl;
		}
};
int main()
{
	string name,major;
	int age;
	double gpa;
	cout<<"enter the name of the student:";
	getline(cin,name);
	cout<<"enter the major subject:";
	getline(cin,major);
	cout<<"Enter your age:";
	cin>>age;
	cout<<"enter GPA:";
	cin>>gpa;
	student obj(name,age,major,gpa);
	obj.display();
	return 0;
	
}
