#include <iostream>
using namespace std;
int sum(int a,int b)
{
	return a+b;
}
int sum(int a,int b,int c)
{
	return a+b+c;
}
int main()
{
	int a,b,c;
	cout<<"enter the value:";
	cin>>a>>b>>c;
	cout<<"the sum is:"<<a<<","<< b<<"," << "="<<sum(a,b)<<endl;
	cout<<"sum of "<<a <<","<< b<<"," << c<<"," << "="<<sum(a,b,c)<<endl;
	return 0;
}

