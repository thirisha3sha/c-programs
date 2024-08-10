//8.	write a c++ program to overload the – operator to subtract two variable
#include <iostream>
using namespace std;
class number{
	private:
		int n;
	public:
		number(int input=0)
		{
			n=input;
		}
		number operator -(number& obj)
		{
			return number(n+obj.n);
		}
		void display()
		{
			cout<<n<<endl;
		}
};
int main()
{
	int n1,n2;
	cout<<"enter the first number:";
	cin>>n1;
	cout<<"enter the second number:";
	cin>>n2;
	number n3;
	n3=n1-n2;
	cout<<"sum of two numbers: ";
	n3.display();
	return 0;
}
