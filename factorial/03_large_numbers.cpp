#include <iostream>
#include <vector>
using namespace std;

/**
 * Method: Digit-by-Digit Multiplication
 * Supports: Very large numbers (e.g., 100!)
 */
void largeFactorial(int n) {
    vector<int> res;
    res.push_back(1);

    for (int x = 2; x <= n; x++) {
        int carry = 0;
        for (int i = 0; i < res.size(); i++) {
            int prod = res[i] * x + carry;
            res[i] = prod % 10;
            carry = prod / 10;
        }
        while (carry) {
            res.push_back(carry % 10);
            carry /= 10;
        }
    }

    cout << "Factorial of " << n << ": ";
    for (int i = res.size() - 1; i >= 0; i--) {
        cout << res[i];
    }
    cout << endl;
}

int main() {
    int n = 50; 
    largeFactorial(n);
    return 0;
}