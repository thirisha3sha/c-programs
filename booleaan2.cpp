/*Write a C++ program to check a given integer and 
return true if it is within 10 of 100 or 200.*/
#include <iostream>
#include <cmath>
using namespace std;
bool check(int n)
{
	return (abs(n-100)<=10 || abs(n-200)<=10);
}
int main()
{
	int n;
	bool result;
	cout<<"enter a number:";
	cin>>n;
	result=check(n);
	if (result)
	{
		cout<<"True"<<endl;
	}
	else
	{
		cout<<"False"<<endl;
	}
	return 0;
}
