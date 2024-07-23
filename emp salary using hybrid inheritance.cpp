/*3.	Write a C++ code for Employee's salary using hybrid inheritance
Sample Input	Enter Employee ID: 567
Enter Employee Name: sivakumar
Enter basic salary of Employee: 40000
Sample Output	 Gross Salary = Rs.44000  
 Net Salary = Rs. 43500    

*/
#include <iostream>
#include <string>
using namespace std;
class employee{
	protected:
		int emp_id;
		string emp_name;
		float basic_salary;
	public:
		void get_employee_details()
		{
			cout<<"enter employee id:";
			cin>>emp_id;
			cout<<"enter employee name:";
			cin.ignore();
			getline(cin,emp_name);
			cout<<"enter basic salary pf employees:";
			cin>>basic_salary;
		}
};
class allowances:public virtual employee{
	protected:
		float house_rent,dearness_allowances,gross_salary;
	public:
		void calculate_allowances()
		{
			house_rent=0.10*basic_salary;
			dearness_allowances=0.01*basic_salary;
			gross_salary=basic_salary+house_rent+dearness_allowances;
		}
	
};
class deductions:public virtual employee{
	protected:
		float pf,tax,net_salary;
	public:
		void calculate_deductions()
		{
			pf=0.05*basic_salary;
			tax=0.01*basic_salary;
			net_salary=basic_salary-pf-tax;
		}
};
class salary:public allowances,public deductions
{
	public:
		void calculate_salary()
		{
			calculate_allowances();
			calculate_deductions();
			net_salary=gross_salary-pf-tax;
		}
		void display_salary()
		{
			cout<<"gross salary=rs. "<<gross_salary<<endl;
			cout<<"net salary=rs. "<<net_salary<<endl;
		}
};
int main()
{
	salary emp;
	emp.get_employee_details();
	emp.calculate_salary();
	emp.display_salary();
	return 0;
}
