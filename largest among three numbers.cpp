// Write a C++ program to check the largest number among three given integers.
#include <iostream>
#include <algorithm>
using namespace std;
int main()
{
	int n1,n2,n3;
	cout<<"enter a num1:";
	cin>>n1;
	cout<<"enter a num2:";
	cin>>n2;
	cout<<"enter a num3:";
	cin>>n3;
	int largest=max(n1,max(n2,n3));
	cout<<"largest number is: "<<largest<<endl;
	return 0;
	
}
