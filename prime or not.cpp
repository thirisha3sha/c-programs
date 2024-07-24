//prime or not
#include <iostream>
#include <cmath>
using namespace std;
bool isprime(int n)
{
	if(n<=1)
	{
		return false;
	}
	for(int i=2;i<=sqrt(n);i++)
	{
		if(n%i==0)
		{
			return false;
		}
	}
	return true;
}
int main()
{
	int n;
	cout<<"enter a number:";
	cin>>n;
	int result=isprime(n);
	if(result)
	{
		cout<<n<<" is a prime numbner";
	}
	else{
		cout<<n<<" is not a prime number";
	}
	return 0;
}
