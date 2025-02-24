/*
Iteration 1:
Coins [0, 4] (weights: 1, 1, 1, 0, 1) are weighed against coins [5, 9] (weights: 1, 1, 1, 1, 1).

The left group is lighter (4 < 5), so the fake coin is in the left group.

Iteration 2:
Coins [0, 2] (weights: 1, 1, 1) are weighed against coins [3, 4] (weights: 0, 1).

The right group is lighter (1 < 3), so the fake coin is in the right group.

Iteration 3:
Coins [3, 3] (weight: 0) are weighed against coins [4, 4] (weight: 1).

The left group is lighter (0 < 1), so the fake coin is at index 3.
*/


#include <iostream>
using namespace std;

// Function to find the fake coin
int findFakeCoin(int coins[], int left, int right) {
    int iteration = 1;

    while (left < right) {
        int mid = left + (right - left) / 2;
        int leftSum = 0, rightSum = 0;

        // Divide the coins into two groups and weigh them
        for (int i = left; i <= mid; i++) leftSum += coins[i];
        for (int i = mid + 1; i <= right; i++) rightSum += coins[i];

        // Output per iteration
        cout << "Iteration " << iteration << ":" << endl;
        cout << "Weighing coins [" << left << ", " << mid << "] vs [" << mid + 1 << ", " << right << "]" << endl;
        cout << "Left sum: " << leftSum << ", Right sum: " << rightSum << endl;

        if (leftSum < rightSum) {
            cout << "Fake coin is in the left group." << endl;
            right = mid;
        } else if (leftSum > rightSum) {
            cout << "Fake coin is in the right group." << endl;
            left = mid + 1;
        } else {
            cout << "Both groups are equal. No fake coin found in this range." << endl;
            return -1; // No fake coin in this range
        }

        iteration++;
    }

    // Output the fake coin
    cout << "Fake coin found at index " << left << " with weight " << coins[left] << endl;
    return left;
}

int main() {
    // Example: Array of coins (0 represents the fake coin, 1 represents real coins)
    int coins[] = {1, 1, 1, 0, 1, 1, 1, 1, 1, 1};
    int n = sizeof(coins) / sizeof(coins[0]);

    cout << "Fake Coin Problem Simulation" << endl;
    cout << "Coins: ";
    for (int i = 0; i < n; i++) cout << coins[i] << " ";
    cout << endl;

    int fakeIndex = findFakeCoin(coins, 0, n - 1);

    if (fakeIndex != -1) {
        cout << "The fake coin is at index " << fakeIndex << endl;
    } else {
        cout << "No fake coin found." << endl;
    }

    return 0;
}
