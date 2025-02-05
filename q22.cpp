#include <iostream>

using namespace std;

int main() {
    int n;
    
    // Input from user
    cout << "Enter the number of Fibonacci terms: ";
    cin >> n;

    // Check for valid input
    if (n <= 0) {
        cout << "Please enter a positive integer." << endl;
        return 1;
    }

    // First two Fibonacci numbers
    int first = 0, second = 1;

    cout << "Fibonacci Series: ";

    // Generate Fibonacci series using a for loop
    for (int i = 0; i < n; i++) {
        cout << first << " ";

        // Compute next term
        int next = first + second;
        first = second;
        second = next;
    }

    cout << endl;
    return 0;
}
