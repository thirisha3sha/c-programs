//Write a C++ program to check if it is possible to add two integers to get the third integer from three given integers.
#include <iostream>
using namespace std;
bool possible_third_int(int a,int b,int c)
{
	return (a+b==c)||(a+c==b)||(b+c==a);
}
int main()
{
	int a,b,c;
	cout<<"enter the three integers:";
	cin>>a>>b>>c;
	if(possible_third_int(a,b,c))
	{
		cout<<"it is possible to add two integers to get the third integer";
	}
	else{
		cout<<"it is not possible to add two integers to get the third integer value";
	}
    return 0;
}

