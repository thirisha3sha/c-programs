/*1.	Develop a C++ code for a Bank management system using multiple inheritance.
Sample Input / output	Enter S for saving customer and C for current a/c customer : S
Enter Customer Name : Siva
Enter Account Number  : 123
Enter Account Type    : Saving
Choose Your Choice
1)   Deposit
2)   Withdraw
3)   Display Balance
4)   Display with full Details
5)   Exit
Thank You for Banking with us..
*/
#include <iostream>
#include <string>
using namespace std;
class customer{
	public:
		string name,account_type;
		int account_num;
	
		void getcustomer_details()
		{
			cout<<"enter customer name:";
			cin>>name;
			cout<<"enter account number:";
			cin>>account_num;
			cout<<"enter account type:";
			cin>>account_type;
		}
		void display_customer_details()
		{
			cout<<"customer name:"<<name<<endl;
			cout<<"account number:"<<account_num<<endl;
			cout<<"account type:"<<account_type<<endl;
		}
};
class transaction{
	public:
		float balance=0;
		void deposit()
		{
			float amt;
			cout<<"enter amount to deposit:";
			cin>>amt;
			balance+=amt;
			cout<<"amount deposited successfully"<<endl;
		}
		void withdraw()
		{
			float amt;
			cout<<"balance: "<< balance<<endl;
			cout<<"enter amount to be withdraw: ";
			cin>>amt;
			if(amt<=balance)
			{
				balance-=amt;
				cout<<"balance amount after withdraw:"<<balance<<endl;
				
			}
			else{
				cout<<"insufficient balance!!!"<<endl;
			}
		}
		void display_balance()
		{
			cout<<"balance: "<<balance<<endl;
		}
};
class bank:public customer,public transaction
{
	public:
		void display_full_details()
		{
			display_customer_details();
			display_balance();
		}
};
int main()
{
	bank b;
	char customertype;
	int choice;
	cout<<"enter s for saving customer and c for current a/c customer:";
	cin>>customertype;
	b.getcustomer_details();
	do{
		cout<<"\n choose your choice\n";
		cout<<"1)deposit\n";
		cout<<"2)withdraw\n";
		cout<<"3)display balance\n";
		cout<<"4)dispaly with full details\n";
		cout<<"5)exit\n";
		cout<<"enter your choice:";
		cin>>choice;
		switch(choice)
		{
			case 1:
				b.deposit();
				break;
			case 2:
				b.withdraw();
				break;
			case 3:
				b.display_balance();
				break;
			case 4:
				b.display_full_details();
				break;
			case 5:
				cout<<"thank you for banking with us.."<<endl;
				break;
			default:
				cout<<"inavalid choice,please try again"<<endl;
		}
	}while(choice !=5);

return 0;
}
