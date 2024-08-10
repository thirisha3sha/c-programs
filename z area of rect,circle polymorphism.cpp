//10.	Create a base class called Shape with a virtual function area(). Derive two classes Rectangle and Circle from the base class. Implement the area() function for each class.
#include <iostream>
#include <cmath>
using namespace std;
class shape{
	public:
		virtual double area()=0;
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
};
class circle:public shape{
	private:
		double radius;
	public:
		circle(double r)
		{
			radius=r;
		}
		double area() override
		{
			return M_PI*radius*radius;
		}
};
int main()
{
	int choice;
	cout<<"enter 1 to calculate the area of rectangle or 2 to calaculte the area of circle:";
	cin>>choice;
	shape* ptr=NULL;
	double width,height,radius;
	if(choice==1)
	{
		cout<<"enter the width and height of the rectangle:";
		cin>>width>>height;
		ptr=new rectangle(width,height);
	}
	else if(choice==2)
	{
		cout<<"enter the radius of the circle:";
		cin>>radius;
		ptr=new circle(radius);
	}
	else
	{
		cout<<"invalid input choice!!!";
		return 1;
	}
	cout<<"area:"<<ptr->area()<<endl;
	delete ptr;
	return 0;
}
