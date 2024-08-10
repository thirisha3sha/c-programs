//3.	Write a c++ program to create a class for a rectangle with a constructor and a destructor
#include <iostream>
using namespace std;
class rectangle{
	private:
		double width,height;
	public:
		rectangle(double w,double h)
		{
			width=w;
			height=h;
		}
		~rectangle()
		{
			cout<<"rectangle object is deleted!!";
		}
		double area()
		{
			return width*height;
		}
		double perimeter()
		{
			return 2*(height*width);
		}
};
int main()
{
	double width,height;
	cout<<"enter the width and height of rectangle:";
	cin>>width>>height;
	rectangle obj(width,height);
	cout<<"area of rectangle:"<<obj.area()<<endl;
	cout<<"perimeter of rectangle:"<<obj.perimeter()<<endl;
	return 0;
}
