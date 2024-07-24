//7.	Write a program in C++ to find the sum of n natural numbers using WHILE loop?
#include <iostream>
using namespace std;
int main()
{
	int n;
	cout<<"enter a positive integer :";
	cin>>n;
	int sum=0;
	int i=1;
	while(i<=n)
	{
		sum+=i;
		i++;
	}
	cout<<"sum of first"<<n<<" natural numbers is: "<<sum<<endl;
	return 0;
}
