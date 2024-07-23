/*4.	Write a C++ Program to find the greatest of three numbers using pointers.
Sample Input	enter the three numbers : 
35
45 
21
Sample Output	The greatest is P2: 45
*/
#include <iostream>
using namespace std;
int main()
{
	int n1,n2,n3;
	int *p1,*p2,*p3;
	cout<<"enter three numbers:";
	cin>>n1>>n2>>n3;
	p1=&n1;
	p2=&n2;
	p3=&n3;
	int *greatest=p1;
	if(*p2>*greatest)
	{
		greatest=p2;
	}
	if(*p3>*greatest)
	{
		greatest=p3;
	}
	cout<<"Greatest number is:";
	if(greatest==p1)
	{
		cout<<"number 1:"<<*greatest<<endl;
	}
	else if(greatest==p2)
	{
		cout<<"number 2:"<<*greatest<<endl;
	}
	else
	{
		cout<<"number 3:"<<*greatest<<endl;
	}
	return 0;
}
