//Develop a program using choice to check given string in palindrome or not using inline function.
//palindrome
#include <iostream>
#include <string>
using namespace std;
inline bool palindrome(string str)
{
	int left=0;
	int right=str.length()-1;
	while(left<right)
	{
		if(str[left]!=str[right])
		{
			return false;
		}
		left++;
		right--;
	}
	return true;
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
