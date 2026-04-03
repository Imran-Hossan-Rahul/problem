#include <iostream>
using namespace std;

/**
 * Method: Iterative
 * Supports: n <= 20 (using long long)
 */
void solveIterative() {
    int n;
    cout << "Enter a number (0-20): ";
    cin >> n;

    long long fact = 1;
    for (int i = 1; i <= n; i++) {
        fact *= i;
    }

    cout << "Factorial of " << n << " is: " << fact << endl;
}

int main() {
    solveIterative();
    return 0;
}   