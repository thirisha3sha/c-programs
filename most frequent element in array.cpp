//19	Write a C++ program to find the Most Frequent Element in an Array?
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int most_frequent_element(vector<int> arr)
{
	sort(arr.begin(),arr.end());
	int mostfrequent=arr[0];
	int maxcount=1;
	int currentcount=1;
	for(int i=1;i<arr.size();i++)
	{
		if(arr[i]==arr[i-1])
		{
			currentcount++;
		}
		else{
			currentcount=1;
		}
		if(currentcount>maxcount)
		{
			maxcount=currentcount;
			mostfrequent=arr[i];
		}
	}
	return mostfrequent;
}
int main()
{
	int n;
	cout<<"enter the number of elements in the array:";
	cin>>n;
	vector<int> arr(n);
	cout<<"enter the elements of the array:";
	for(int i=0;i<n;i++)
	{
		cin>>arr[i];
	}
	int result=most_frequent_element(arr);
	cout<<"most frequent element is:"<<result<<endl;
	return 0;
}
