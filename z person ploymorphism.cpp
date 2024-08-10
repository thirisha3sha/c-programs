//1.	Create a base class called Person with a virtual function work (). Derive two classes Employee and Manager from the base class. Implement the work () function for each class
#include <iostream>
using namespace std;
class person{
	public:
		virtual void work(){
			cout<<"person is working"<<endl;
		}
		virtual ~person()=default;
};
class employee:public person{
	public:
		void work() override{
		cout<<"employee is doing regular works."<<endl;
		}
};
class manager:public person{
	public:
		void work() override{
			cout<<"manger is planning and managing task."<<endl;
		}
};
int main()
{
	int choice;
	cout<<"enter 1 to create an employee\n 2 to create a manager:";
	cin>>choice;
	person* ptr=NULL;
	if(choice==1)
	{
		ptr=new employee();
	}
	else if(choice==2)
	{
		ptr=new manager();
	}
	else
	{
		cout<<"invalid choice."<<endl;
		return 1;
	}
	ptr->work();
	delete ptr;
	return 0;
}
