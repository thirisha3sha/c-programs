//Write a C++ program to check which number is closest to the value 100 among two given integers. Return 0 if the two numbers are equal.
#include <iostream>
#include <cmath>
using namespace std;
int close_num(int n1,int n2)
{
	int diff1=abs(100-n1);
	int diff2=abs(100-n2);
	if(diff1<diff2)
	{
		return n1;
	}
	else if(diff2<diff1)
	{
		return n2;
	}
	else
	{
		return 0;
	}
}
int main()
{
	int n1,n2;
	cout<<"enter two integers:";
	cin>>n1>>n2;
	int closest_num=close_num(n1,n2);
	if(closest_num==0)
	{
		cout<<"both numbers are equidistant from 100";
	}
	else{
		cout<<"the number close to 100 is:"<<closest_num<<endl;
	}
	return 0;
}
