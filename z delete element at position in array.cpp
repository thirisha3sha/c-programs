//37.	Program to Delete an element in an array at a specific position
#include <iostream>
using namespace std;
int main()
{
	int n,pos;
	cout<<"enter the size of the array: ";
	cin>>n;
	int arr[n];
	cout<<"enter the elements of the array:";
	for(int i=0;i<n;i++)
	{
		cin>>arr[i];
	}
	cout<<"enter the position of element to be deleted:";
	cin>>pos;
	if(pos<0||pos>n)
	{
		cout<<"invalid positionm!";
		return 1;
	}
	for(int i=pos;i<n-1;i++)
	{
		arr[i]=arr[i+1];
	}
	cout<<"array after deletion:";
	for(int i=0;i<n-1;i++)
	{
		cout<<arr[i]<<" ";
	}
	cout<<endl;
	return 0;
}
