//35.	Program to reverse the elements in an array
#include <iostream>
using namespace std;
void reverse_array(int arr[],int size)
{
	int start=0;int end=-1;
	while(start<end)
	{
		int temp=arr[start];
		arr[start]=arr[end];
		arr[end]=temp;
		start++;
		end--;
		
	}
}
void display_arr(int arr[],int size)
{
	for(int i=0;i<size;i++)
	{
		cout<<arr[i]<<" ";
	}
	cout<<endl;
}
int main()
{
	int size;
	cout<<"enter the sizze of the array:";
	cin>>size;
	int* arr=new int[size];
	cout<<"enter "<<size<<"elements: ";
	for(int i=0;i<size;i++)
	{
		cin>>arr[i];
	}
	cout<<"original arary: ";
	display_arr(arr,size);
	reverse_array(arr,size);
	delete[] arr;
	return 0;
	
	
}
