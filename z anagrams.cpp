//Implement a program to check whether a given string is an anagram or not.
#include <iostream>
#include <algorithm>
#include <string>
using namespace std;
bool anagrams(string str1,string str2)
{
	if(str1.length()!=str2.length())
	{
		return false;
	}
	string sort1=str1;
	string sort2=str2;
	sort(sort1.begin(),sort1.end());
	sort(sort2.begin(),sort2.end());
	return sort1==sort2;
}
int main()
{
	string str1,str2;
	cout<<"enter the first string:";
	getline(cin,str1);
	cout<<"enter the second string:";
	getline(cin,str2);
	if(anagrams(str1,str2))
	{
		cout<<"strings are anagrams!!"<<endl;
	}
	else{
		cout<<"strings are not a anagrams!!!"<<endl;
	}
	return 0;
}
