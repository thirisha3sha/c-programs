//Write a C++ program to count the string "aa" in a given string and assume "aaa" contains two "aa".
#include <iostream>
#include <string>
using namespace std;
int count_aa(string input)
{
	int count=0;
	for (int i=0;i<input.length()-1;i++)
	{
		if(input.substr(i,2)=="aa")
		{
			count++;
			i++;
		}
	}
	return count;
}
int main()
{
	string input;
	cout<<"enter a string:";
	getline(cin,input);
	int result=count_aa(input);
	cout<<"string 'aa' appears "<<result<<" time in the given string"<<endl;
	return 0;
}
