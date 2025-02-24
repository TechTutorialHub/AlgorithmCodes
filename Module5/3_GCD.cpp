// GCD using Euclid's algorithm
#include <iostream>
using namespace std;

// Function to calculate GCD using Euclid's algorithm
int gcd(int x, int y) {
    if (x == 0) { // Base case: when the remainder becomes zero
        return y;
    }

    // Print the step-by-step calculation
    cout << y << " = " << x << " * " << y / x << " + " << y % x << endl;

    // Recursive call
    return gcd(y % x, x);
}

int main() {
    int a, b;

    // Input two numbers from the user
    cout << "Enter 1st Num: ";
    cin >> a;
    cout << "Enter 2nd Num: ";
    cin >> b;

    // Add a blank line for better readability
    cout << endl;

    // Calculate and display the GCD
    cout << "\nThe GCD value is " << gcd(a, b) << endl;

    return 0;
}
