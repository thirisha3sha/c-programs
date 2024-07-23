//fibonacci series
#include<iostream>
using namespace std;
int main()
{
	int n,t1,t2,t3,i;
	cout<<"enter the number of terms:";
	cin>>n;
	t1=0;
	t2=1;
	cout<<"Fiboancci series:";
	for(i=1;i<=n;i++)
	{
		cout<< t1 <<" ";
		t3=t1+t2;
		t1=t2;
		t2=t3;
	}
	return 0;
}
