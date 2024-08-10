//strong number
#include <iostream>
using namespace std;
int factorial(int n)
{
	int fact=1;
	for(int i=1;i<=n;i++)
	{
		fact*=i;
	}
	return fact;
}
bool strong_num(int n)
{
	int temp=n,sum=0;
	while(temp>0)
	{
		int digit=temp%10;
		sum+=factorial(digit);
		temp/=10;
	}
	return sum==n;
}
int main()
{
	int n;
	cout<<"enter a number:";
	cin>>n;
	if(strong_num(n))
	{
		cout<<n<<" is a strong number";
	}
	else{
		cout<<n<<" is not a strong number";
	}
	return 0;
}
