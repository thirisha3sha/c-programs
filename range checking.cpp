//Write a C++ program to check two given integers whether either of them is in the range 100..200 inclusive.
#include <iostream>
using namespace std;
bool range(int n)
{
	return (n>=100 && n<=200);
}
int main()
{
	int n1,n2;
	cout<<"enter the num1:";
	cin>>n1;
	cout<<"enter the num2:";
	cin>>n2;
	if(range(n1) || range(n2))
	{
		cout<<"either of the integer is in the range of 100 to 200";
	}
	else{
		cout<<"either of the integer is not in the range of 100 to 200";
	}
	return 0;
}
