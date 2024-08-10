/*3.	Create a base class called Shape with virtual functions area () and volume (). Derive two classes Sphere and Cylinder from the base class. Implement the area and volume () functions for each class*/
#include <iostream>
#include <cmath>
using namespace std;
class shape{
	public:
		virtual double area() const=0;
		virtual double volume() const=0;
};
class sphere:public shape{
	private:
		double radius;
	public:
		sphere(double r)
		{
			radius=r;
		}
		void setradius(double r)
		{
			radius=r;
		}
		double getradius()
		{
			return radius;
		}
		double area() const override
		{
			return 4*M_PI*radius*radius;
		}
		double volume() const override
		{
			return (4.0/3.0)*M_PI*radius*radius*radius;
		}
};
class cylinder:public shape{
	private:
		double radius,height;
	public:
		cylinder(double r,double h)
		{
			radius=r;
			height=h;
		}
		void setdimension(double r,double h)
		{
			radius=r;
			height=h;
		}
		double getradius()
		{
			return radius;
		}
		double getjeight()
		{
			return height;
		}
		double area() const override
		{
			return 2*M_PI*radius*(radius+height);
		}
		double volume() const override
		{
			return M_PI*radius*radius*height;
		}
};
int main()
{
	double radius,height;
	cout<<"enter radius of sphere:";
	cin>>radius;
	sphere s(radius);
	cout<<"sphere area:"<<s.area()<<endl;
	cout<<"sphere volume: "<<s.volume()<<endl;
	
	cout<<"enter radius and height of cylinder:";
	cin>>radius>>height;
	cylinder c(radius,height);
	cout<<"cylinder area:"<<c.area()<<endl;
	cout<<"cylinder volume:"<<c.volume()<<endl;
	return 0;
}
