//Write a C++ program to count the number of times a substring of length 2 appears in a given string as well as its last two characters. Do not count the end substring.
#include <iostream>
#include <string>
using namespace std;
int count_substring(string input)
{
	if(input.length()<4)
	{
		return 0;
	}
	int count=0;
	string lasttwo_char=input.substr(input.length()-2,2);
	for(int i=0;i<input.length()-3;i++)
	{
		if(input.substr(i,2)==lasttwo_char)
		{
			count++;
		}
	}
	return count;
}
int main()
{
	string input,lasttwo_char;
	cout<<"enter a string:";
	getline(cin,input);
	int result=count_substring(input);
	cout<<"the last two characters are:  "<< input.substr(input.length()-2,2)<<endl;
	cout<<"substring "<< input.substr(input.length()-2,2) <<" appears "<<result<<" times in the string";
	return 0;
	
}
