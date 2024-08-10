//.Write a program to illustrate array index out of bounds exceptions.
#include <iostream>
using namespace std;
int main()
{
	int arrsize;
	cout<<"enter the size of the array:";
	cin>>arrsize;
	int *arr=new int [arrsize];
	cout<<"enter "<<arrsize<<" elements:"<<endl;
	for(int i=0;i<arrsize;i++)
	{
		cin>>arr[i];
	}
	cout<<"array elements:";
	for(int i=0;i<arrsize;i++)
	{
		cout<<arr[i]<<" ";
	}
	cout<<endl;
	int index;
	cout<<"enter an index to access (out of bound ):";
	cin>>index;
	if(index>=0 && index<arrsize)
	{
		cout<<"array["<<index<<" ]="<<arr[index];
	}
	else{
		cout<<"index "<<index<<" is out of bound."<<endl;
		cout<<"trying to acess out of bound index:"<<endl;
	}
	delete[] arr;
	return 0;
}
