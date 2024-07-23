
#include <iostream>
using namespace std;

class Rectangle {
private:
    int length;
    int width;

public:
    void setDimensions(int l, int w) {
        length = l;
        width = w;
    }
    int area() {
        return length * width;
    }
};

int main() {
    const int numRectangles = 3; 
    Rectangle rectangles[numRectangles];

    for (int i = 0; i < numRectangles; ++i) {
        int length, width;
        cout << "Enter length of rectangle " << ": ";
        cin >> length;
        cout << "Enter width of rectangle "  << ": ";
        cin >> width;

        rectangles[i].setDimensions(length, width);
    }

    cout << "\nArea of the rectangles:\n";
    for (int i = 0; i < numRectangles; ++i) {
        cout << "Area of rectangle " << (i + 1) << ": " << rectangles[i].area() << endl;
    }

    return 0;
}

