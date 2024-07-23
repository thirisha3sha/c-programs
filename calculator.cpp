/*7.	Develop a Employee class with Emp_name, Emp_id, Address, Mail_id, Mobile_no as members. Inherit the classes, Programmer, Assistant Professor, Associate Professor and Professor from employee class. Add Basic Pay (BP) as the member of all the inherited classes with 97% of BP as DA, 10 % of BP as HRA, 12% of BP as PF, 0.1% of BP for staff club fund. Generate pay slips for the employees with their gross and net salary.
Sample Input	Enter Name of the Employee : Suresh
Enter Address of the Employee : Vetri Nagar
Enter ID of the Employee :7001
Enter Mobile Number : 9898989898
Enter E-Mail ID of the Employee : aff@gmail.com
ENTER THE BASIC PAY OF THE PROGRAMMER => 80000

Sample Output	=======================
PROGRAMMER PAYMENT SLIP
=======================
BASIC PAY => 80000
DEARNESS ALLOWANCE => 77600
HOUSE RENT ALLOWENCE => 8000
PROVIDENT FUND => 9600
CLUB FUND => 800
GROSS PAY => 175200
NET PAY => 164800
*/
#include <iostream>
#include <string>
#include <iomanip>
using namespace std;
class employee{
	protected:
		string emp_name,address,mail_id;
		int emp_id;
		long long mobile_no;
	public:
		void getdetails()
		{
			cout << "Enter Name of the Employee: ";
	        getline(cin, emp_name);
	        cout << "Enter Address of the Employee: ";
	        getline(cin, address);
	        cout << "Enter ID of the Employee: ";
	        cin >> emp_id;
	        cout << "Enter Mobile Number: ";
	        cin >> mobile_no;
	        cin.ignore(); 
	        cout << "Enter E-Mail ID of the Employee: ";
	        getline(cin, mail_id);
		}
		void displayDetails() const 
		{
	        cout << "\nEmployee Details\n";
	        cout << "=======================\n";
	        cout << "Name: " << emp_name << endl;
	        cout << "Address: " << address << endl;
	        cout << "Employee ID: " << emp_id << endl;
	        cout << "Mobile Number: " << mobile_no << endl;
	        cout << "E-Mail ID: " << mail_id << endl;
    }
		
};
class programmer:public employee{
	private:
		double basic_pay;
	public:
		void getPay() {
        cout << "Enter the BASIC PAY of the Programmer: ";
        cin >> basic_pay;
    }

    void displayPaySlip() const 
	{
        double da = 0.97 * basic_pay;
        double hra = 0.10 * basic_pay;
        double pf = 0.12 * basic_pay;
        double club_fund = 0.001 * basic_pay;
        double gross_pay = basic_pay + da + hra;
        double net_pay = gross_pay - pf - club_fund;

        cout << "\n=======================\n";
        cout << "PROGRAMMER PAYMENT SLIP\n";
        cout << "=======================\n";
        cout << fixed << setprecision(2);
        cout << "BASIC PAY => " << basic_pay << endl;
        cout << "DEARNESS ALLOWANCE => " << da << endl;
        cout << "HOUSE RENT ALLOWENCE => " << hra << endl;
        cout << "PROVIDENT FUND => " << pf << endl;
        cout << "CLUB FUND => " << club_fund << endl;
        cout << "GROSS PAY => " << gross_pay << endl;
        cout << "NET PAY => " << net_pay << endl;
    }
		
};
int main() {
    programmer p;

    p.getdetails();
    p.getPay();
    p.displayDetails();
    p.displayPaySlip();

    return 0;
}

