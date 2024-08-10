//15.	Write a C++ program to create a pointer to a function and call the#include <iostream>
#include <iostream>
using namespace std;
void greet(const string& name) {
    cout << "Hello, " << name << "!" << endl;
}
int main() 
{
    void (*funcPtr)(const string&) = greet;
    string name;
    cout << "Enter your name: ";
    getline(cin, name);
    funcPtr(name);
    return 0;
}

