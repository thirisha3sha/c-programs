//2.	Develop a c++ program for adding the number using function overloading concept
#include <iostream>
using namespace std;
int add(int a,int b)
{
	return a+b;
}
int add(int a,int b,int c)
{
	return a+b+c;
}
double add(double a,double b)
{
	returon a+b;
}
double add(double a, double b, double c) 
{
    return a + b + c;
}
int main()
{
    int int1, int2, int3;
    double double1, double2, double3;	
    cout << "Enter two integers: ";
    cin >> int1 >> int2;
    cout << "Sum of two integers: " << add(int1, int2) << endl;
    cout << "Enter three integers: ";
    cin >> int1 >> int2 >> int3;
    cout << "Sum of three integers: " << add(int1, int2, int3) << endl;
    cout << "Enter two doubles: ";
    cin >> double1 >> double2;
    cout << "Sum of two doubles: " << add(double1, double2) << endl;
    cout << "Enter three doubles: ";
    cin >> double1 >> double2 >> double3;
    cout << "Sum of three doubles: " << add(double1, double2, double3) << endl;
    return 0;
}

