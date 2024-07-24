//Develop a C++ program that reads two numbers from the user, one integer and one float. Perform division of the float by the integer and display the result. Ensure proper type compatibility and implicit conversion handling.
#include <iostream>
using namespace std;

int main() {
    int integerInput;
    float floatInput;
    cout << "Enter an integer: ";
    cin >> integerInput;
    cout << "Enter a float: ";
    cin >> floatInput;
    if (integerInput == 0) 
	{
        cout << "Division by zero is not allowed." << endl;
    } 
	else 
	{
        float result = floatInput / integerInput;
        cout << "The result of dividing " << floatInput << " by " << integerInput << " is: " << result << endl;
    }

    return 0;
}

