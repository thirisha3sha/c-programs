//14.	Write a C++ program to create a pointer to an object and display its attributes.
#include <iostream>;
#include <string>;
using namespace std;
class person{
	public:
		string name;
		int age;
		person(string n,int a)
		{
			name=n;
			age=a;
		}
		person(){
			name="";
			age=0;
		}
		void display()
		{
			cout<<"name: "<<name<<"\n";
			cout<<"age: "<<age<<endl;
		}
};
int main()
{
	person p;
	person *ptr=&p;
	string name;
	int age;
	cout<<"Enter name:";
	getline(cin,name);
	cout<<"enter age:";
	cin>>age;
	ptr->name=name;
	ptr->age=age;
	cout<<"displaying attributes using pointers:"<<endl;
	ptr->display();
	return 0;
	}
