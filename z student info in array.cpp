//Write a C++ program to demonstrate the use of arrays of objects for storing student details.
#include <iostream>
#include <string>
using namespace std;
class student{
	private:
		string name,major;
		int age;
		double gpa;
	public:
		student(){
			name="";
			age=0;
			major="";
			gpa=0.0;
		}
		student(string n,int a,string m,double g)
		{
			name=n;
			age=a;
			major=m;
			gpa=g;
		}
		void get_details()
		{
			cout<<"enter name:";
			cin.ignore();
			getline(cin,name);
			cout<<"enter age:";
			cin>>age;
			cout<<"enter major:";
			cin.ignore();
			getline(cin,major);
			cout<<"enter gpa:";
			cin>>gpa;
		}
		void display()
		{
			cout<<"name:"<<name<<endl;
			cout<<"age:"<<age<<endl;
			cout<<"major:"<<major<<endl;
			cout<<"gpa:"<<gpa<<endl;
		}
};
int main()
{
	int num;
	cout<<"enter the number of students:";
	cin>>num;
	student* arr=new student[num];
	for(int i=0;i<num;i++)
	{
		cout<<"enter details for student "<<i+1<<":"<<endl;
		arr[i].get_details();
	}
	cout<<"\n student details:\n";
	for(int i=0;i<num;i++)
	{
		cout<<"details of student "<<i+1<<":"<<endl;
		arr[i].display();
		cout<<endl;
	}
	delete[] arr;
	return 0;
}
