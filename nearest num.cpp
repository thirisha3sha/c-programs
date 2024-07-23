//9.	Program to read a floating-number and round it to the nearest integer using the floor an ceil functions.
#include <iostream>
#include <cmath>
using namespace std;
int main()
{
	double num;
	int nearest;
	cout<<"enter a floating number:";
	cin>>num;
	int floor_value=floor(num);
	int ceil_value=ceil(num);
	if(num-floor_value < ceil_value-num)
	{
		
		nearest=floor_value;
	}
	else{
		nearest=ceil_value;
	}
	cout<<"the nearest integer is:"<<nearest;
	return 0;
}
