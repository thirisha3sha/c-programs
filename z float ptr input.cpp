//7.	Write a C++ program to create a pointer to a float and display its value.
#include <iostream>
using namespace std;
int main()
{
	float n;
	float* ptr=&n;
	cout<<"enter a float value:";
	cin>>n;
	cout<<"value of float: "<<*ptr<<endl;
	cout<<"address of the value:"<<ptr;
	return 0;
}
