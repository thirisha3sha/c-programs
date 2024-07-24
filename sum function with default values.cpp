#include <iostream>
using namespace std;
int sum(int a,int b,int c=0,int d=0)
{
	return a+b+c+d;
}
int main()
{
	int a,b,c,d;
	cout<<"enter the value:";
	cin>>a>>b>>c>>d;
	int result=sum(a,b,c,d);
	cout<<"the sum is:"<<result<<endl;
	return 0;
}

