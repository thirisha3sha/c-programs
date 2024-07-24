/*Write a C++ program to exchange the first and last characters in a given string and
 return the result string.*/
 #include <iostream>
 #include <string>
 using namespace std;
 string swap_first_last(string input)
 {
 	if (input.length()<=1)
 	{
 		return input;
	 }
	 string copy=input;
	 char temp=copy[0];
	 copy[0]=copy[copy.length()-1];
	 copy[copy.length()-1]=temp;
	 return copy;
	 
 }
 int main()
 {
 	string input,result;
 	cout<<"enter a string:";
 	cin>>input;
 	result=swap_first_last(input);
 	cout<<"after swaping first and last letter of string:"<<result <<endl;
 	return 0;
 }
