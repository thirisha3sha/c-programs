//41.	Find the number of occurrences of a value in an array
#include <iostream>
using namespace std;
int main()
{
	int n,value,count=0;
	cout<<"enter the size of the array:";
	cin>>n;
	int arr[n];
	cout<<"enter the elements of the array:";
	for(int i=0;i<n;i++)
	{
		cin>>arr[i];
	}
	cout<<"enter the value to count the occurences:";
	cin>>value;
	for(int i=0;i<n;i++)
	{
		if(arr[i]==value)
		{
			count++;
		}
	}
	cout<<"value "<<value<<" occurs "<<count<<" times in the array"<<endl;
	return 0;
}
