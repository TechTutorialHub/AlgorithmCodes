//towerOfHanoi with input N

#include <iostream>
using namespace std;

int moveCount = 0;

// Function to print the move and increment the move counter
void moveDisk(int disk, char source, char destination) {
    cout << "Move " << ++moveCount << ": Disk " << disk << " from " << source << " to " << destination << endl;
}

// Recursive function to solve Tower of Hanoi
void towerOfHanoi(int n, char source, char auxiliary, char destination) {
    if (n == 1) {
        // Base case: Move the single disk from source to destination
        moveDisk(1, source, destination);
        return;
    }

    // Step 1: Move n-1 disks from source to auxiliary using destination as a helper
    towerOfHanoi(n - 1, source, destination, auxiliary);

    // Step 2: Move the nth disk from source to destination
    moveDisk(n, source, destination);

    // Step 3: Move n-1 disks from auxiliary to destination using source as a helper
    towerOfHanoi(n - 1, auxiliary, source, destination);
}

int main() {
    int n; 

    cout << "Enter the number of disks: ";
    cin >> n;

    // Calculate the theoretical minimum number of moves
    int totalMoves = (1 << n) - 1; // Equivalent to 2^n - 1

    cout << "\nSolving Tower of Hanoi with " << n << " disks:\n" << endl;

    // Call the recursive function
    towerOfHanoi(n, 'A', 'B', 'C');

    // Display the total number of moves
    cout << "\nMinimum number of moves: " << totalMoves << endl;
    cout << "Actual number of moves made: " << moveCount << endl;

    return 0;
}
