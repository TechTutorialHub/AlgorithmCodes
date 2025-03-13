/*
dynamic programming (DP) approach to calculate the n-th Fibonacci number efficiently. Instead of recalculating values repeatedly (as in a naive recursive solution), 
the DP approach stores previously computed Fibonacci numbers in an array (dp[]) and reuses them.

Initialization
  Create an array dp of size n+1=7 (to store Fibonacci numbers from F(0) to F(6)).

Initialize the base cases:
  dp[0]=0 (since F(0)=0)
  dp[1]=1 (since F(1)=1)

Iterative Computation
  For i=2 to n:

Compute dp[i]=dp[i−1]+dp[i−2].


*/

#include <iostream>
using namespace std;

int fibonacci(int n) {
    int dp[n + 1]; // Array to store Fibonacci numbers
    dp[0] = 0;     // Base case
    dp[1] = 1;     // Base case

    cout << "Iteration\ti\tdp[i-1]\tdp[i-2]\tdp[i] = dp[i-1] + dp[i-2]" << endl;
    cout << "Initial:\t-\t-\t-\tdp[0] = " << dp[0] << ", dp[1] = " << dp[1] << endl;

    for (int i = 2; i <= n; i++) {
        dp[i] = dp[i - 1] + dp[i - 2];
        cout << "Iter " << i - 1 << "\t" << i << "\tdp[" << i - 1 << "] = " << dp[i - 1]
             << "\tdp[" << i - 2 << "] = " << dp[i - 2] << "\tdp[" << i << "] = " << dp[i - 1] << " + " << dp[i - 2] << " = " << dp[i] << endl;
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
