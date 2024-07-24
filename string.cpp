/*Write a C++ program to remove the character at a given position in the string.
 The given position will be in the range 0..string length -1 inclusive.*/
 #include <iostream>
 #include <string>
 using namespace std;
 string remove_char(string input,int position)
 {
 	if(position>=input.length())
 	{
 		return input;
	 }
	return input.substr(0,position)+ input.substr(position+1);
 }
 int main()
 {
 	string input,result;
 	int position;
 	cout<<"enter a string:";
 	cin>>input;
 	cout<<"enter the position of the character to remove(0 to " <<input.length()-1 <<"):";
 	cin>>position;
 	if(position>=input.length())
 	{
 		cout<<"invalid input!" << endl;
	 }
	 else
	 {
	 	result=remove_char(input,position);
	 	cout<<"result:" << result<<endl;
	
	 }
	 return 0;
 	
 }
