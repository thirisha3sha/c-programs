/*6.	C++ Program that illustrates how to use 'this' pointer.
Sample Input	The input given in the program itself
Sample Output	x = 20
*/
#include <iostream>
using namespace std;
class example
{
	private:
		int x;
	public:
		void setx(int x)
		{
			this->x=x;
		}
		void printx()
		{
			cout<<"x= "<<this->x <<endl;
		}
};
int main()
{
	example obj;
	int input;
	cout<<"enter a value for x:";
	cin>>input;
	obj.setx(input);
	obj.printx();
	return 0;
}
