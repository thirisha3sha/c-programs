//8.	Write a C++ program to create a pointer to a char and display its value.
#include <iostream>
using namespace std;
int main()
{
	char ch;
	cout<<"Enter a character:";
	cin>>ch;
	char *ptr=&ch;
	cout<<"the value:"<<*ptr<<endl;
	cout<<"address of the value:"<<static_cast<void*>(ptr)<<endl;
	return 0;
}
