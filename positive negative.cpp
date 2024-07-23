//7.	Program to check the number is positive, negative or zero
#include <iostream>
using namespace std;
int main()
{
	int n;
	cout<<"enter a num to check positive or negative:";
	cin>>n;
	if(n<0)
	{
		cout<<n<<"  is a negative number";
	}
	else{
		cout<<n<<"  is a positive number";
	}
	return 0;
}
