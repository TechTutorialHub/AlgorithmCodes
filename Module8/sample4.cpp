#include <iostream>
using namespace std;

int fibonacci(int n) {
    int dp[n + 1]; // Array to store Fibonacci numbers
    dp[0] = 0;     // Base case
    dp[1] = 1;     // Base case

    cout << "Initial DP array: ";
    for (int j = 0; j <= 1; j++) {
        cout << dp[j] << " ";
    }
    cout << endl;

    for (int i = 2; i <= n; i++) {
        dp[i] = dp[i - 1] + dp[i - 2];
        cout << "Iteration " << i << ": ";
        for (int j = 0; j <= i; j++) {
            cout << dp[j] << " ";
        }
        cout << endl;
    }

    return dp[n];
}

int main() {
    int n;
    cout << "Enter the value of n: ";
    cin >> n;

    cout << "Fibonacci number at position " << n << " is: " << fibonacci(n) << endl;
    return 0;
}
