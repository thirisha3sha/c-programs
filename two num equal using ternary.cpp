//12.	Program to check two numbers are equal or not using ternary conditional operator
#include <iostream>
using namespace std;
int main()
{
	int n1,n2;
	cout<<"enter two numbers:";
	cin>>n1>>n2;
	string result=(n1==n2)?"numbers are equal":"numbers are not equal";
	cout<<result;
	return 0;
}
