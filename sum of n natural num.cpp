//6.	Write a program in C++ to find the sum of n natural numbers using FOR loop?
#include <iostream>
using namespace std;
int main()
{
	int n;
	cout<<"enter a positive integer";
	cin>>n;
	int sum=0;
	for(int i=1;i<=n;i++)
	{
		sum+=i;
	}
	cout<<"sum of first "<<n<<" natural numnber is:"<<sum<<endl;
	return 0;
}
