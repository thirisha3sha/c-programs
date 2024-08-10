/*Create a class ‘Degree’ having a function ‘get degree’ that prints “I got a Degree”. It
has two subclasses namely ‘Undergraduate’ and ‘Postgraduate’ each having a
function with the same name that prints ‘I am an Undergraduate’ and “I am a
Postgraduate” respectively. Call the function by creating an object of each of the
three classes*/

#include <iostream>
using namespace std;
class Degree 
{
public:
    void getDegree() {
        cout << "I got a Degree" << endl;
    }
};
class Undergraduate : public Degree 
{
public:
    void getDegree() 
	{
        cout << "I am an Undergraduate" << endl;
    }
};
class Postgraduate : public Degree
 {
public:
    void getDegree()
	 {
        cout << "I am a Postgraduate" << endl;
    }
};

int main()
 {
    Degree degree;
    Undergraduate undergraduate;
    Postgraduate postgraduate;
    cout << "Degree class:" << endl;
    degree.getDegree();
    cout << "Undergraduate class:" << endl;
    undergraduate.getDegree();
    cout << "Postgraduate class:" << endl;
    postgraduate.getDegree();

    return 0;
}

