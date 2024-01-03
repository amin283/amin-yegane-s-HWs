#include <iostream>
using namespace std;

int main() {
    int n, i, sum = 0, j;

    cout << "Enter the number: ";
    cin >> n;  // 5

    for (j = 1; j < n; j++) {
        bool isPrime = true;
        for (i = 2; i <= j/2 ; i++) {
            if (j % i == 0) {
                isPrime = false;
                break;
            }
        }
        if (isPrime)
            sum += j;
    }

    cout << "Sum of prime numbers less than " << n << " is: " << sum << endl;
    return 0;
}
