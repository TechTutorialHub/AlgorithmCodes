//Computing  n! (Factorial Calculation)
//Brute Force Approach: Multiply all integers from 1 to 

#include <iostream>
using namespace std;

int factorial(int n) {
    int result = 1;
    for (int i = 1; i <= n; i++) {
        result *= i;
        cout << "Iteration " << i << ": " << i << "! = " << result << endl;
    }
    return result;
}

int main() {
    int n;
    cout << "Enter a number (n): ";
    cin >> n;
    
    int result = factorial(n);
    cout << "Final Result: " << n << "! = " << result << endl;
    
    return 0;
}
