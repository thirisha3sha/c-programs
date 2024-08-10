//8.	Create a base class called Employee with a virtual function calculate Pay(). Derive two classes Manager and Engineer from the base class. Implement the calculatePay () function for each class.
#include <iostream>
using namespace std;
class employee{
	public:
		virtual double calculate_pay()=0;
		virtual ~employee()=default;
};
class manager:public employee{
	private:
		double salary;
	public:
		manager(double s)
		{
			salary=s;
		}
		double calculate_pay() override
		{
			return salary;
		}
};
class engineer:public employee{
	private:
		double hourlyrate;
		int hoursworked;
	public:
		engineer(double rate,int hours)
		{
			hourlyrate=rate;
			hoursworked=hours;
		}
		double calculate_pay() override
		{
			return hourlyrate*hoursworked;
		}
};
int main()
{
	int choice;
	cout<<"enter 1 to calculate pay for a manager and 2 to create a calculate apy for engineer:";
	cin>>choice;
	employee* ptr=NULL;
	double salary,hourlyrate;
	int hoursworked;
	if(choice==1)
	{
		cout<<"enter the salary for manager:";
		cin>>salary;
		ptr=new manager(salary);
	}
	else if(choice==2)
	{
		cout<<"enter the hourly rate for engineer:";
		cin>>hourlyrate;
		cout<<"enter the hours worked by the engineer:";
		cin>>hoursworked;
		ptr=new engineer(hourlyrate,hoursworked);
	}
	else
	{
		cout<<"inavalid input!!";
		return 1;
	}
	cout<<"pay is:"<<ptr->calculate_pay()<<endl;
	delete ptr;
	return 0;
}
