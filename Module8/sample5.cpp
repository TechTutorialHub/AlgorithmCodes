//towerOfHanoi fix value

#include <iostream>
using namespace std;

// Function to print the move
void moveDisk(int disk, char source, char destination) {
    cout << "Move disk " << disk << " from " << source << " to " << destination << endl;
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
    int n = 3; // Number of disks

    // Call the recursive function
    towerOfHanoi(n, 'A', 'B', 'C');

    return 0;
}
