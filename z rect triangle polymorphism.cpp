//6.	Create a base class called Shape with virtual functions area( ) and perimeter(). Derive two classes Rectangle and Triangle from the base class. Implement the area () and perimeter () functions for each class.
#include <iostream>
#include <cmath>
using namespace std;
class shape{
	public:
		virtual double area()=0;
		virtual double perimeter()=0;
		virtual ~shape()=default;
};
class rectangle:public shape{
	private:
		double width,height;
	public:
		rectangle(double w,double h)
		{
			width=w;
			height=h;	
		}
		double area() override
		{
			return width*height;
		}
		double perimeter() override
		{
		    return 2*(width+height);
		}
};
class triangle:public shape{
	private:
		double a,b,c;
	public:
		triangle(double side1,double side2,double side3)
		{
			a=side1;
			b=side2;
			c=side3;
		}
		double area() override
		{
			double s=(a+b+c)/2;
			return sqrt(s*(s-a)*(s-b)*(s-c));
		}
		double perimeter() override
		{
			return a+b+c;
		}
		
};
int main()
{
	double width,height;
	double side1,side2,side3;
	cout<<"enter the width and height of rectangle:";
	cin>>width>>height;
	shape* ptr1=new rectangle(width,height);
	cout<<"enter the 3 sides of triangle:";
	cin>>side1>>side2>>side3;
	shape* ptr2=new triangle(side1,side2,side3);
	cout<<"rectangle area:"<<ptr1->area()<<endl;
	cout<<"rectangle perimeter:"<<ptr1->perimeter()<<endl;
	cout<<"triangle area:"<<ptr2->area()<<endl;
	cout<<"triangle perimeter:"<<ptr2->perimeter()<<endl;
	delete ptr1;
	delete ptr2;
	return 0;
	
	
}
