/*8.	Write  a C++ program to  find the sum of two numbers using  the concept of C++ multiple inheritance.
Sample Input	enter value of x: 5
enter value of y: 4
Sample Output	Sum = 9
*/
#include <iostream>
using namespace std;
class a
{
	protected:
		int x;
	public:
		void setx(int value)
		{
			x=value;
		}
};
class b{
	protected:
		int y;
	public:
		void sety(int value)
		{
			y=value;
		}
};
class c:public a,public b{
	public:
		void sum()
		{
			cout<<"sum="<<x+y<<endl;
		}
};
int main()
{
	c obj;
	int x,y;
	cout<<"enter value of x:";
	cin>>x;
	obj.setx(x);
	cout<<"enter value of y:";
	cin>>y;
	obj.sety(y);
	obj.sum();
	return 0;
}
