#include<iostream>
using namespace std;
int main()
{
	int sum=0,n,i;
	cout<<"enter a number:";
	cin>>n;
	for(i=0;i<=n;i++)
	{
		sum+=i;
	}
	cout<<"sum of " << n <<" numbers is " <<sum;
	return 0;
}
