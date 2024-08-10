//6.	Function to count the no of elements in a string
#include <iostream>
#include <string>
using namespace std;
int count(string str)
{
	return str.length();
}
int main()
{
	string input;
	cout<<"enter a string:";
	getline(cin,input);
	int result=count(input);
	cout<<"number of elements in the string: "<<result<<endl;
	return 0;
}
