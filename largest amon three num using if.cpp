//largset among three
#include <iostream>
using namespace std;

int main() {
    int n1, n2, n3;
    cout << "Enter three integers: ";
    cin >> n1 >> n2 >> n3;
    int largest = n1;
    if (n2 > largest) {
        largest = n2;
    }
    if (n3 > largest) {
        largest = n3;
    }
    cout << "The largest number is: " << largest << endl;
    return 0;
}

