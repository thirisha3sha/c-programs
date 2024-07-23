#include <iostream>
using namespace std;
class Box 
{
private:
    double width;
public:
    double length;
    void setWidth(double w) {
        if (w >= 0) {
            width = w;
        } else {
            cout << "Width cannot be negative!" << endl;
        }
    }
    double getWidth() const
	 {
        return width;
    }
    void display() const {
        cout << "Length: " << length << endl;
        cout << "Width: " << width << endl;
    }
};

int main() {
    Box b1;
    double length, width;

    cout << "Enter the length of the box: ";
    cin >> length;
    b1.length = length;

    cout << "Enter the width of the box: ";
    cin >> width;
    b1.setWidth(width);

    b1.display();

    return 0;
}

