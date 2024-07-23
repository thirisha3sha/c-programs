//division
#include<iostream>
using namespace std;
int main()
{
	int a,b;
    float result;
	cout<<"enter a num1:";
	cin>>a;
	cout<<"enter a num2:";
	cin>>b;
	result=static_cast<double>(a)/b;
	cout<<a<< "/"<<b<<"="<<result;
	return 0;
}
