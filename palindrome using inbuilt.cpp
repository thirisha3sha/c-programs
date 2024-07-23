//palindrom using inbuilt
//palindrome
#include <iostream>
#include <string>
#include <algorithm>
using namespace std;
bool palindrome(string str)
{
	string reversed_str=str;
	reverse(reversed_str.begin(),reversed_str.end());
	return str==reversed_str;
}
int main()
{
	string input;
	bool result;
	cout<<"enter a string:";
	cin>>input;
	result=palindrome(input);
	if(result)
	{
		cout<<"it is palindrome";
	}
	else{
		cout<<"it is not a palindrome";
	}
	return 0;
}
