#include <iostream>

using namespace std;


void coinChange(int coins[], int n, int amount) {
    int count[n]; 

  
    for (int i = 0; i < n; i++)
        count[i] = 0;

    cout << "\nSimulation of Coin Change Process:\n";
    cout << "----------------------------------\n";
    cout << "Initial Amount: " << amount << " PHP\n\n";

    
    for (int i = 0; i < n; i++) {
        if (amount >= coins[i]) {
            int used = 0;
            while (amount >= coins[i]) {
                amount -= coins[i];  
                count[i]++; 
                used++;
            }
            cout << "Check " << coins[i] << " PHP → Can use " << used 
                 << " time" << (used > 1 ? "s" : "") 
                 << " → Remaining Amount: " << (amount + coins[i] * used) 
                 << " - " << coins[i] * used << " = " << amount << "\n";
        } else {
            cout << "Check " << coins[i] << " PHP → Too large, skip.\n";
        }
    }


    cout << "\nFinal Breakdown of Coins/Bills Used:\n";
    cout << "----------------------------------\n";
    for (int i = 0; i < n; i++) {
        if (count[i] > 0) {
            cout << coins[i] << " PHP x " << count[i] << "\n";
        }
    }

    if (amount > 0) {
        cout << "The given amount cannot be completely changed using the available denominations.\n";
    }
}

int main() {
    int coins[] = {1000, 500, 200, 100, 50, 20, 10, 5, 1};
    int n = sizeof(coins) / sizeof(coins[0]);
    
    int amount;
    cout << "Enter the amount to change in PHP: ";
    cin >> amount;

    coinChange(coins, n, amount);

    return 0;
}
