//37.	Program to Delete an element in an array 
#include <iostream>
using namespace std;
int main()
{
	int n,pos=-1,element;
	cout<<"enter the size of the array:";
	cin>>n;
	int arr[n];
	cout<<"enter the elements of the array: ";
	for(int i=0;i<n;i++)
	{
		cin>>arr[i];
	}
	cout<<"enter the element to be deleted:";
	cin>>element;
	for(int i=0;i<n;i++)
	{
		if(arr[i]==element)
		{
			pos=i;
			break;
		}
	}
	if(pos==-1)
	{
		cout<<"element is not found!";
		return 1;
	}
	for(int i=pos;i<n-1;i++)
	{
		arr[i]=arr[i+1];
	}
	cout<<"array after deleting specific element:";
	for(int i=0;i<n-1;i++)
	{
		cout<<arr[i]<<" ";
	}
	cout<<endl;
	return 0;
}
