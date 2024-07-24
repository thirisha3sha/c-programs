//swaping of two numbers
#include<iostream>
using namespace std;
int main()
{
	int a,b,temp;
	cout<<"enter a num1:";
	cin>>a;
	cout<<"\nenter a num2:";
	cin>>b;
	cout<<"\nbefore swapping: a= " << a << " b= " << b;
	temp=a;
	a=b;
	b=temp;
	cout<<"\nafter swaping :a= "<< a <<" b= " << b;
	return 0;
	
}
