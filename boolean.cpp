/*Write a C++ program to check two given integers, and 
return true if one of them is 30 or if their sum is 30.*/
#include <iostream>
using namespace std;
bool check(int a,int b)
{
	return (a==30 || b==30 || (a+b)==30);
	
}
int main()
{
	int a,b;
	bool result;
	cout<<"enter the number1:";
	cin>>a;
	cout<<"enter the number2:";
	cin>>b;
	result=check(a,b);
	if (result)
	{
		cout<<"True" << endl;
	}
	else
	{
		cout<<"False" << endl;
	}
	return 0;
}
