//uppercase lowercase using class
#include <iostream>
#include <string>
#include <algorithm>
using namespace std;
class Upper_lowercase
{
	public:
		string toupper(string str)
		{
			string result=str;
			transform(result.begin(),result.end(),result.begin(),::toupper);
			return result;
		}
		string tolower(string str)
		{
			string result=str;
			transform(result.begin(),result.end(),result.begin(),::tolower);
			return result;
		}
};
int main()
{
	Upper_lowercase converter;
	string input;
	cout<<"enter a string:";
	cin>>input;
	string upper= converter.toupper(input);
	cout<<"uppercase:"<<upper<<endl;
	string lower=converter.tolower(input);
	cout<<"lowercase:"<<lower<<endl;
	return 0;
}
