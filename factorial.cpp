// Write a program in C++ to find the factorial of a number.
#include <iostream>
using namespace std;
int factorial(int n)
{
	if(n==0 || n==1)
	{
		return 1;
	}
	int fact=1;
	for(int i=2;i<=n;i++)
	{
		 fact*=i;
	}
	return fact;
}
int main()
{
	int n;
	cout<<"enter the number to find factorial:";
	cin>>n;
	if(n<0){
		cout<<"factorial is not defined for negative number"<<endl;
	}
	else{
		int result=factorial(n);
		cout<<"factorial of "<<n<<" is "<<result<<endl;
	}
	return 0;
}
