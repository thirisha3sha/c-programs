#include <iostream>
using namespace std;
int main()
{
	int n;
	cout<<"enter the size of the array: ";
	cin>>n;
	int arr[n];
	cout<<"enter the elements of the array:";
	for(int i=0;i<n;i++)
	{
		cin>>arr[i];
	}
	int largest=arr[0],second_largest=arr[-1];
	for(int i=1;i<n;i++)
	{
		if(arr[i]>largest)
		{
			second_largest=largest;
			largest=arr[i];
		}
		else if(arr[i]>second_largest && arr[i]!=largest)
		{
			second_largest=arr[i];
		}
	}
	if(second_largest==-1)
	{
		cout<<"no second largest element";
	}
	else{
		cout<<"second largest elemesnt array is:"<<second_largest<<endl;
		
	}
	return 0;
}























































































//40.	Find the second largest element in an array
