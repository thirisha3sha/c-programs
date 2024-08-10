//7.	Create a base class called Vehicle with a virtual function drive(). Derive two classes Car and Truck from the base class. Implement the drive() function for each class.
#include <iostream>
using namespace std;
class vehicle{
	public:
		virtual void drive()=0;
		virtual ~vehicle()=default;
};
class car:public vehicle{
	public:
		void drive() override
		{
			cout<<"driving a car."<<endl;
		}
};
class truck:public vehicle{
	public:
		void drive() override
		{
			cout<<"droving a truck."<<endl;
		}
};
int main()
{
	int choice;
	cout<<"enter 1 to drive a car\n 2 to drive a truck!!!";
	cin>>choice;
	vehicle* ptr=NULL;
	if(choice==1)
	{
		ptr=new car();
	}
	else if(choice==2)
	{
		ptr=new truck();
	}
	else{
		cout<<"inavlid choice!!!"<<endl;
		return 1;
	}
	ptr->drive();
	delete ptr;
	return 0;
}
