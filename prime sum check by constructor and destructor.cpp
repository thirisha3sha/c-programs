//Write a program in C++ to Check Whether a Number can be Express as Sum of Two Prime Numbers using constructor and destructor.
#include <iostream>
#include <vector>
using namespace std;

class prime_check {
private:
    int num;
    vector<bool> is_prime;

public:
    prime_check(int n) : num(n) {
        cout << "Prime sum check object created with number: " << num << endl;
        prime_series(num);
    }

    void prime_series(int num) {
        is_prime.resize(num + 1, true);
        is_prime[0] = is_prime[1] = false;
        for (int i = 2; i * i <= num; ++i) {
            if (is_prime[i]) {
                for (int j = i * i; j <= num; j += i) {
                    is_prime[j] = false;
                }
            }
        }
    }

    void prime_sum_check() {
        bool found = false;
        for (int i = 2; i <= num / 2; ++i) {
            if (is_prime[i] && is_prime[num - i]) {
                cout << num << " can be expressed as the sum of " << i << " and " << num - i << endl;
                found = true;
            }
        }
        if (!found) {
            cout << num << " cannot be expressed as the sum of two prime numbers." << endl;
        }
    }

    ~prime_check() {
        cout << "Prime sum check object destroyed." << endl;
    }
};

int main() {
    int n;
    cout << "Enter a number: ";
    cin >> n;
    prime_check object(n);
    object.prime_sum_check();
    return 0;
}

