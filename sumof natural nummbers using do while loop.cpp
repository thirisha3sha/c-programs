//Write a program in C++ to find the sum of n natural numbers using DO WHILE loop?
#include <iostream>
using namespace std;
int main()
{
	int n;
	cout<<"enter a positive number:";
	cin>>n;
	int sum=0;
	int i=0;
	do{
		sum+=i;
		i++;
	}while(i<=n);
	cout<<"sum of the first "<<n<<" natural numbers is:"<<sum<<endl;
	return 0;
}
