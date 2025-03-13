/*
The Fibonacci sequence is defined as:

F(0)=0
F(1)=1
F(n)=F(n−1)+F(n−2) for n≥2


fibonacciRecursive(5)
├── fibonacciRecursive(4)
│   ├── fibonacciRecursive(3)
│   │   ├── fibonacciRecursive(2)
│   │   │   ├── fibonacciRecursive(1)
│   │   │   └── fibonacciRecursive(0)
│   │   └── fibonacciRecursive(1)
│   └── fibonacciRecursive(2)
│       ├── fibonacciRecursive(1)
│       └── fibonacciRecursive(0)
└── fibonacciRecursive(3)
    ├── fibonacciRecursive(2)
    │   ├── fibonacciRecursive(1)
    │   └── fibonacciRecursive(0)
    └── fibonacciRecursive(1)

*/

#include <iostream>
using namespace std;

int fibonacciRecursive(int n) {
    if (n == 0) return 0; // Base case
    if (n == 1) return 1; // Base case
    return fibonacciRecursive(n - 1) + fibonacciRecursive(n - 2); // Recursive case
}

int main() {
    int n;
    cout << "Enter the value of n: ";
    cin >> n;

    cout << "Fibonacci number at position " << n << " is: " << fibonacciRecursive(n) << endl;
    return 0;
}
