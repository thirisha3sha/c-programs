//2.	Write a c++ program to create a class for a car with a constructor and a destructor
#include <iostream>
#include <string>
using namespace std;
class car{
	private:
		string make,model;
		int year;
		double price;
	public:
		car(string m,string ml,int yr,double p)
		{
			make=m;
			model=ml;
			year=yr;
			price=p;
			cout<<"car object is created!!!"<<endl;
		}
		~car()
		{
			cout<<"car object is destroyed!!!"<<endl;
		}
		void display_details()
		{
			cout<<"car make:"<<make<<endl;
			cout<<"model:"<<model<<endl;
			cout<<"year:"<<year<<endl;
			cout<<"price"<<price<<endl;
		}
};
int main()
{
	string make,model;
	int year;
	double price;
	cout<<"enter the car make:";
	getline(cin,make);
	cout<<"enter the car model:";
	getline(cin,model);
	cout<<"enter the car year:";
	cin>>year;
	cout<<"enter the price:";
	cin>>price;
	car obj(make,model,year,price);
	obj.display_details();
	return 0;
}

	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	

