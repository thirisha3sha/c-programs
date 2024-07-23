/*2.	Create a class named 'Rectangle' with two data members- length and breadth and a function to calculate the area which is 'length*breadth'. The class has three constructors which are :
1 - Having no parameter - values of both length and breadth are assigned zero.
2 - Having two numbers as parameters - the two numbers are assigned as length and breadth respectively.
3 - Having one number as parameter - both length and breadth are assigned that number.
Now, create objects of the 'Rectangle' class having none, one and two parameters and print their areas.
Sample Input	3,3
3
Sample Output	Area: 0
Area: 9
Area: 9
*/
#include <iostream>
using namespace std;
class rectangle{
	private:
		double length,breadth;
	public:
		rectangle()
		{
			length=0;
			breadth=0;
		}
		rectangle(double side)
		{
			length=side;
			breadth=side;
		}
		rectangle(double l,double b)
		{
			
			length=l;
			breadth=b;
		}
	    double area()
	    {
	    	return length *breadth;
		}
};
int main()
{
	double length,breadth;
	cout<<"enter length and breadth for the rectangle:";
	cin>>length>>breadth;
	rectangle rect2(length,breadth);
	cout<<"area:"<<rect2.area()<<endl;
	
	cout << "Enter a side length for a square: ";
    cin >> length;
    rectangle rect3(length);  
    cout << "Area: " << rect3.area() << endl;

    rectangle rect1;  
    cout << "Area: " << rect1.area() << endl;  

    return 0;
}
