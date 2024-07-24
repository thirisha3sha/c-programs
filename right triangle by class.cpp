//Write a program in C++ to print a pattern of right angle triangle with a number that will repeat a number in the row by using the constructor overloading.
#include <iostream>
using namespace std;
class pattern{
	private:
		int limit;
	public:
		pattern()
		{
			limit=0;
		}
		pattern(int n)
		{
			limit=n;
		}
		void printpattern()
		{
			for(int i=1;i<=limit;i++)
			{
				for(int j=1;j<=i;j++)
				{
					cout<<i<<" ";
				}
				cout<<endl;
			}
		}
};
int main()
{
	int n;
	cout<<"enter the size of the right angle triangle:";
	cin>>n;
	pattern triangle(n);
	triangle.printpattern();
	return 0;
}
