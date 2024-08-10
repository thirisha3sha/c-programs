//3.	Find the reverse of a string using function
#include <iostream>
#include <string>
using namespace std;
string reverse(string input)
{
	string str=input;
	int n=str.length();
	for(int i=0;i<n/2;i++)
	{
		swap(str[i],str[n-i-1]);
	}
	return str;
}
int main()
{
	string input;
	cout<<"enter the string:";
	getline(cin,input);
	string result=reverse(input);
	cout<<"reversed string: "<<result;
	return 0;
}
