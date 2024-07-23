//2.	Write C++ Program to display the cube of the number up to a given integer using constructor overloading
#include <iostream>
using namespace std;
class cube{
	private:
		int limit;
	public:
		cube()
		{
			cout<<"no input provided\n";
		}
		cube(int n)
		{
			limit=n;
			cout<<"cubes of numbers from 1 to "<<limit<<endl;
			for(int i=1;i<=n;i++)
			{
				cout<<"cube of "<<i<<" is "<<i*i*i<<endl;
			}
		}
};
int main()
{
	int n;
	cout<<"enter the limit to print cube of numbers:";
	cin>>n;
	cube defaultcalculator;
	cube calculator(n);
	return 0;
}
