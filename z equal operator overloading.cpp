//4.	Write a c++ program to overload the == operator to compare two objects of a user defined class
#include <iostream>
using namespace std;
class point{
	private:
		int x,y;
	public:
		point(int a=0,int b=0)
		{
			x=a;
			y=b;
		}
		bool operator ==(point& other)
		{
			return (x==other.x && y==other.y);
		}
		void display()
		{
			cout<<"("<<x<<","<<y<<")";
		}
		void getinput()
		{
			cout<<"enter x coordinate:";
			cin>>x;
			cout<<"enter y coordinate:";
			cin>>y;
		}
};
int main()
{
	point p1,p2;
	cout<<"enter coordinates for point:\n";
	p1.getinput();
	cout<<"enter coordinates for point p2:\n";
	p2.getinput();
	if(p1==p2)
	{
		cout<<"p1 and p2 are equal"<<endl;
	}
	else
	{
		cout<<"p1 and p2 are not equal"<<endl;
	}
	return 0;
	
}
