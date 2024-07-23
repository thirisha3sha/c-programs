//	Develop a c++ program for default arguments
#include <iostream>
#include <string>
using namespace std;
void display(string name,int age=16,string country="INDIA")
{
	cout<<"name:"<<name<<endl;
	cout<<"age"<<age<<endl;
	cout<<"country:"<<country<<endl;
}
int main()
{
	string name,country;
	int age;
	char choice;
	cout<<"enter your name:";
	getline(cin,name);
	cout<<"do you want to enter your age?(y/n):";
	cin>>choice;
	if(choice=='y'||choice=='Y')
	{
		cout<<"enter your age:";
		cin>>age;
	}
	else{
		age=18;
	}
	cout<<"do you want to enter your country name:(y/n):";
	cin>>choice;
	if(choice=='y'||choice=='Y')
	{
		cout<<"enter your country:";
		getline(cin,country);
	}
	else{
		country="INDIA";
	}
	display(name,age,country);
	return 0;
}
