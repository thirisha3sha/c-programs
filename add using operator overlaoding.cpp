//5.	Create a class called add for addition of two numbers using operator overloading
#include <iostream>
using namespace std;
class add
{
	private:
		int value;
	public:
		add(int v=0)
		{
			value=v;
		}
		add operator+(add& other)
		{
			return add(this->value + other.value);
		}
		void display()
		{
			cout<<value<<endl;
		}
};
int main()
{
	int n1,n2;
	cout<<"enter two numbers:";
	cin>>n1>>n2;
	add a1(n1);
	add a2(n2);
	add result=a1+a2;
	cout<<"sum: ";
	result.display();
	return 0;
}
