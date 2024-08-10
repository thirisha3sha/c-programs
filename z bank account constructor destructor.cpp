//1.	Write a c++ program to create a class for a bank account with a constructor and a destructor
#include <iostream>
#include <string>
using namespace std;
class bankaccount{
	private:
		string account_holder_name;
		int account_num;
		double balance;
	public:
		bankaccount(string name,int num,double b)
		{
			account_holder_name=name;
			account_num=num;
			balance=b;
			cout<<"bank account object is created"<<endl;
		}
		~bankaccount()
		{
			cout<<"bankaccountobject is destroyed!!!"<<endl;
		}
		void display_details()
		{
			cout << "Account Holder: " << account_holder_name << endl;
            cout << "Account Number: " << account_num << endl;
            cout << "Balance: $" << balance << endl;
		}
};

int main()
{
	string name;
	int num;
	double balance;
	cout<<"enter the account holders name:";
	getline(cin,name);
	cout<<"enter the account number";
	cin>>num;
	cout<<"enter the initial balance:";
	cin>>balance;
	bankaccount account(name,num,balance);
	account.display_details();
	return 0;
}
