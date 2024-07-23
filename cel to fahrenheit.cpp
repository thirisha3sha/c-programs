//celsius to fahrenheit
#include <iostream>
using namespace std;
double convertor(double celsius)
{
	return (celsius*(9.0/5.0)+32.0);
}
int main()
{
	double celsius,fahrenheit;
	cout<<"enter temperature in celsius:";
	cin>>celsius;
	fahrenheit=convertor(celsius);
	cout<<"temperature in fahrenheit is:"<<fahrenheit <<" dgree fahrenheit"<<endl;
	return 0;
}
