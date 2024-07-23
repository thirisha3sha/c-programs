/*5.	Write a program in C++ to print a pattern of right angle triangle with a number that will repeat a number in the row by using the constructor overloading.*/
 #include <iostream>
using namespace std;
class triangle
{
	private:
		int n;
	public:
		triangle(int n)
		{
			for(int i=1;i<=n;i++)
			{
				for(int j=1;j<=i;j++)
				{
					cout<<i<<" ";
				}
				cout<<endl;
			}
		}
		triangle(int start,int n)
		{
			for(int i=start;i<start+n;i++)
			{
				for(int j=1;j<=i-start+1;j++)
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
	cout<<"enter the number of rows:";
	cin>>n;
	triangle t1(n);
	int start;
	cout<<"enter the starting num:";
	cin>>start;
	triangle t2(start,n);
	return 0;
	}
