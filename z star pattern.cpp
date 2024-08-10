//star pattern
#include <iostream>
using namespace std;
void pattern(int n)
{
	for(int i=1;i<=n;i++)
	{
		for(int j=1;j<=i;j++)
		{
			cout<<"*";
		}
		cout<<endl;
	}
}
int main()
{
	int n;
	cout<<"enter the number of lines: ";
	cin>>n;
	pattern(n);
	return 0;
}
