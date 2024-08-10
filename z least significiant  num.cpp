//.Write a C++ program to find the longest increasing subsequence of a given array.
#include <iostream>
#include <cmath>
using namespace std;
int main()
{
	int num;
	cout<<"enter an integer: ";
	cin>>num;
	int n=abs(num);
	int least_significant_digit=n%10;
	int next_significant_digit=(n/10)% 10;
	cout<<"least significant digit: "<<least_significant_digit<<endl;
	cout<<"next least significant digit: "<<next_significant_digit<<endl;
	return 0;
}
