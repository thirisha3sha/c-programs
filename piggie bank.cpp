/*3.	Suppose you have a Piggie Bank with an initial amount of $50 and you have to add some more amounts to it. Create a class 'AddAmount' with a data member named 'amount' with an initial value of $50. Now  make two constructors of this class as follows:
1 - without any parameter - no amount will be added to the Piggie Bank
2 - having a parameter which is the amount that will be added to the Piggie Bank
Create an object of the 'AddAmount' class and display the final amount in the Piggie Bank.
Sample Input	7
Sample Output	50
57
*/
#include <iostream>
using namespace std;
class addamount
{
	private:
		double amt;
	public:
		addamount()
		{
			amt=50;
			cout<<"initial amount is:";
		}
		addamount(double input)
		{
			amt=50+input;
			cout<<"after adding "<<input<<" to piggie bank is ";
		}
		double display()
		
		{
			cout<< amt<<endl;
		}
};
int main()
{
	double input;
	addamount piggiebank1;
	piggiebank1.display();
	
	cout<<"enter the amount to add money in piggie bank:";
	cin>>input;
	addamount piggiebank2(input);
	piggiebank2.display();
	return 0;
	
}
