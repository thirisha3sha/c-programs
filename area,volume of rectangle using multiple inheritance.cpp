/*2.	Write a C++ program to demonstrate multiple inheritance by creating a class cuboid which extends class rectangle, class shape. It calculates area and volume. Use appropriate member functions  and member variables. 

Sample Input	LENGTH = 10
BREATH = 10
HEIGHT = 10
Sample Output	AREA OF RECTANGLE = 100
VOLUME OF RECTANGLE = 1000
*/
#include <iostream>
using namespace std;
class shape{
	public:
		virtual void display()=0;
};
class rectangle:public shape{
	protected:
		double length,breadth;
	public:
		rectangle(double l=0,double b=0){
			length=l;
			breadth=b;
		}
	void setdata(double l,double b)
	{
		length=l;
		breadth=b;
	}
	double area()
	{
		return length*breadth;
	}
	void display() override{
	cout<<"area of rectangle= "<<area()<<endl;
	}
};
class cuboid:public rectangle{
	private:
		double height;
	public:
		cuboid(double l=0,double b=0,double h=0):rectangle(l,b),height(h){}
		void setdata(double l,double b,double h)
		{
			length=l;
			breadth=b;
			height=h;
		}
		double volume()
		{
			return length*breadth*height;
		}
		void display() override{
		rectangle::display();
		cout<<"volume of cuboid= "<<volume()<<endl;
		
	}
		
};

	
int main()
{
	double length,breadth,height;
	cout<<"enter length of rectangle:";
	cin>>length;
	cout<<"enter length of breadth:";
	cin>>breadth;
	cout<<"enter the height of rectangle:";
	cin>>height;
	cuboid obj(length,breadth,height);
	obj.display();
	return 0;
}
