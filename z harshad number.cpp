//24.	Harshad number
#include <iostream>
using namespace std;
int main()
{
	int n,sum=0;
	cout<<"enter a number:";
	cin>>n;
	int temp=n;
	while(temp!=0)
	{
		sum+=temp%10;
		temp/=10;
	}
	if(n%sum==0){
		cout<<"it is harshad number";
	}
	else{
		cout<<"it is not harshad number";
	}
	return 0;
}
