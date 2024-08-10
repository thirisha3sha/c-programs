//9.	write a c++ program to overload a function to add two integer numbers and two floating point number separately
#include <iostream>
using namespace std;
class add{
	public:
		int operator()(int a,int b)
		{
			return a+b;
		}
		float operator()(float a,float b)
		{
			return a+b;
		}
};
int main()
{
	int n1,n2;
	float f1,f2;
	add a;
	cout<<"enter twon integers:";
	cin>>n1>>n2;
	cout<<"enter two float numbers:";
	cin>>f1>>f2;
	int int_sum=a(n1,n2);
	float float_sum=a(f1,f2);
	cout<<"sum of two integers:"<<int_sum<<endl;
	cout<<"sum of two float numbers:"<<float_sum<<endl;
	return 0;
}
