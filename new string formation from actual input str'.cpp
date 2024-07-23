//Write a C++ program to create another string made of every other character starting with the first from a given string.
#include <iostream>
#include <string>
using namespace std;
string other_char(string input)
{
	string result;
	for(int i=0;i<input.length();i+=2)
	{
		result+=input[i];
		
	}
	return result;
}
int main()
{
	string input;
	cout<<"enter the string:";
	getline(cin,input);
	string result=other_char(input);
	cout<<"new string from the actual string:"<<result<<endl;
	return 0;
}
