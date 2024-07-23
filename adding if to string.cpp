/*Write a C++ program to create a string where 'if' is added to the front of a given string. 
If the string already begins with 'if', return the string unchanged.*/
#include <iostream>
#include <string>
using namespace std;
string addprefix(string text)
{
	if (text.substr(0,2)=="if")
	{
		return text;
	}
	else
	{
		return "if "+text;
	}
}
int main()
{
	string text,result;
	cout<<"enter a string:";
	cin>>text;
	result=addprefix(text);
	cout<<"the Result: "<< result <<endl;
	return 0;
}
