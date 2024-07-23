/*1.	Write a program to find area of Circle, Rectangle and Triangle using constructor overloading.
Sample Input	3
6,7
2,3
Sample Output	28.26
42
3
*/
#include <iostream>
#include <cmath>
using namespace std;
class shape
{
	public:
		double area;
		shape(double radius)
		{
			area=M_PI*radius*radius;
		}
		shape(int base,int height)
		{
			area=0.5*base*height;
		}
		shape(double length,double breadth)
		{
			area=length*breadth;
		}
		void display()
		{
			cout<<area<<endl;
		}
};
int main()
{
	double radius,length,breadth;
	int base,height;
	cout<<"enter radius of the circle:";
	cin>>radius;
	cout<<"area of circle:";
    shape circle(radius);
    circle.display();
    cout<<"enter length and breadth of the rectangle:";
	cin>>length>>breadth;
	cout<<"area of rectangle:";
    shape rectangle(length,breadth);
    rectangle.display();
    cout<<"enter base and height of the triangle:";
	cin>>base>>height;
	cout<<"area of triangle:";
    shape triangle(radius);
    triangle.display();
    return 0;
}
