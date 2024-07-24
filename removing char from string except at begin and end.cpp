//Write a C++ program to create a new string from a given string where a specified character is removed except at the beginning and end.
#include <iostream>
#include <string>
using namespace std;
string remove_char(string input,char ch)
{
	string result;
	for(int i=1;i<input.length()-1;i++)
	{
		if(input[i] !=ch)
		{
			result+=input[i];
		}
	}
	result=input[0]+result+input[input.length()-1];
	return result;
}
int main()
{
	string input;
	char ch;
	cout<<"enter a string:";
	getline(cin,input);
	cout<<"enter a charcter to remove from the string(except begin and end):";
	cin>>ch;
	string result=remove_char(input,ch);
	cout<<"original string:"<<input<<endl;
	cout<<"new string after removing "<< ch << " except at the begin and end id:"<<result<<endl;
	return 0;
}
