#include <iostream>
#include <cmath>

double sumOfSeries(int n) {
    double sum = 0.0;
    for (int i = 1; i <= n; ++i) {
        sum += 1.0 / std::pow(i, i);
    }
    return sum;
}

int main() {
    int num;

    // Input the value of n
    std::cout << "Enter the value of n: ";
    std::cin >> num;

    // Calculate sum of the series using the function
    double result = sumOfSeries(num);

    // Output the result
    std::cout << "Sum of the series 1 + 1/2^2 + 1/3^3 + ... + 1/n^n is: " << result << std::endl;

    return 0;
}

