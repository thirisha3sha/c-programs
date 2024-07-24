 /*Sample Input	Enter the user name: Saveetha@789 
Reenter the user name: Saveetha@123 

Sample Output	User name is Invalid
*/
#include <iostream>
#include <string>
using namespace std;
bool valid_username(string username1,string username2)
{
	return username1==username2;
}
int main()
{
	string username1,username2;
	cout<<"enter the username:";
	getline(cin,username1);
	cout<<"reenter the username:";
	getline(cin,username2);
	if(valid_username(username1,username2))
	{
		cout<<"username is valid"<<endl;
	}
	else
	{
		cout<<"user name is not valid"<<endl;
	}
	return 0;
}

