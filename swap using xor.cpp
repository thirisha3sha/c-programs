//10.	Program to swap two numbers using bitwise XOR operator
#include <iostream>
using namespace std;
int main()
{
	int a,b;
	cout<<"enter two numbers:";
	cin>>a>>b;
	cout<<"before swapping:a="<<a<<"  b="<<b;
	a=a^b;
	b=a^b;
	a=a^b;
	cout<<"\nafter swapping:a= "<<a<<" b="<<b;
	return 0;
}
