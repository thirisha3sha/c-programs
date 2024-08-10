//20.	Sum of all digits using while loop (n=123 output:1+2+3=6)
#include <iostream>
using namespace std;
int main()
{
	int n,sum=0;
	cout<<"enter a positive integer:";
	cin>>n;
	while(n!=0)
	{
		sum+=n%10;
		n/=10;
	}
	cout<<"sum of all digits: "<<sum<<endl;
	return 0;
}
