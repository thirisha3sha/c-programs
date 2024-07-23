/*2.	C++ program to demonstrate example of private simple inheritance

Sample Input	value of x: 10

Sample Output	Here x is the protected data member of class A, class A is inherited privately to class B. In private inheritance only protected data member and member functions can be accessed by the derived class.
*/
#include <iostream>
using namespace std;
class A {
private:
    int x;

protected:
    void setX(int value) 
	{
        x = value;
    }

    int getX() {
        return x;
    }
};
class B : private A {
public:
    void setXInBase(int value)
	 {
        setX(value); 
    }

    void display() {
        cout << "Here x is the protected data member of class A, "
             << "class A is inherited privately to class B." << endl;
        cout << "In private inheritance only protected data member "
             << "and member functions can be accessed by the derived class." << endl;
        cout << "Value of x: " << getX() << endl; 
    }
};

int main() {
    B obj;
    int value;
    cout << "Enter the value of x: ";
    cin >> value;
    obj.setXInBase(value);
    obj.display();

    return 0;
}

