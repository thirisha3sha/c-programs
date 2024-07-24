/*1.	Develop a c++ program for default arguments
Sample Input	Enter the value: 10 15 25 30
Sample Output	80*/
#include <iostream>
using namespace std;
int addnum(int a=0,int b=0,int c=0,int d=0)
{
	return a+b+c+d;
}
int main()
{
	int a,b,c,d;
	cout<<"enter the values(3 0r 4):";
	cin>>a>>b>>c>>d;
	int result=addnum(a,b,c,d);
	cout<<"the sum is: "<<result<<endl;
	return 0;
}
