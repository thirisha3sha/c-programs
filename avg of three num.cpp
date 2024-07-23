//3.	Program to compute the average of three integers in c++
#include <iostream>
using namespace std;
int main()
{
	int n1,n2,n3;
	float avg;
	cout<<"enter three number:";
	cin>>n1>>n2>>n3;
	avg=(n1+n2+n3)/3;
	cout<<"average:"<<avg;
	return 0;
}
