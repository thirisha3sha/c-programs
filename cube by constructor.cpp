//Write C++ Program to display the cube of the number up to a given integer using constructor overloading
#include <iostream>
using namespace std;
class cube
{
	private:
		int limit;
	public:
		cube(int n)
		{
			limit=n;	
		}
		void display()
		{
			for(int i=1;i<=limit;i++)
			{
				cout<<"number: "<<i<<"  cube: "<<i*i*i<<endl;
			}
		}
};
int main()
{
	int n;
	cout<<"enter a limit to display cube:";
	cin>>n;
	cube calculate(n);
	calculate.display();
	return 0;
}
