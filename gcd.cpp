//Write a program in C++ to find the Greatest Common Divisor (GCD) of two numbers.
#include <iostream>
using namespace std;
int gcd(int a,int b)
{
	while(b!=0)
	{
		int temp=b;
		b=a%b;
		a=temp;
	}
	return a;
}
int main()
{
	int a,b;
	cout<<"enter two numbers:";
	cin>>a>>b;
	int result=gcd(a,b);
	cout<<"GCD of "<<a << " and "<< b<< " is "<<result<<endl;
	return 0;
}
