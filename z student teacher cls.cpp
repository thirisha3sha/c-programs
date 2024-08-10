//5.	Create a base class called Person with data members for name, age, and gender. Derive two classes Student and Teacher from the base class. The Student class should have additional data members for roll number and class, while the Teacher class should have additional data members for subject and salary. Write member functions to get and set the data members for each class.
#include <iostream>
#include <string>
using namespace std;
class person{
	protected:
		string name,gender;
		int age;
	public:
		void setname(string n)
		{
			name=n;
		}
		string dispaly_name()
		{
			return name;
		}
		void setage(int a)
		{
			age=a;
		}
		int display_age()
		{
		    return age;
		}
		void setgender(string g)
		{
			gender=g;
		}
		string display_gender()
		{
			return gender;
		}
};
class student:public person{
	private:
		int rollnum;
		string studentclass;
	public:
		void setrollnum(int r)
		{
			rollnum=r;
		}
		int display_rollnum()
		{
			return rollnum;
		}
		void setstudentclass(string c)
		{
			studentclass=c;
		}
		string getstudentclass()
		{
			return studentclass;
		}
		void display_student_info()
		{
		cout << "\n\nStudent Info:" << endl;
        cout << "Name: " << name << endl;
        cout << "Age: " << age << endl;
        cout << "Gender: " << gender << endl;
        cout << "Roll Number: " << rollnum << endl;
        cout << "Class: " << studentclass << endl;
    }
};
class teacher:public person{
	private:
		string subject;
		double salary;
	public:
		void setsubject(string s)
		{
			subject=s;
		}
		string display_subject()
		{
			return subject;
		}
		void setsalary(double sal)
		{
			salary=sal;
		}
		double display_salary()		{
			return salary;
		}
		void display_teacher_info()
		{
		cout << "\n\nTeacher Info:" << endl;
        cout << "Name: " << name << endl;
        cout << "Age: " << age << endl;
        cout << "Gender: " << gender << endl;
        cout << "Subject: " << subject << endl;
        cout << "Salary: " << salary << endl;
		}
};
int main()
{
	student s;
	teacher t;
	string name,gender,studentclass,subject;
	int age,rollnum;
    double salary;
	cout << "Enter student details:" << endl;
    cout << "Name: ";
    getline(cin, name);
    s.setname(name);
    cout << "Age: ";
    cin >> age;
    s.setage(age);
    cin.ignore(); 
    cout << "Gender: ";
    getline(cin, gender);
    s.setgender(gender);
    cout << "Roll Number: ";
    cin >> rollnum;
    s.setrollnum(rollnum);
    cin.ignore(); 
    cout << "Class: ";
    getline(cin, studentclass);
    s.setstudentclass(studentclass);
    s.display_student_info();

    cout << "\nEnter teacher details:" << endl;
    cout << "Name: ";
    getline(cin, name);
    t.setname(name);
    
    cout << "Age: ";
    cin >> age;
    t.setage(age);
    cin.ignore(); 
    cout << "Gender: ";
    getline(cin, gender);
    t.setgender(gender);

    cout << "Subject: ";
    getline(cin, subject);
    t.setsubject(subject);

    cout << "Salary: ";
    cin >> salary;
    t.setsalary(salary);

    t.display_teacher_info();

    return 0;
}
