/*5.	Develop a simple program for static field  to count the number of object created using C++.
Sample Input	Enter the Id of the Car: 101
Enter the name of the Car: Ferrari
Number of the Marks (1 - 10): 10

Enter the Id of the Car: 205
Enter the name of the Car: Mercedes
Number of the Marks (1 - 10): 9
Sample Output	Id of the Car: 101 
Name of the Car: Ferrari 
Marks: 10

Id of the Car: 205 
Name of the Car: Mercedes 
Marks: 9

No. of objects created in the class: 2
*/
#include <iostream>
#include <string>
using namespace std;
class car{
	private:
		static int object_count;
		int id,marks;
		string name;
	public:
		car()
		{
			object_count++;
		}
		void setdetails(int car_id,string car_name,int car_marks)
		{
			id=car_id;
			name=car_name;
			marks=car_marks;
		}
		void display()
		{
			cout<<"ID:"<<id<<endl;
			cout<<"name of the car:"<<name<<endl;
			cout<<"marks:"<<marks;
			cout<<endl;
			
		}
		static int getobjectcount()
		{
			return object_count;
			
		}
		
};
int car::object_count=0;


int main()
{
	int id1,id2,marks1,marks2;
	string name1,name2;
	cout<<"enter the id of the car:";
	cin>>id1;
	cout<<"enter the name of the car:";
	cin>>name1;
	cout<<"Enter the marks(1-10):";
	cin>>marks1;
	car car1;
	car1.setdetails(id1,name1,marks1);
	cout<<"enter the id of the car2:";
	cin>>id2;
	cout<<"enter the name of the car2:";
	cin>>name2;
	cout<<"Enter the marks(1-10):";
	cin>>marks2;
	car car2;
    car2.setdetails(id2,name2,marks2);
	car1.display();
	cout<<"\n";
	car2.display();
	cout<<"\n";
	cout<<"number of objects craeted in the class:"<<car::getobjectcount()<<endl;
	return 0;	
}
