//3.	Write a C++ program to check if a number is perfect or not using IF condition?
#include <iostream>
using namespace std;
bool is_perfect(int  n)
{
	int sum=0;
	for(int i=1;i<=n/2;i++)
	{
		if(n%i==0)
		{
			sum+=i;
		}
	}
	if(sum==n)
	{
		return true;
	}
	else
	{
		return false;
	}
}
int main()
{
	int n;
	cout<<"enter a number:";
	cin>>n;
	bool result=is_perfect(n);
	if(result)
	{
		cout<<n<<" is a perfect number";
	}
	else
	{
		cout<<n<<" is a not a perfect number";
	}
	return 0;
}
