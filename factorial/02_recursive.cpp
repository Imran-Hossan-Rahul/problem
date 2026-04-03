#include <iostream>
using namespace std;

/**
 * Method: Recursive
 * Logic: n! = n * (n-1)!
 */
long long factorial(int n) {
    if (n <= 1) return 1; // Base case
    return n * factorial(n - 1);
}

int main() {
    int n = 15;
    cout << "Factorial of " << n << " (Recursive): " << factorial(n) << endl;
    return 0;
}