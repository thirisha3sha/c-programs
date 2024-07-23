/*3.	Question 2
Develop  a class in C++ program To compute a record of 10 students, Read the name, Regno ,mark1,mark2,mark3 of the student, calculate the average marks  and grade for to display it. 
Test Case Average >90  , Grade - S 
                 Average >80  , Grade A 
                 Average >70, Grade  C
                 Average >60  Grade  D 
                 Average >50  Grade E 
               Average less than 50 Grade F 
Sample Input	ENTER THE NUMBER OF STUDENT ENTRIES =>1
ENTER THE STUDENT NAME =>Magesh
ENTER THE REGISTER NUMBER =>567
MARK 1 => 45
MARK 2 => 65
MARK 3 => 33
AVERAGE SCORE IS => 47

Sample Output	F GRADE
*/
#include <iostream>
#include <string>
using namespace std;
class student{
	private:
		string name;
		int reg_no,marks[5];
		double avg;
		char grade;
		
		void calculate()
		{
			int total=0;
			for(int i=0;i<5;i++)
			{
				total+=marks[i];
			}
			avg=total/5.0;
			 if (avg > 90)
            grade = 'S';
	        else if (avg > 80)
	            grade = 'A';
	        else if (avg > 70)
	            grade = 'C';
	        else if (avg > 60)
	            grade = 'D';
	        else if (avg > 50)
	            grade = 'E';
	        else
	            grade = 'F';
			
		}
	public:
		void input()
		{
			cout<<"\nenter student name:";
			cin.ignore();
			getline(cin,name);
			cout<<"\nenter reg num:";
			cin>>reg_no;
			cout<<"\nenter 5 subject marks:";
			for(int i=0;i<5;i++)
			{
				cout<<"\nmark "<<i+1 <<" =>";
				cin>>marks[i];
			}
			calculate();
		}
		void show() 
		{
        cout << "\nSTUDENT NAME: " << name << endl;
        cout << "\nREGISTER NUMBER: " << reg_no << endl;
        for (int i = 0; i < 5; ++i) 
		{
            cout << "MARK " << i + 1 << ": " << marks[i] << endl;
        }
        cout << "\nAVERAGE SCORE IS => " << avg << endl;
        cout << "\nGRADE => " << grade << endl;
    }
		
};
int main()
{
	const int num_students=10;
	student s[num_students];
	int n;
	cout<<"\nenter the number of student entries:";
	cin>>n;
	if(n>num_students)
	{
		cout<<"\ncan only record upto "<<num_students<<" students.";
		return 1;
	}
	for(int i=0;i<n;i++)
	{
		cout<<"\nenter details for student "<<i+1<<":";
			s[i].input();
	}
	cout<<"\ndisplay records of student:\n";
	for(int i=0;i<n;i++)
	{
		s[i].show();
		cout<<endl;
	}
	return 0;
}
