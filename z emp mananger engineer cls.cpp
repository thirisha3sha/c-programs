//4.	Create a base class called Employee with data members for name, d, and salary Derive two classes Manager and Engineer from the base class. The Manager class should have additional data members for department and bonus, while the Engineer class should have additional data members for specialty and hours. Write member functions to get and set the data members for each class
#include <iostream>
#include <string>
using namespace std;
class employee{
	protected:
		string name;
		int id;
		double salary;
	public:
		employee(string n="",int i=0,double s=0.0)
		{
			name=n;
			id=i;
			salary=s;
		}
		void setname(string n)
		{
			name=n;
		}
		void setid(int i)
		{
			id=i;
		}
		void setsalary(double s)
		{
			salary=s;
		}
		string display_name()
		{
			return name;
		}
		int display_id()
		{
			return id;
		}
		double display_salary()
		{
			return salary;
		}
};
class manager:public employee{
	private:
		string dept;
		double bonus;
	public:
		manager(string n="",int i=0,double s=0.0,string d="",double b=0.0):employee(n,i,s),dept(d),bonus(b){}
		void setdept(string d)
		{
			dept=d;
		}
		void setbonus(double b)
		{
			bonus=b;
		}
		string display_dept() 
		{
			return dept;
		}
		double display_bonus()
		{
			return bonus;
		}
};
class engineer:public employee{
	private:
		string specialty;
		int hours;
	public:
		engineer(string n="",int i=0,double s=0.0,string sp="",int h=0):employee(n,i,s),specialty(sp),hours(h){}
		void setspecialty(string sp)
		{
			specialty=sp;
		}
		void sethour(int h)
		{
			hours=h;
		}
		string display_specialty()
		{
			return specialty;
		}
		int display_hours()
		{
			return hours;
		}
		
};
int main()
{
	string name,dept;
	int id;
	double salary,bonus;
	cout<<"enter manager details:"<<endl;
	cout<<"name:";
	cin>>name;
	cout<<"salary:";
	cin>>salary;
	cout<<"department:";
	cin>>dept;
	cout<<"bonus:";
	cin>>bonus;
	manager mgr(name,id,salary,dept,bonus);
	string specialty;
	int hours;
	cout<<"\nenter engineer details:"<<endl;
	cout<<"name:";
	cin>>name;
	cout<<"salary:";
	cin>>salary;
	cout<<"specialty:";
	cin>>specialty;
	cout<<"hours:";
	cin>>hours;
	engineer eng(name,id,salary,specialty,hours);
	cout<<"\nmanager details:"<<endl;
	cout << "Name: " << mgr.display_name() << "\nID: " << mgr.display_id() << "\nSalary: " << mgr.display_salary()
         << "\nDepartment: " << mgr.display_dept() << "\nBonus: " << mgr.display_bonus() << endl;
    cout<<"\n engineers details:"<<endl;
    cout << "Name: " << eng.display_name() << "\nID: " << eng.display_id() << "\n Salary: " << eng.display_salary()
         << "\n Specialty: " << eng.display_specialty() << "\n Hours: " << eng.display_hours() << endl;

    return 0;

}
