//13.	Write a C++ program to create a pointer to an array of floats and display its value.
#include <iostream>
using namespace std;
int main()
{
	int size;
	cout<<"enter the size of the float array:";
	cin>>size;
	float *arr=new float[size];
	cout<<"enter "<<size<<"  float values:";
	for(int i=0;i<size;i++)
	{
		cin>>arr[i];
	}
	float *ptr=arr;
	cout<<"values in the array:";
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
