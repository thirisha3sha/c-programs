//8.	Program to determine which number is greater among two integers
#include <iostream>
using nam12espace std;
int main(){
	int n1,n2;
	cout<<"enter two numbers:";
	cin>>n1>>n2;
	if(n1>n2)
	{
		cout<<n1<<" is greater than "<<n2;
	}
	else if(n2>n1)
	{
		cout<<n2 <<" is greater than "<<n1;
	}
	else{
		cout<<"both numbers are equal";
	}
	return 0;
}
