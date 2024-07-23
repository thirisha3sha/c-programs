//Write a program in C++ to print Floyd's Triangle by using the constructor destructor
#include <iostream>
using namespace std;
class triangle
{
	private:
		int r,n;
	public:
		triangle(int rows)
		{
			r=rows;
			n=1;
			cout<<"Floyd's triangle: "<<endl;
			for(int i=1;i<=r;i++)
			{
				for(int j=1;j<=i;j++)
				{
					cout<<n<<" ";
					n++;
				}
				cout<<endl;
			}
		}
		~triangle()
		{
			cout<<"floyd triangle is destroyed"<<endl;
		}
};
int main()
{
	int rows;
	cout<<"enter the number of rows for floyd's triangle:";
	cin>>rows;
	triangle floyd(rows);
	return 0;
	
}
