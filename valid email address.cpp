//valid email
#include <iostream>
#include <string>
#include <regex>
using namespace std;
bool validate_email(string email)
{
	string regrex pattern("^[\\w\\.-]+@[\\w\\,-]+\\.\\w+$");
	return regex_match(email,pattern);
}
int main()
{
	string email;
	cout<<"enter the email address:";
	getline(cin,email);
	if(validate_email(email))
	{
		cout<<"email address is valid"<<endl;
	}
	else
	{
		cout<<"email address is not valid"<<endl;
	}
	return 0;
}
