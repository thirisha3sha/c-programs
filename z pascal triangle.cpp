//pascal triangle
#include <iostream>
using namespace std;
int main()
{
	int rows;
	cout<<"enter the number of rows:";
	cin>>rows;
	for(int i=0;i<rows;i++)
	{
		for(int j=0;j<rows-i-1;j++)
		{
			cout<<" ";
		}
	int val=1;
	for(int j=0;j<=i;j++)
	{
		cout<<val<<" ";
		val=val*(i-j)/(j+1);
	}
	cout<<endl;
   }
   return 0;
	
}
