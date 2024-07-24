//Write a program in C++ to calculate the sum of the series (1*1) + (2*2) + (3*3) + (4*4) + (5*5) + ... + (n*n).
#include <iostream>
using namespace std;
int sum_of_series(int n)
{
	int sum=0;
	for(int i=0;i<=n;i++)
	{
		sum+=i*i;
	}
	return sum;
}
int main()
{
	int n;
	cout<<"enter a number for series of sum:";
	cin>>n;
	int result=sum_of_series(n);
	cout<<"sum of the series (1*1) + (2*2)....("<<n<<"*"<<n<<")"<<" is "<<result<<endl;
	return 0;
}
