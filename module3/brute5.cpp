//Computing  a^n (Power Calculation)
//Brute Force Approach: Multiply a by itself  n

#include <iostream>
using namespace std;

int power(int a, int n) {
    int result = 1;
    for (int i = 1; i <= n; i++) {
        result *= a;
        cout << "Iteration " << i << ": " << a << "^" << i << " = " << result << endl;
    }
    return result;
}

int main() {
    int a, n;
    cout << "Enter base (a): ";
    cin >> a;
    cout << "Enter exponent (n): ";
    cin >> n;
    
    int result = power(a, n);
    cout << "Final Result: " << a << "^" << n << " = " << result << endl;
    
    return 0;
}
