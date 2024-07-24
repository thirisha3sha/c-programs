/*9.	Write a program to enter the marks of a student in four subjects. Then calculate the total and aggregate, display the grade obtained by the student. If the student scores an aggregate greater than 75%, then the grade is Distinction. If aggregate is 60>= and <75, then the grade is First Division. If aggregate is 50 >= and <60, then the grade is Second Division. If aggregate is 40>= and <50, then the grade is Third Division. Else the grade is Fail.
Sample Input	Please Enter the marks of five subjects:
50 50 50 50 50
Sample Output	Total Marks      = 250
Average Marks    = 50
Marks Percentage = 50
Grade E
*/
#include <iostream>
using namespace std;
int main()
{
	int marks[5],total=0;
	float avg;
	char grade;
	cout<<"enter the marks for 5 subjects:";
	for(int i=0;i<5;i++)
	{
		cin>>marks[i];
		total+=marks[i];
	}
	avg=total/5.0;
	if(avg>90)
	{
		grade='A';
	}
	else if(avg>=80 && avg<=90)
	{
		grade='B';
	}
	else if(avg>=70 && avg<80)
	{
		grade='C';
	}
	else if(avg>=60 && avg<70)
	{
		grade='D';
	}
	else if(avg>=50 && avg<60)
	{
		grade='E';
	}
	else{
		grade='F';
	}
	cout<<"total:"<<total<<endl;
	cout<<"average:"<<avg<<endl;
	cout<<"marks percentage:"<<avg<<endl;
	cout<<"grade:"<<grade<<endl;
	return 0;
}
