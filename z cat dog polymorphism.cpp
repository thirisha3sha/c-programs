//9.	Create a base class called Animal with a virtual function speak(). Derive two classes Cat and Dog from the base class. Implement the speak() function for each class.
#include <iostream>
using namespace std;
class animal{
	public:
		virtual void speak()=0;
		virtual ~animal()=default;
};
class cat:public animal{
	public:
		void speak() override
		{
			cout<<"meow!!!!"<<endl;
		}
};
class dog:public animal{
	public:
		void speak() override
		{
			cout<<"woof!!!"<<endl;
		}
};
int main()
{
	int choice;
	cout<<"enter 1 to hear a cat speak or 2 to hear a dog speak:";
	cin>>choice;
	animal* ptr=NULL;
	if(choice==1)
	{
		ptr=new cat();
	}
	else if(choice==2)
	{
		ptr=new dog();
	}
	else
	{
		cout<<"invalid input!!!";
		return 1;
	}
	ptr->speak();
	delete ptr;
	return 0;
}
