#include <iostream>
using namespace std;

class complex {
private:
    int real;
    int img;

public:
    complex() : real(0), img(0) {}

    complex(int r, int i) : real(r), img(i) {}
    void setReal(int r) 
	{ 
	   real = r;
	 }
    void setImg(int i)
	 { 
	   img = i; 
	   }
    int getReal() const 
	{ 
	   return real; 
	}
    int getImg() const 
	{
	   return img; 
	   }
    complex operator+(const complex& other) 
	{
        complex result;
        result.real = real + other.real;
        result.img = img + other.img;
        return result;
    }
    complex operator-(const complex& other) {
        complex result;
        result.real = real - other.real;
        result.img = img - other.img;
        return result;
    }
    void display() const {
        cout << real << " + " << img << "i";
    }
};

int main() {
    int a_real, a_img, b_real, b_img;
    
    cout << "Enter the real and imaginary parts of complex number a: ";
    cin >> a_real >> a_img;

    cout << "Enter the real and imaginary parts of complex number b: ";
    cin >> b_real >> b_img;

    complex a(a_real, a_img);
    complex b(b_real, b_img);

    cout << "Input values:" << endl;
    cout << "a: ";
    a.display();
    cout << endl << "b: ";
    b.display();
    cout << endl;

    complex sum = a + b;
    complex diff = a - b;

    cout << "Result:" << endl;
    cout << "Sum: ";
    sum.display();
    cout << endl << "Difference: ";
    diff.display();
    cout << endl;

    return 0;
}

