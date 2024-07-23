//4.	Write a program in C++ to find the sum of the series using the constructor overloading.
#include <iostream>
using namespace std;
class sum_of_series{
	private:
		int limit,sum;
	public:
		sum_of_series()
		{
			limit=0;
			sum=0;
			cout<<"\nsum of series upto '0' is:"<<sum<<endl;
		}
		sum_of_series(int n)
		{
			limit=n;
			sum=0;
			sum=(limit*(limit+1))/2;
			cout<<"\nsum of natural numbers upto "<<limit<<" is "<<sum<<endl;	
		}
		sum_of_series(int n,char type )
		{
			if(type=='s')
			{
				for(int i=1;i<=n;i++)
				{
					sum+=i*i;
				}
				cout<<"\nsum of sqaures of natural numbers upto "<<n<<" is "<<sum<<endl;
			}
			
		}
		sum_of_series(int n,bool iscube)
		{
			if(iscube)
			{
				for(int i=1;i<=n;i++)
				{
					sum+=i*i*i;
				}
				cout<<"\nsum of cube of natural number upto "<<n<<" is "<<sum<<endl;
			}
		}
};
int main()
{
	int n;
	cout<<"enter the limit:";
	cin>>n;
	sum_of_series object1;
	sum_of_series object2(n);
	sum_of_series object3(n,'s');
	sum_of_series object4(n,true);
	return 0;
	
}
