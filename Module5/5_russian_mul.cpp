#include <iostream>
using namespace std;

int main() {
    // Get the input numbers
    int num1, num2;
    cout << "Enter the first number: ";
    cin >> num1;
    cout << "Enter the second number: ";
    cin >> num2;

    int product = 0;

    // If num1 is odd, add num2 to the product
    if (num1 % 2 != 0) {
        product += num2;
    }

    // Print the header
    cout << "Multiplicand\tMultiplier\tProduct" << endl;
    cout << "\t" << num1 << "\t\t\t" << num2 << endl;

    // Russian Peasant Multiplication algorithm
    while (num1 != 1) {
        num1 = num1 / 2; // Halve the multiplicand
        num2 = num2 * 2; // Double the multiplier

        // If num1 is odd, add num2 to the product
        if (num1 % 2 != 0) {
            product += num2;
        }

        // Print the current values
        cout << "\t" << num1 << "\t\t\t" << num2 << endl;
    }

    // Output the final product
    cout << "The product is: " << product << endl;

    return 0;
}
