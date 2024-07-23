/*5.	C++ Program for Enter Patient details using Inheritance
Sample Input	Enter Data
Enter Patient Name : siva
Enter Bed Number : 123
Enter Ward Name : 321
Enter the Doctor Name : John
Enter Doctorate Degree : MBBS
Enter Dues of Patient : 2500
Sample Output	Inserted Data is :
Patient Name : siva
Bed Number : 123
Ward Name : 321
Doctor Name : John
Doctorate Degree : MBBS
Total Dues of Patient : 2500
*/
#include <iostream>
#include <string>
using namespace std;
class doctor{
	protected:
		string doctor_name,doctor_degree;
	public:
		void get_doctor_details()
		{
			cout<<"enter the doctor name:";
			cin.ignore();
			getline(cin,doctor_name);
			cout<<"enter doctorate degree:";
			getline(cin,doctor_degree);
		}
		void display_doctor_details()
		{
			cout<<"doctor name:"<<doctor_name<<endl;
			cout<<"doctorate degree:"<<doctor_degree<<endl;
		}
};
class patient:public doctor{
	private:
		string patient_name,ward_name;
		int bed_num;
		float dues;
	public:
		void get_patient_details()
		{
			cout<<"enter patient name:";
			getline(cin,patient_name);
			cout<<"enter bed number:";
			cin>>bed_num;
			cin.ignore();
			cout<<"enter ward number:"<<endl;
			getline(cin,ward_name);
			cout<<"enter dues of patients: ";
			cin>>dues;
			cin.ignore();
			get_doctor_details();
					
		}
		void display_patient_details()
		{
			cout<<"inserted data is:"<<endl;
			cout<<"patient name:"<<patient_name<<endl;
			cout<<"bed number:"<<bed_num<<endl;
			cout<<"ward name:"<<ward_name<<endl;
			display_doctor_details();
			cout<<"total dues of patient:"<<dues<<endl;
		}
};
int main()
{
	patient p;
	cout<<"enter data:"<<endl;
	p.get_patient_details();
	p.display_patient_details();
	return 0;
}
