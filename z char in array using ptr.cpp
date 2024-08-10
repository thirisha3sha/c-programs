//12.	Write a C++ program to create a pointer to an array of character and display its value.
#include <iostream>
using namespace std;
int main()
{
	int MAX_SIZE=100;
	char arr[MAX_SIZE];
	cout<<"enter a string:";
	cin.getline(arr,MAX_SIZE);
	char* ptr=arr;
	cout<<"array elements:"<<ptr<<endl;
	cout<<"characters in the array:"<<endl;
	while(*ptr!='\0')
	{
		cout<<*ptr<<endl;
		ptr++;
	}
	return 0;
}
