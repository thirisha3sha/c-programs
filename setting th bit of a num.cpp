//2	Write a program to set Nth bit of a number in C++ using control statements, if necessary? 
#include <iostream>
using namespace std;
int main()
{
	int n,bitNumber;
	cout<<"enter a number:";
	cin>>n;
	cout<<"enter bit number:";
	cin>>bitNumber;
	if(bitNumber<0 || bitNumber>=sizeof(int)*8)
	{
		cout<<"invalid input"<<endl;
		return 1;
	}
	n|=(1<<bitNumber);
	cout<<"bit set successfully"<<endl;
	cout<<"answer:"<<n<<endl;
	return 0;
}

