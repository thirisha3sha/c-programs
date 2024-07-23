//Write a C++ program to find the number and sum of all integer between 100 and 200 which are divisible by 9 with constructor destructor.
#include <iostream>
using namespace std;
class divisible_by_nine
{
	private:
		int sum,count;
	public:
		divisible_by_nine()
		{
			int sum=0,count=0;
			cout<<"diviaible by 9 object created."<<endl;
			check_divisible();
		}
		void check_divisible()
		{
			cout<<"numbers between 100 to 200 that are divisible by 9 is : "<<endl;
			for(int i=100;i<=200;i++)
			{
				if(i%9==0)
				{
					cout<<i <<" ";
					sum+=i;
					count++;
				}
			}
			cout<<endl;
		}
		void display()
		{
			cout<<"total count of numbers divisible by 9 is :"<<count<<endl;
			cout<<"sum of numbers divisible by 9:"<<sum<<endl;
		}
		~divisible_by_nine()
		{
			cout<<"divisible by 9 checker object destroyed."<<endl;
		}
};
int main()
{ 
	divisible_by_nine object;
    object.display();
	return 0;
}
