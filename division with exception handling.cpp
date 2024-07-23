/*4	 Write a program to illustrate division by zero exception, get the two input from the user, use divide(int, int) .
Sample Input	5,0
Sample Output	divide by zero.
*/
#include <iostream>
#include <stdexcept>
using namespace std;
int divide(int numerator,int denominator)
{
	if(denominator==0)
	{
		throw runtime_error("error:division by zero");
	}
	return numerator/denominator;
}
int main()
{
	int n1,n2;
	cout<<"enter two number to divide:";
	cin>>n1>>n2;
	try{
		float result=divide(n1,n2);
		cout<<"result of division: "<<result<<endl;
	}
	catch(const runtime_error& e)
	{
		cout<<e.what()<<endl;
	}
	return 0;
}

