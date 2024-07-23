//Write a C++ program to check if the string 'yt' appears at index 1 in a given string. If it appears return a string without 'yt' otherwise return the original string.
#include <iostream>
#include <string>
using namespace std;
string removesubstring(string original,string sub)
{
	int pos=original.find(sub);
	if (pos!=original.length())
	{
		string result=original;
		result.erase(pos,sub.length());
		return result;
	}
	else
	{
		cout<<"invalid substring";
	}
}
int main()
{
	string input,sub;
	cout<<"enter a string:";
	cin>>input;
	cout<<"enter the substring to remove:";
	cin>>sub;
	string result=removesubstring(input,sub);
	if(result!=input)
	{
		cout<<"modified string:"<<result<<endl;
	}
	return 0;
}
