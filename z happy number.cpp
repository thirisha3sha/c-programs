//Happy number
#include<iostream>
using namespace std;
int digitsquaresum(int n)
{
	int sum=0;
	while(n>0)
	{
		int digit=n%10;
		sum+=digit*digit;
		n/=10;
	}
	return sum;
}
bool happy_num(int n)
{
	int slow=n;
	int fast=digitsquaresum(n);
	while(fast!=1 && slow!=fast)
	{
		slow=digitsquaresum(slow);
		fast=digitsquaresum(digitsquaresum(fast));
	}
	return fast==1;
}
int main()
{
	int n;
	cout<<"enter a positive number:";
	cin>>n;
	if(happy_num(n))
	{
		cout<<n<<" is happy number";
	}
	else{
		cout<<n<<" is not a happy number";
	}
	return 0;
}
