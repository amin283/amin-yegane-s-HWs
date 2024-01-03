#include <iostream>
using namespace std;

int divideWithoutOperator(int m, int n) {
    if (n == 0) {
        std::cout << "Error: Division by zero!" << std::endl;
        return -1;
    }

    int quotient = 0;
    int sign = 1;

    if ((m < 0 && n > 0) || (m > 0 && n < 0)) {
        sign = -1;
    }

    m = abs(m);
    n = abs(n);

    while (m >= n) {
        m -= n;
        quotient++;
    }

    return sign * quotient;
}

int main() {
    int m, n;
    cout << "Enter the value of m: ";
    cin >> m;
    cout << "Enter the value of n: ";
    cin >> n;

    int result = divideWithoutOperator(m, n);
    if (result != -1) {
        std::cout << "Result of division: " << result << std::endl;
    }

    return 0;
}
