/* Write a C++ program to create a string that is 4 copies of the 2 front characters of a given string. 
If the given string length is less than 2 return the original string.*/
#include <iostream>
#include <string>
using namespace std;
string copy(string input)
{
	string first_two_letter=input.substr(0,2);
	if(input.length()<2)
	{
		return input;
	}
    string output="";
    for(int i=0;i<4;i++)
    {
    	output+=first_two_letter;
	}
	return output;
}
int main()
{
	string input,result;
	cout<<"enter a string:";
	cin>>input;
	result=copy(input);
	cout<<"4 copies of first two letter: "<< result <<endl;
	return 0;
}
