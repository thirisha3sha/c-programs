/*3.	Develop a C++ code to find to get square and cube of a number using Hierarchical inheritance

Sample Input /ouput	Enter an integer number: 10
Square of 10 is: 100
Enter an integer number: 20
Cube   of 10 is: 8000
*/
#include <iostream>
using namespace std;
class number{
	protected:
		int num;
	public:
		void set_num(int n)
		{
			num=n;
		}
	
};
class square:public number{
	public:
		int getsquare()
		{
			return num*num;
		}
};
class cube:public number{
	public:
		int getcube()
		{
			return num*num*num;
		}
};
int main()
{
	square sq;
	cube cb;
	int n;
	cout<<"enter an integer number:";
	cin>>n;
	sq.set_num(n);
	cout<<"square of "<<n<<" is :"<<sq.getsquare()<<endl;
	cout<<"enter an integer number: ";
	cin>>n;
	cb.set_num(n);
	cout<<"cube of  "<<n<<" is:"<<cb.getcube()<<endl;
	return 0;
}
