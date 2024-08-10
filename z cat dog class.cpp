//3.	Create a base class called Animal with data members for name, species, and age. Derive two classes Cat and Dog from the base class. The Cat class should have additional data members for color and breed, while the Dog class should have additional data members for weight and breed. Write member functions to get and set the data members for each class
#include <iostream>
#include <string>
using namespace std;
class animal{
	protected:
		string name,species;
		int age;
	public:
		animal()
		{
			name="";
			species="";
			age=0;
		}
		void setname(string n)
		{
			name=n;
		}
		void setspecies(string s)
		{
			species=s;
		}
		void setage(int a)
		{
			age=a;
		}
		string display_name()
		{
			return name;
		}
		string display_species()
		{
			return species;
		}
		int display_age()
		{
			return age;
		}
};
class cat:public animal{
	private:
		string color,breed;
	public:
		cat()
		{
			color="";
			breed="";
		}
		void setcolor(string c)
		{
			color=c;
		}
		void setbreed(string b)
		{
			breed=b;
		}
		string display_color()
		{
			return color;
		}
		string display_breed()
		{
			return breed;
		}
};
class dog:public animal{
	private:
		double weight;
		string breed;
	public:
		dog()
		{
			weight=0;
			breed="";
		}
	void setweight(double w)
	{
		weight=w;
	}
	void setbreed(string b)
	{
		breed=b;
	}
	double display_weight()
	{
		return weight;
	}
	double display_breed()
	{
		return breed;
	}
};
int main()
{
	string name,species,color,breed;
	int age;
	double weight;
	cat c1;
	cout<<"enter cat name:";
	cin>>name;
	c1.setname(name);
	cout<<"species:";
	cin>>species;
	c1.setspecies(species);
	cout<<"age:";
	cin>>age;
	c1.setage(age);
	cout<<"breed:";
	cin>>breed;
	c1.setbreed(breed);
	cout<<"color:";
	c1.setcolor(color);
	
	cout << "\nCat Details:\n";
    cout << "Name: " << c1.display_name() << endl;
    cout << "Species: " << c1.display_species() << endl;
    cout << "Age: " << c1.display_age() << endl;
    cout << "Color: " << c1.display_color() << endl;
    cout << "Breed: " << c1.display_breed() << endl;
    
    dog d1;
    cout<<"enter dog name:";
    cin>>name;
    d1.setname(name);
    cout<<"species:";
	cin>>species;
	d1.setspecies(species);
	cout<<"age:";
	cin>>age;
	d1.setage(age);
	cout<<"breed:";
	cin>>breed;
	d1.setbreed(breed);
	cout<<"weight:";
	d1.setweight(weight);
	
	cout << "\ndog Details:\n";
    cout << "Name: " << d1.display_name() << endl;
    cout << "Species: " << d1.display_species() << endl;
    cout << "Age: " << d1.display_age() << endl;
    cout << "Color: " << d1.display_weight() << endl;
    cout << "Breed: " << d1.display_breed() << endl;
}
