//Write a program in C++ to find the sum of the digits of a given number.
#include <iostream>
using namespace std;
int sum_of_digits(int n)
{
	int sum=0;
	while(n!=0)
	{
		sum+=n%10;
		n/=10;
	}
	return sum;
}
int main()
{
	int n;
	cout<<"enter a number:";
	cin>>n;
	int result=sum_of_digits(n);
	cout<<"sum of didgits "<<n<< " is "<<result<<endl;
	return 0;
}
