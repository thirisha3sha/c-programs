 //6.	Write a C++ program to create a pointer to an integer and display its value.
#include <iostream>
using namespace std;
int main()
{
	int n;
	int* ptr=&n;
	cout<<"enter an integer:";
	cin>>n;
	cout<<"value of the integer is: "<<*ptr<<endl;
	cout<<"address of the integer is:"<<ptr<<endl;
	return 0;
}
