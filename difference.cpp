/*Write a C++ program to find the absolute difference between n and 51. 
If n is greater than 51 return triple the absolute difference.*/
#include <iostream>
#include <cmath>
using namespace std;
int difference(int n)
{
	int diff=abs(n-51);
	if(n>51)
	{
		return 3* diff;
	}
	else
	{
		return diff;
	}
}
int main()
{
	int n,result;
	cout<<"enter a number: ";
	cin>>n;
	result=difference(n);
	cout<<"result: "<<result;
	return 0;
}
