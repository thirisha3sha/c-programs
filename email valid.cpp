//valid email
#include <iostream>
#include <string>
#include <regex>
using namespace std
bool validate_email(string email)
{
	const regex pattern("^[\\w\\.-]+@[\\w\\.-]+\\.\\w+$");
	return regex_match(email,pattern);
}
int main()
{
	string email1,email2;
	cout<<"enter the email address:";
	getline(cin,email1);
	cout<<"reenter the email address:";
	getline(cin,email2);
	if(email1==email2 && validate_email(email1))
	{
		cout<<"email address is valid"<<endl;
	}
	else{
		cout<<"email is not invalid"<<endl;
	}
	return 0;
}
