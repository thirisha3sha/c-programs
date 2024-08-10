//write a c++ program to overload a function to sort an iinteger array and a double array
#include <iostream>
#include <algorithm>
using namespace std;
void sort_int_arr(int arr[],int size)
{
	sort(arr,arr+size);
}
void sort_double_arr(double arr[],int size)
{
	sort(arr,arr+size);
}
void display_int_arr(int arr[],int size)
{
	for(int i=0;i<size;i++)
	{
		cout<<arr[i]<<" ";
	}
	cout<<endl;
}
void display_double_arr(double arr[],int size)
{
	for(int i=0;i<size;i++)
	{
		cout<<arr[i]<<" ";
	}
	cout<<endl;
}

int main()
{
	int size;
	cout<<"enter the size of the integer array:";
	cin>>size;
	int* intarray=new int[size];
	cout<<"enter "<<size<<" integer elements: ";
	for(int i=0;i<size;i++)
	{
		cin>>intarray[i];
	}
	cout<<"original integer array: ";
	display_int_arr(intarray,size);
	sort_int_arr(intarray,size);
	cout<<"sorted integer array: ";
	display_int_arr(intarray,size);
	delete[] intarray;
	int size1;
	cout<<"enter the size of the double array:";
	cin>>size1;
	double* doublearray=new double[size1];
	cout<<"enter "<<size1<<" double elements:";
	for(int i=0;i<size1;i++)
	{
		cin>>doublearray[i];
	}
	cout<<"original array: ";
	display_double_arr(doublearray,size1);
	sort_double_arr(doublearray,size1);
	cout<<"sorted double array: ";
	display_double_arr(doublearray,size1);
	delete[] doublearray;
	return 0;
	
}
