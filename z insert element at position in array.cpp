//36.	Program to insert an element in an array at a specific position
#include <iostream>
using namespace std;
int main()
{
	int n,pos,element;
	cout<<"enter the size of the array: ";
	cin>>n;
	int arr[n+1];
	cout<<"enter the elements of the array:";
	for(int i=0;i<n;i++)
	{
		cin>>arr[i];
	}
	cout<<"enter the element to insert:";
	cin>>element;
	cout<<"enter the position to insert:";
	cin>>pos;
	if(pos<0||pos>n)
	{
		cout<<"invalid position!"<<endl;
		return 1;
	}
	for(int i=n;i>pos;i--)
	{
		arr[i]=arr[i-1];
	}
	arr[pos]=element;
	cout<<"array after insertion :";
	for(int i=0;i<=n;i++)
	{
		cout<<arr[i]<<" ";
	}
	cout<<endl;
	return 0;
}
