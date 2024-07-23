//13.	Program to check the integer is divisible by 3 or not using ternary conditional operator
#include <iostream>
using namespace std;
string check(int num){
	return (num%3==0)?"divisible by 3":"not divisible by 3";
}
int main()
{
	int n;
	cout<<"enter an integer:";
	cin>>n;
	cout<<n<<" is "<<check(n)<<endl;
	return 0;
}
