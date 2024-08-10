//10.	Write a C++ program to create a pointer to a string and display its value.
#include <iostream>
#include <string>
using namespace std;
int main()
{
	string str;
	cout<<"enter string:";
	getline(cin,str);
	string *ptr=&str;
	cout<<"string:"<<*ptr<<endl;
	cout<<"address of string:"<<ptr<<endl;
	return 0;
}
