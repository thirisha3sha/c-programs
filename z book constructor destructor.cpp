//4.	Write a c++ program to create a class for a book with a constructor and a destructor
#include <iostream>
#include <string>
using namespace std;
class book{
	private:
		string title,name;
		int page;
		double price;
	public:
		book(string t,string a,int p,double pr)
		{
			title=t;
			name=a;
			page=p;
			price=pr;
			cout<<"book object is created"<<endl;
		}
		~book()
		{
			cout<<"book object is destroyed!!!"<<endl;
		}
		void display()
		{
			cout<<"title:"<<title<<endl;
			cout<<"author:"<<name<<endl;
			cout<<"pages:"<<page<<endl;
			cout<<"price:$"<<price<<endl;
		}
};
int main()
{
	string title,author;
	int page;
	double price;
	cout<<"enter the title of book:";
	getline(cin,title);
	cout<<"enter the author of book:";
	getline(cin,author);
	cout<<"enter the pages:";
	cin>>page;
	cout<<"enter the price:";
	cin>>price;
	book obj(title,author,page,price);
	obj.display();
	return 0;
}
