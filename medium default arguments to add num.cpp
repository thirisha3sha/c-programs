/*1.	Develop a c++ program for default arguments
Sample Input	Enter the value: 10 15 25 30
Sample Output	80*/
#include <iostream>
using namespace std;
int addnum(int a,int b,int c,int  d=0)
{
	return a+b+c+d;
}
int main()
{
	int a,b,c,d;
	cout<<"enter the values(3 0r 4):";
	cin>>a>>b>>c;
	if(cin.peek()!='\n')
	{
		cin>>d;
	}
	else{
		d=0;
	}
	int result=addnum(a,b,c,d);
	
	return 0;
}
