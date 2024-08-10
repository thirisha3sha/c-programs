//4.	Find minimum and maximum element in an array using function
#include <iostream>
#include <string>
using namespace std;
int minimum(int arr[],int n)
{
	int min=arr[0];
	for(int i=0;i<n;i++)
	{
		if(arr[i]<min)
		{
			min=arr[i];
		}
	}
	return min;
}
int maximum(int arr[],int n)
{
	int max=arr[0];
	for(int i=0;i<n;i++)
	{
		if(arr[i]>max)
		{
			max=arr[i];
		}
	}
	return max;
}
int main()
{
	int n;
	cout<<"enter the size of array:";
	cin>>n;
	int arr[n];
	cout<<"enter the number of elements of the array:";
	for(int i=0;i<n;i++)
	{
		cin>>arr[i];
	}
	int min=minimum(arr,n);
	int max=maximum(arr,n);
	cout<<"minimum element: "<<min<<endl;
	cout<<"maximum element: "<<max<<endl;
	return 0;
}
