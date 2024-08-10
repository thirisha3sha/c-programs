//2.	 Create a base class called Animal with a virtual function eat (). Derive two classes Herbivore and Carnivore from the base class. Implement the eat function for each class.
#include <iostream>
using namespace std;
class animal{
	public:
		virtual void eat()
		{
			cout<<"animal is eating"<<endl;
		}
		virtual ~animal()=default;
};
class herbivore:public animal{
	public:
		void eat() override{
		cout<<"herbivore is eating plants"<<endl;
		}
};
class carnivore:public animal{
	public:
		void eat() override{
		cout<<"carnivore is eating meat."<<endl;
		}
};
int main()
{
	int choice;
	cout<<"enter 1 to create a herbivore\n 2 to create a carnivore:";
	cin>>choice;
	animal* ptr=NULL;
	if(choice==1)
	{
		ptr=new herbivore();
	}
	else if(choice==2)
	{
		ptr=new carnivore();
	}
	else{
		cout<<"invalid choice."<<endl;
		return 1;
	}
	ptr->eat();
	delete ptr;
	return 0;
}
