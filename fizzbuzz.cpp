/* Write a C++ program to check whether a given string begins with "F" or ends with "B". If the string starts with "F" return "Fizz" and return "Buzz" if it finishes with "B". If the string starts with "F" and ends with "B" return "FizzBuzz".
 In other cases return the original string.*/
 #include <iostream>
 #include <string>
 using namespace std;
 string test(string input)
 {
 	if ((input[0] == 'F' || input[0] == 'f') && (input[input.length() - 1] == 'B' || input[input.length() - 1] == 'b')) 
 	{
 		return "FIZZBUZZ";
 		
	 }
	 else if(input[0] == 'F' || input[0] == 'f') 
	 {
	 	return "FIZZ";
	 }
	 else if(input[input.length() - 1] == 'B' || input[input.length() - 1] == 'b')
	 {
	 	return "BUZZ";
	 }
	 else{
	 	return input;
	 }
 }
 int main()
 {
 	string input;
 	cout<<"enter a string:";
 	getline(cin,input);
 	string result=test(input);
    cout<<"result "<<result<<endl;
 	return 0;
 }
