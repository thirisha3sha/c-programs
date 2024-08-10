//add two matrices
#include <iostream>
using namespace std;
int main()
{
	int rows,cols;
	cout<<"enter the number of rows: ";
	cin>>rows;
	cout<<"enter the number of columns: ";
	cin>>cols;
	int mat1[rows][cols],mat2[rows][cols],sum[rows][cols];
	cout<<"enter elements of the first matrix1:";
	for(int i=0;i<rows;i++)
	{
		for(int j=0;j<cols;j++)
		{
			cin>>mat1[i][j];
		}
	}
	cout<<"enter elements of the second matrix2: ";
	for(int i=0;i<rows;i++)
	{
		for(int j=0;j<cols;j++)
		{
			cin>>mat2[i][j];
		}
	}
	for(int i=0;i<rows;i++)
	{
		for(int j=0;j<cols;j++)
		{
			sum[i][j]=mat1[i][j]+mat2[i][j];
		}
	
	}
	cout<<"sum of the two matrices:\n";
	for(int i=0;i<rows;i++)
	{
		for(int j=0;j<cols;j++)
		{
			cout<<sum[i][j]<<" ";
			if(j==cols-1)
			{
				cout<<endl;
			}
		}
	}
	return 0;
}
