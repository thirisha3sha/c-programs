/*Write a C++ program to compute the sum of two given integer values. 
If the two values are the same, then return triple their sum.*/
#include <iostream>
using namespace std;
int function(int a,int b)
{
	if(a==b)
	{
		return 3*(a+b);
	}
	else
	{
		return a+b;
	}
}

int main()
{
	int a,b,result;
	cout<<"enter the num1:";
	cin>>a;
	cout<<"enter the num2:";
	cin>>b;
	result=function(a,b);
	cout<<" result: "<<result;
	return 0;
	
}

