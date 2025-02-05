#include <iostream>

using namespace std;

// Function to calculate factorial iteratively
long long factorialIterative(int n) {
    long long fact = 1;
    for (int i = 1; i <= n; i++) {
        fact *= i;
    }
    return fact;
}

// Function to calculate factorial recursively
long long factorialRecursive(int n) {
    if (n == 0 || n == 1)
        return 1;
    return n * factorialRecursive(n - 1);
}

int main() {
    int num;

    // Input from user
    cout << "Enter a number: ";
    cin >> num;

    // Check for negative input
    if (num < 0) {
        cout << "Factorial is not defined for negative numbers." << endl;
    } else {
        cout << "Factorial (Iterative): " << factorialIterative(num) << endl;
        cout << "Factorial (Recursive): " << factorialRecursive(num) << endl;
    }

    return 0;
}
