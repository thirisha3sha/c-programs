/*Write a C++ program to create a string with the last character 
added at the front and back of a given string of length 1 or more*/
#include <iostream>
#include <string>
using namespace std;
string add_last_letter(string input)
{
	if (input.length()<1)
	{
		return input;
	}
	char lastchar=input[input.length()-1];
	string result=lastchar+input+lastchar;
	return result;
}
int main()
{
	string input,result;
	cout<<"enter a string:";
	cin>>input;
	result=add_last_letter(input);
	cout<<"after adding the input string's last letter in front and back:"<<result<<endl;
	return 0;
}
