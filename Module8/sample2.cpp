#include <iostream>
using namespace std;

void printIndent(int depth) {
    for (int i = 0; i < depth; ++i) {
        cout << "│   ";
    }
}

int fibonacciRecursive(int n, int depth = 0) {
    // Print the current call with appropriate indentation
    if (depth > 0) {
        printIndent(depth - 1);
        cout << "├── ";
    }
    printIndent(depth);
    cout << "fibonacciRecursive(" << n << ")" << endl;

    if (n == 0) return 0; // Base case
    if (n == 1) return 1; // Base case

    // Recursive calls with increased depth
    int result = fibonacciRecursive(n - 1, depth + 1) + fibonacciRecursive(n - 2, depth + 1);

    // Print the result with appropriate indentation
    printIndent(depth);
    cout << "└── Result: " << result << endl;

    return result;
}

int main() {
    int n;
    cout << "Enter the value of n: ";
    cin >> n;

    cout << "Fibonacci number at position " << n << " is: " << fibonacciRecursive(n) << endl;
    return 0;
}
