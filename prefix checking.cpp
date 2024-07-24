//Write a C++ program to check if a given string starts with 'C#' or not.
#include <iostream>
#include <string>
using namespace std;
bool check(string s)
{
	return (s.compare(0,2,"c#")==0);
}
int main()
{
	string input;
	cout<<"enter a string:";
	cin>>input;
	if(check(input))
	{
		cout<<"string starts with c#";
	}
	else{
		cout<<"string is not start with c#";
	}
	return 0;
}
