/*3.	Develop  a program to find whether the person is eligible for vote or not. And if that particular person is not eligible, then print how many years are left to be eligible.
Note : Use the function getperson to get the input

Sample Input	Enter your age: 7 

Sample Output	You are allowed to vote after 11 years
*/
#include <iostream>
using namespace std;
int age_input()
{
	int age;
	cout<<"enter your age:";
	cin>>age;
	return age;
}
void vote_eligibility(int age)
{
	int voting_age=18;
	if(age>=voting_age)
	{
		cout<<"eligible to vote."<<endl;
	}
	else{
		int years_left=voting_age-age;
		cout<<"still "<<years_left<<" years to vote";
	}
	
}
int main()
{
	int age=age_input();
	vote_eligibility(age);
	return 0;
}
