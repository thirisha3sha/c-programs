//Write a Program to find power of any number in C++? 
#include <iostream>
using namespace std;
int main()
{
	double base,result=1;
	int exponent;
	cout<<"enter the base:";
	cin>>base;
	cout<<"enter the exponent:";
	cin>>exponent;
	bool negative_exponent(exponent<0);
	if(negative_exponent)
	{
		exponent=-exponent;
	}
	for(int i=0;i<exponent;i++)
	{
		result*=base;
	}
	if(negative_exponent)
	{
		result=1.0/result;
	}
    cout<<base<<" raised to power of "<<exponent<<" is "<<result<<endl;
	return 0;
	}

