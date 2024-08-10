//9.	Write a C++ program to create a pointer to a double and display its value.
#include <iostream>
using namespace std;
int main()
{
	double n;
	cout<<"enter a double value:";
	cin>>n;
	double *ptr=&n;
	cout<<"the value: "<<*ptr<<endl;
	cout<<"address of the value:"<<ptr<<endl;
	return 0;
}
