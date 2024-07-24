/*10.	C++ code to print the given values in program using pointer to object
Sample Input	1,54
Sample Output	The real part is 1
The imaginary part is 54
*/
#include <iostream>
using namespace std;

class Complex {
private:
    int real;
    int imaginary;

public:
    Complex(int r, int i) 
	{
		real=r; 
		imaginary=i;    	
	}
    void display() 
	{
		cout<<real<<"+"<<imaginary<<"i"<<endl;
        cout << "The real part is " << real << endl;
        cout << "The imaginary part is " << imaginary << endl;
    }
};

int main()
 {
    int realPart, imaginaryPart;
    cout << "Enter the real part: ";
    cin >> realPart;
    cout << "Enter the imaginary part: ";
    cin >> imaginaryPart;
    Complex* complexPtr = new Complex(realPart, imaginaryPart);
    complexPtr->display();
    delete complexPtr;
    return 0;
}

