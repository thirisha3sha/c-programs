//3.	Write a c++ program to overload the << operator to print contents of a user defined class
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
		void set(int a,int b)
		{
			x=a;
			y=b;
		}

	   friend ostream& operator <<(ostream& out,point& p);
	   friend istream& operator>>(istream& in,point& p);
};
ostream& operator <<(ostream& out,point& p)
	{
		out<<"("<<p.x<<","<<p.y<<")";
		return out;
	}
istream& operator>>(istream& in,point& p)
{
		in>>p.x>>p.y;
		return in;
	}
int main()
{
	point p1,p2;
	cout<<"enter coordinates for point 1:";
	cin>>p1;
	cout<<"enter coordiantes for point 2:";
	cin>>p2;
	cout<<"point 1: "<<p1<<endl;
	cout<<"point 2: "<<p2<<endl;
	return 0;
}
