/*Write a C++ program to check if a given positive number is a multiple of 3 or a multiple of 7.*/
#include <iostream>
using namespace std;
bool multiple(int n)
{
	if(n%3==0 && n%7==0)
	{
		cout<<n<<" is a multiple of 7 and 3";
	}
	else if(n%3==0)
	{
		cout<<n<<" is a multiple of  3";
	
	}
	else if(n%7==0){
		cout<<n<<" is a multiple of 7";
	}
	else{
		cout<<n<<" is not divisble by both 7 and 3";
	}
}
int main()
{
	int n;
	bool result;
	cout<<"enter a number to check multiple of 7 and 3:";
	cin>>n;
	result=multiple(n);
	return 0;
}
