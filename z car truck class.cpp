/*2.	Create a base class called vehicle with data members for make, model, and year. Derive two classes Car and Truck from the base class. The Car class should have additional data members for seating capacity and fuel type, while the Truck class should have additional data members for payload capacity and towing capacity. Write member functions to get and set the data members for each class*?
*/
#include <iostream>
#include <string>
using namespace std;
class vehicle{
	protected:
		string make,model;
		int year;
	public:
		vehicle(){
			make="";
			model="";
			year=0;
		}
		void setmake(string mk)
		{
			make=mk;
		}
		void setmodel(string ml)
		{
			model=ml;
		}
		void setyear(int yr)
		{
			year=yr;
		}
		string getmake()
		{
			return make;
		}
		string getmodel()
		{
			return model;
		}
		int getyear()
		{
			return year;
		}
};
class car:public vehicle{
	private:
		int seating_capacity;
		string fueltype;
	public:
		car()
		{
			seating_capacity=0;
			fueltype="";
		}
		void setseating_capacity(int seat)
		{
			seating_capacity=seat;
		}
		void setfueltype(string fuel)
		{
			fueltype=fuel;
		}
		int getseating_capacity()
		{
			return seating_capacity;
		}
		string getfueltype()
		{
			return fueltype;
		}
};
class truck:public vehicle{
	private:
		double payload_capacity,towing_capacity;
	public:
		truck()
		{
			payload_capacity=0;
			towing_capacity=0;
		}
	void setpayload_capacity(double payload)
	{
		payload_capacity=payload;
	}
	void settowing_capacity(double towing)
	{
		towing_capacity=towing;
	}
	double getpayload_capacity()
	{
		return payload_capacity;
	}
	double gettowing_capacity()
	{
		return towing_capacity;
	}
};
int main()
{
	car c1;
	string make,model,fueltype;
	int year,seating_capacity;
	cout<<"enter car make: ";
	getline(cin,make);
	c1.setmake(make);
	cout<<"enter a car model: ";
	getline(cin,model);
	c1.setmodel(model);
	cout<<"enter car year:";
	cin>>year;
	c1.setyear(year);
	cout<<"enter car setting capacity: ";
	cin>>seating_capacity;
	c1.setseating_capacity(seating_capacity);
	cout<<"enter car fuel type: ";
	cin>>fueltype;
	c1.setfueltype(fueltype);
	
	cout << "\nCar Details:\n";
    cout << "Make: " << c1.getmake() << endl;
    cout << "Model: " << c1.getmodel() << endl;
    cout << "Year: " << c1.getyear() << endl;
    cout << "Seating Capacity: " << c1.getseating_capacity() << endl;
    cout << "Fuel Type: " << c1.getfueltype() << endl;
    
    truck t;
    double payload_capacity,towing_capacity;
    cout<<"\n enter truck make: ";
    getline(cin,make);
    t.setmake(make);
    cout<<"enter truck model:";
    getline(cin,model);
    t.setmodel(model);
    cout<<"enter truck year: ";
    cin>>year;
    t.setyear(year);
    cout<<"enter truck payaload capacity: ";
    cin>>payload_capacity;
    t.setpayload_capacity(payload_capacity);
    cout<<"enter towing capcity:";
    cin>>towing_capacity;
    t.settowing_capacity(towing_capacity);
    
    cout << "\nTruck Details:\n";
    cout << "Make: " << t.getmake() << endl;
    cout << "Model: " << t.getmodel() << endl;
    cout << "Year: " << t.getyear() << endl;
    cout << "Payload Capacity: " << t.getpayload_capacity() << endl;
    cout << "Towing Capacity: " << t.gettowing_capacity() << endl;

    return 0;
	
}
