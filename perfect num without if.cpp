//3.	Write a C++ program to check if a number is perfect or not using IF condition?
#include <iostream>
using namespace std;
bool isperfect(int n)
{
	int sum=0;
	for(int i=1;i<=n/2;i++)
	{
		if(n%i==0)
		{
			sum+=i;
		}
	}
	return (sum==n);
}
int main()
{
	int n;
	cout<<"enter a number:";
	cin>>n;
	bool result=isperfect(n);
	cout<<n<<" is"<< (result ? "  a perfect number":" not a perfect number");
	return 0;
}
