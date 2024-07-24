/*4.	Develop  a program using function to calculate the simple interest. Suppose the customer is a senior citizen. He is being offered 12 percent rate of interest; for all other customers, the ROI is 10 percent. 
Sample Input	Enter the principal amount: 200000 
Enter the no of years:  3 
Is customer senior citizen (y/n): n
Sample Output	Interest: 60000 
*/
#include <iostream>
using namespace std;
double simple_intrest(double principal,int years,bool is_senior_citizen)
{
	double rateofintrest=is_senior_citizen? 12.0:10.0;
	return (principal*years*rateofintrest)/100;
}
int main()
{
	double principal;
	int years;
	char senior;
	bool is_senior_citizen;
	cout<<"enter the principal amt:";
	cin>>principal;
	cout<<"enter the number of years:";
	cin>>years;
	cout<<"is customer is senior citizen or not:(y/n):";
	cin>>senior;
	is_senior_citizen=(senior=='y' || senior=='Y');
	double intrest=simple_intrest(principal,years,is_senior_citizen);
	cout<<"intrest:"<<intrest<<endl;
	return 0;
}

