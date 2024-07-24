/*2.	Build a C++ for student report using single inheritance.
Sample Input / output	Enter student roll number: 7005
Enter student name: Arshad
Enter student address: Dwaraka Nagar
Enter student city: Bangalore
Enter the marks1: 85
Enter the marks2: 75
Enter the marks3: 65
Student Details:
********************
The student roll number: 7005
The student name: Arshad
The student address: Dwaraka Nagar
The student city: Bangalore
Marks1: 85
Marks2: 75
Marks3: 65
Total percentage: 75
Grade A
*/
#include <iostream>
using namespace std;
class student{
	public:
		int rollnum,m1,m2,m3,age;
		string name,city;
		void get_student_details()
		{
			cout<<"enter student roll num:";
			cin>>rollnum;
			cin.ignore();
			cout<<"enter student name:";
			getline(cin,name);
			cout<<"enter student age:";
			cin>>age;
			cout<<"enter student city:";
			getline(cin,city);
			cout<<"enter the marks1:";
			cin>>m1;
			cout<<"enter the marks2:";
			cin>>m2;
			cout<<"enter the marks3:";
			cin>>m3;
		}
};
class report:public student{
	public:
		void display()
		{
			int tot_marks=m1+m2+m3;
			float percentage=tot_marks/3.0;
			cout<<"students details:\n";
			cout<<"Student name:"<<name<<endl;
			cout<<"roll number:"<<rollnum<<endl;
			cout<<"student age:"<<age<<endl;
			cout<<"student city:"<<city<<endl;
			cout<<"mark 1:"<<m1<<endl;
			cout<<"mark 2: "<<m2<<endl;
			cout<<"mark 3: "<<m3<<endl;
			cout<<"total percentage: "<<percentage<<endl;
			cout<<"grade:";
			if(percentage>=90)
			{
				cout<<"S"<<endl;
			}
			else if(percentage>=80 && percentage<90)
			{
				cout<<"A"<<endl;
			}
			else if(percentage>=70 && percentage<80)
			{
				cout<<"B"<<endl;
			}
			else if(percentage>60 && percentage<70)
			{
				cout<<"C"<<endl;
			}
			else{
				cout<<"D"<<endl;
			}
		}
};
int main()
{
	report r;
	r.get_student_details();
	r.display();
	return 0;
}
