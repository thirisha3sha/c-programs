/*5.	C++ Program to insert and display data entered by using pointer notation.
Sample Input	Enter the 4 numbers: 
1
2.5
3.0
4
Sample Output	Displaying the data: 
1
2.5
3.0
4
*/
#include <iostream>
using namespace std;
int main()
{
	int size;
	cout<<"enter the number of elements:";
	cin>>size;
	float *array=new float[size];
	cout<<"enter the "<<size<<" numbers: ";
	for(int i=0;i<size;i++)
	{
		cin>>*(array+i);
	}
	cout<<"displaying the data:"<<endl;
	for(int i=0;i<size;i++)
	{
		cout<<*(array+i)<<endl;
	}
	delete[] array;
	return 0;
	
}
