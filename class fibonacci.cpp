//2.	Build a class series and use member function input() for getting a number and member function  show() to print fibonacci series of a number. 
#include <iostream>
using namespace std;
class fibonacci{
	private:
		int num;
	public:
		void input()
		{
			cout<<"enter a num:";
			cin>>num;
		}
		void show()
		{
			int t1=0,t2=1,nextterm=0;
			cout<<"fibonacci series:";
			for (int i=1;i<=num;i++)
			{
				if(i==1)
				{
					cout<<t1<<" ";
					continue;
				}
				if(i==2)
				{
					cout<<t2<<" ";
					continue;
				}
				nextterm=t1+t2;
				t1=t2;
				t2=nextterm;
				cout<<nextterm<<" ";
			}
			cout<<endl;
		}
};
int main()
{
	fibonacci fibo;
	fibo.input();
	fibo.show();
	return 0;
}
	
