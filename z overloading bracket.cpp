//6.	rite a c++ program to overload the [] operator to access the elements in an array using index values
#include <iostream>
using namespace std;
class array{
	private:
		int data[100];
		int size;
	public:
		array(int s):size(s)
		{
			for(int i=0;i<size;i++)
			{
				data[i]=0;
			}
		}
		int& operator[](int index)
		{
			if(index<0||index>=size)
			{
				cout<<"out of range"<<endl;
				static int dummy=-1;
			     return dummy;
		    }
		return data[index];
	   }
	   const int& operator[](int index) const
	   {
	   	if(index<0 || index>=size)
	   	{
	   		cout<<"index out of range"<<endl;
	   		static const int dummy=-1;
	   		return dummy;
		}
		return data[index];
		   
	   }
	   int getsize()
	   {
	   	return size;
	   }
	   void display()
	   {
	   	for(int i=0;i<size;i++)
	   	{
	   		cout<<data[i]<<" ";
		}
		cout<<endl;
	   }
};
int main()
{
	int size;
	cout<<"enter the size of the array:";
	cin>>size;
	array arr(size);
	cout<<"enter "<<size<<" element for the array:\n";
	for(int i=0;i<size;i++)
	{
		cin>>arr[i];
	}
	cout<<"array elements:";
	arr.display();
	while(true)
	{
		int index;
		cout<<"enter an index to access an element (negative index to exit):";
		cin>>index;
		if(index <0)
		{
			break;
		}
		cout<<"element at index:"<<index<<":"<<arr[index]<<endl;
	}
	return 0;
	
}
