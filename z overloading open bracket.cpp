//7.	Write a c++ program to overload the () to call a function with arguments
#include <iostream>
using namespace std;
class function{
	public:
		int operator()(int a,int b)
		{
			return add(a,b);
		}
		int add(int a,int b)
		{
			return a+b;
		}
};
int main()
{ 
	function caller;
	int n1,n2;
	cout<<"enter the first number:";
	cin>>n1;
	cout<<"enter the second numbre:";
	cin>>n2;
	int sum=caller(n1,n2);
	cout<<"sum: "<<sum<<endl;
	return 0;
}
