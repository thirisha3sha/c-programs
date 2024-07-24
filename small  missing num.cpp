//5.	Write a C++ program to find the smallest element missing in a sorted array using WHILE loop?
#include <iostream>
#include <algorithm>
using namespace std;
int small_missing_element(int a[],int n)
{
	sort(a,a+n);
	for(int i=0;i<n;i++)
	{
		if(a[i]!=i+1)
		{
			return i+1;
		}
	}
	return n+1;
}



int main()
{
	int n;
	cout<<"enter the size of the array:";
	cin>>n;
	int a[n];
	cout<<"enter the element of the array in any order:";
	for(int i=0;i<=n;i++)
	{
		cin>>a[i];
	}
	int result=small_missing_element(a,n);
	cout<<"the smallest missing element is:"<<result<<endl;
	return 0;
}
