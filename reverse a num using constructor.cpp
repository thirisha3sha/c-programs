//6.	Write a C++ Program to display the reverse of a number using the constructor overloading
#include <iostream>
using namespace std;
class check{
	private:
		int num;
	public:
		check()
		{
			num=0;
		}
		void setnum(int n)
		{
			num=n;
		}
		int reversenumber()
		{
			int reverse_num=0;
			int original=num;
			while(original!=0)
			{
				int remainder=original%10;
				reverse_num=reverse_num*10 + remainder;
				original/=10;
			}
			return reverse_num;
		}
		
};
int main()
{
	int n;
	cout<<"enter a number to reverse:";
	cin>>n;
	check object;
	object.setnum(n);
	int result=object.reversenumber();
	cout<<"reverse of "<<n<<" is:"<<result<<endl;
	return 0;
}
