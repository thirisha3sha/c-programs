/*1.	 Write a C++ program to read and print students using simple inheritance
Sample Input	    Enter student's basic information:
     Name?: Mickey
     Age?: 26
    Gender?: F
    Enter student's result information:
    Total Marks?: 455
    Grade?: A   
Sample Output	    Name: Mickey,Age: 26,Gender: F
    Total Marks: 455,Percentage: 91,Grade: A
*/
#include <iostream>
#include <string>
using namespace std;
class student{
	private:
		string name;
		int age;
		char gender;
	public:
		void basic_inf()
		{
			cout<<"enter students basic information:\n";
			cout<<"name:";
			getline(cin,name);
			cout<<"\n age:";
			cin>>age;
			cout<<"\n gender:";
			cin>>gender;	
		}
		void display_basic_inf()
		{
			cout<<"name: "<<name<<"\n age: "<<age<<" \n gender:"<<gender<<endl;
		}
	
};
class result:public student
{
	private:
		int tot_marks;
		char grade;
	public:
		void input_result()
		{
			cout<<"enter student's result information:\n";
			cout<<"total marks?: ";
			cin>>tot_marks;
			cout<<"grade:";
			cin>>grade;
		}
		float percentage()
		{
			return (static_cast<float>(tot_marks)/500)* 100;
			
		}
		void display_result()
		{
			cout<<"total marks: "<<tot_marks<<" \n percentage:"<<percentage()<<" \n grade:"<<grade<<endl;
			
		}
};
int main()
{
	result student;
	student.basic_inf();
	student.input_result();
	student.display_basic_inf();
	student.display_result();
	return 0;
}
