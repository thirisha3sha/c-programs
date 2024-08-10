//38.	Find the sum of all elements in an array
#include <iostream>
using namespace std;
int main()
{
	int n;
	cout<<"enter the size of the array:";
	cin>>n;
	int arr[n];
	cout<<"enter the elements of the array:";
	for(int i=0;i<n;i++)
	{
		cin>>arr[i];
	}
	int sum=0;
	for(int i=0;i<n;i++)
	{
		sum+=arr[i];
	}
	cout<<"sum of all elements in the array:"<<sum<<endl;
	return 0;
}
