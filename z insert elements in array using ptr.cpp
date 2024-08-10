//11.	Write a C++ program to create a pointer to an array of elements and display its value.
#include <iostream>
using namespace std;
int main()
{
	int size;
	cout<<"Enter the size of the array: ";
	cin>>size;
	int *arr=new int[size];
	cout<<"enter "<<size<<" elements:";
	for(int i=0;i<size;i++)
	{
		cin>>arr[i];
	}
	int *ptr=arr;
	cout<<"displaying array:";
	for(int i=0;i<size;i++)
	{
		cout<<*(ptr+i)<<" ";
	}
	cout<<endl;
	cout<<"address of the array elements are:";
	for(int i=0;i<size;i++)
	{
		cout<<(ptr+i)<<" ";
	}
	cout<<endl;
	delete[] arr;
	return 0;
}
