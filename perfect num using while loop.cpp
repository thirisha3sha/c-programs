//10.	Write a C++ program to check if a number is perfect or not using WHILE condition?
#include <iostream>
using namespace std;
bool is_perfect(int n)
{
	int sum=0;
	int i=1;
	while (i<=n/2)
	{
		if(n%i==0)
		{
			sum+=i;
		}
		i++;
	}
	return (sum==n);
}
int main()
{
	int n;
	cout<<"enter a positive integer:";
	cin>>n;
	if(is_perfect(n))
	{
		cout<<n<<" is a perfect number"<<endl;
		
	}
	else
	{
		cout<<n<<"is a not a perfect number"<<endl;
	}
	return 0;
}
