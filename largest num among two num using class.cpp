/*10.	Develop a largest class with a,b, and m as member. Use  setdata () for setting the data and  friend void  find_Max (largest)  function for  finding the largest number. 
Sample Input	Enter the first no: 52
Enter the second no: 63
Sample Output	Maximum no is 63
*/
#include <iostream>
using namespace std;
class largest{
	public:
		void setdata(int x,int y)
		{
			a=x;
			b=y;
		}
		friend void find_max(largest);
	private:
		int a,b,max;
};
void find_max(largest num)
{
	num.max=(num.a> num.b) ? num.a:num.b;
	cout<<"maximum number is:"<<num.max;
	
}
int main()
{
	largest num;
	int a,b;
	cout<<"enter the number1:";
	cin>>a;
	cout<<"enter the number2:";
	cin>>b;
	num.setdata(a,b);
	find_max(num);
	return 0;
	
}
