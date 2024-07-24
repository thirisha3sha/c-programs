//Create a class Number and derive the class Skipper from Number. Write a program to print the numbers from M to N by skipping K numbers in between? Use appropriate functions and variables.
#include <iostream>
using namespace std;

class Number {
protected:
    int M, N, K;

public:
    void getdata() {
        cout << "Enter the starting number: ";
        cin >> M;
        cout << "Enter the limit number : ";
        cin >> N;
        cout << "Enter the skipping number count: ";
        cin >> K;
    }

    virtual void display() = 0; 
};

class Skipper : public Number {
public:
    void display() override 
	{
        for (int i = M; i <= N; i += (K + 1)) {
            cout << i << " ";
        }
        cout<<" are the numbers from "<<M<<" to "<<N<<" and skipping "<<K<<" numbers in between"<<endl;
    }
};

int main() {
    Skipper skip;
    skip.getdata();
    skip.display();

    return 0;
}

