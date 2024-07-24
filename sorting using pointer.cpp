/*4.	C++ program to sort the given list of element in ascending using pointer
Sample Input 	Enter Infinite Numbers and (-1 To Stop Reading)
34
56
76
45
12
100
-1
Sample Output	The Ascending order is given bellow:
12
34
45
56
76
100
*/
#include <iostream>
using namespace std;
void sort_array(int* arr,int n)
{
	for(int i=0;i<n-1;i++)
	{
		for(int j=0;j<n-i-1;j++)
		{
			if(*(arr+j)>*(arr+j+1))
			{
				int temp=*(arr+j);
				*(arr+j)=*(arr+j+1);
				*(arr+j+1)=temp;
			}
		}
	}
}
int main()
{
	const int MAX_SIZE=100;
	int count=0;
	int arr[MAX_SIZE];
	cout<<"enter infine number and (-1 to stop giving input)"<<endl;
	while(true)
	{
		int n;
		cin>>n;
		if(n==-1)
		{
			break;
		}
		arr[count]=n;
		count++;
	}
	sort_array(arr,count);
	cout<<"the ascending order is given below:"<<endl;
	for(int i=0;i<count;i++)
	{
		cout<<arr[i]<<endl;
		
	}
	return 0;
}
