//17	Write a program to find Nth  Fibonacci Number in C++ using IF ELSE LADDER statements?
#include <iostream>
using namespace std;
int main()
{
	int n;
	cout<<"enter the position of the fibonacci number:";
	cin>>n;
	if(n==1){
		cout<<n<<"st number of fibonacci is 0"<<endl;
	}
	else if(n==2)
	{
		cout<<n<<"nd number of fibonacci is 1"<<endl;
	}
	else
	{
		int a=0,b=1,c;
		for(int i=3;i<=n;i++)
		{
			c=a+b;
			a=b;
			b=c;
		}
		cout<<n<<"th number of fibonacci is "<< c<<endl4;
	}
	return 0;
}
