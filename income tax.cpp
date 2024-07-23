/*5.	Develop   a Program in C++ to calculate income tax for the employee based on the following condition
1. if taxableincome<=60000,  tax=0;
2. if taxableincome >60000 and taxableincome <=150000,
    tax= taxableincome *0.05;
3.if taxableincome >150000 or taxableincome <=500000)
tax= taxableincome *0.1;
    else
            tax=tableinc*0.15;
Sample Input	Enter your Income  : 800000
Sample Output	Your income tax is : 1,20,000
*/
#include <iostream>
using namespace std;
int main() {
    double taxableIncome, tax = 0.0;
    cout << "Enter your Income: ";
    cin >> taxableIncome;
    if (taxableIncome <= 60000) 
	{
        tax = 0;
    } else if (taxableIncome > 60000 && taxableIncome <= 150000) 
	{
        tax = taxableIncome * 0.05;
    } else if (taxableIncome > 150000 && taxableIncome <= 500000)
	 {
        tax = taxableIncome * 0.1;
    } else {
        tax = taxableIncome * 0.15;
    }
    cout << "Your income tax is: " << tax << endl;
    return 0;
}

