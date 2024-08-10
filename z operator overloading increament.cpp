//Write a c++ program to overload the ++ operator to increment a variable 
#include <iostream>
using namespace std;
class counter{
	private:
		int value;
	public:
		counter(int input){
			value=input;
		}
		counter operator++()
		{
			++value;
			return *this;
		}
		counter operator++(int)
		{
			counter temp=*this;
			++value;
			return temp;
		}
		void display() {
			cout<<"value: "<<value<<endl;
		}
};
int main()
{
	int input;
	cout<<"enter a number:";
	cin>>input;
	counter object(input);
	cout<<"Initial value:";
	object.display();
	++object;
	cout<<"after pre increament:";
	object.display();
	object++;
	cout<<"after post increament:";
	object.display();
	return 0;
}
