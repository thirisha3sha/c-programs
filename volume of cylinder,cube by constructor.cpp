//2.	Write a program to find Cube, Cylinder using constructor overloading
#include <iostream>
#include <cmath>
using namespace std;
class volume{
	private:
		double vol;
	public:
		volume(double length)
		{
			vol=pow(length,3);
		}
		volume(double radius,double height)
		{
			vol=M_PI*pow(radius,2)*height;
		}
		void display()
		{
			cout<<vol<<endl;
		}
};
int main()
{
	double length,radius,height;
	cout<<"Enter side length of the cube:";
	cin>>length;
	volume cube(length);
	cout<<"volume of cube:";
	cube.display();
	cout<<"enter radius and height of the cylinder:";
	cin>>radius>>height;
	cout<<"volume of the cylinder:";
	volume cylinder(radius,height);
	cylinder.display();
	return 0;
}
