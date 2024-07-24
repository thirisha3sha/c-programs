/*8.	Write a  c++ program to remove duplicates from the sorted array
Sample Input	Sample Input:
Array = {15, 14, 25, 14, 32, 14, 31}
Sample Output	Sample Output:
Sorted Array = {14, 15, 25, 31, 32}
*/
#include <iostream>
#include <algorithm> // for std::sort
using namespace std;

int removeDuplicates(int a[], int n) {
    if (n == 0 || n == 1) {
        return n;
    }
    sort(a, a + n);

    int index = 1; 
    for (int i = 1; i < n; i++) {
        if (a[i] != a[i - 1]) {
            a[index++] = a[i];
        }
    }
    return index;
}

int main() {
    int n;
    cout << "Enter size of array: ";
    cin >> n;

    if (n <= 0) {
        cout << "Invalid size of array" << endl;
        return 1;
    }

    int a[n];
    cout << "Enter elements of array: ";
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }

    n = removeDuplicates(a, n);

    cout << "Sorted Array without Duplicates = {";
    for (int i = 0; i < n; i++) {
        cout << a[i];
        if (i < n - 1)
            cout << ", ";
    }
    cout << "}" << endl;

    return 0;
}

