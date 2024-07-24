//1.	Find the Square root of a number in C++ using IF-ELSE statement?
#include <iostream>
#include <cmath>
using namespace std;
int main()
{
	double n,square_root;
	cout<<"enter a numbner:";
	cin>>n;
	if(n<0)
	{
		cout<<"0";
	}
	else
	{
		square_root=sqrt(n);
		cout<<"square root of "<<n<<" is "<<square_root<<endl;
	}
	return 0;
}
