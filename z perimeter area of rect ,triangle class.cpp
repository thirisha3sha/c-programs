#include <iostream>
#include <cmath>
using namespace std;
class shape{
	protected:
		double height;
		double width;
	public:
		shape(double h,double w){
			height=h;
			width=w;
		}
		virtual double area() const=0;
		virtual double perimeter() const=0;
};
class rectangle:public shape{
	public:
		rectangle(double h,double w):shape(h,w){}
		double area() const override
		{
		return height*width;
		}
		double perimeter() const override
		{
			return 2*(height+width);
		}
};
class triangle:public shape{
	public:
		triangle(double h,double w):shape(h,w){}
		double area() const override
		{
			return 0.5*height*width;
		}
		double perimeter() const override
		{
			return height+width+sqrt(height*height + width*width);
		}
};
int main()
{
	double height,width;
	cout<<"enter height and width of rectangle:";
	cin>>height>>width;
	rectangle obj1(height,width);
	cout<<"rectangle area: "<<obj1.area()<<endl;
	cout<<"rectangle perimeter:"<<obj1.perimeter()<<endl;
	cout<<"enter the height and width of triangle:";
	cin>>height>>width;
	triangle obj2(height,width);
	cout<<"triangle area: "<<obj2.area()<<endl;
	cout<<"triangle perimeter: "<<obj2.perimeter()<<endl;
	return 0;
}





























































/*1.	Create a base class called Shape with data members for height and width.
 Derive two classes Rectangle and Triangle from the base class. Write member functions to calculate the area and perimeter of each class*/
