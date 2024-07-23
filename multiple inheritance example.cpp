/*3.	Program to demonstrate multiple inheritance in c++
Sample Input	Input given in the program itself.
Sample Output	value of a: 100
value of b: 200
value of c: 300 */
#include <iostream>
using namespace std;
class A 
{
public:
    int a;
    A() 
	{
        a = 100;
    }
};
class B
 {
public:
    int b;
    B() 
	{
        b = 200;
    }
};
class C : public A, public B {
public:
    int c;
    C() 
	{
        c = 300;
    }
    void display() 
	{
        cout << "value of a: " << a << endl;
        cout << "value of b: " << b << endl;
        cout << "value of c: " << c << endl;
    }
};

int main() 
{
    C obj;
    obj.display();
    return 0;
}

