//4.	 Create a base class called Person with a virtual function greet). Derive two classes Student and Teacher from the base class. implement the greet) function for each class
#include <iostream>
using namesapce std;
class person{
	public:
		virtual void greet() {
			cout<<"hello ,i am a person!";
		}
		virtual ~person()=default;
};
class student:public person{
	public:
		void greet() override{
		cout<<"hello,i am a student";
		}

};
class teacher:public person{
	public:
		void greet() override
		{
			cout<<"hello! i am a teacher!";
		}
		
};
int main()
{
	person obj1=new student();
	person obj2=new teacher();
	obj1->greet();
	obj2->greet();
	delete obj1;
	delete obj2;
	return 0;
}
