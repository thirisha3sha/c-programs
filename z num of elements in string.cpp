//.Develop  a program Function to count the no of elements in a string
#include <iostream>
#include <string>
using namespace std;
int count_characters(string &str) 
{
    return str.length();
}

int main() {
    string input;
    cout << "Enter a string: ";
    getline(cin, input);
    int number_of_characters = count_characters(input);
    cout << "Number of characters in the string: " << number_of_characters << endl;
    return 0;
}

