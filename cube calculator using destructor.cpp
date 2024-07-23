//Write C++ Program to display the cube of the number up to a given integer using Destructor
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
		~cube()
		{
			cout<<"cubes of number from 1 to "<< limit<<endl;
			for(int i=1;i<=limit;i++)
			{
				cout<<"number: "<<i<<"  cube: "<<i*i*i<<endl;
			}
			cout<<"cube object is destroyed";
		}
};
int main()
{
	int n;
	cout<<"enter a limit to display cube:";
	cin>>n;
    cube calculate(n);
	return 0;
}
