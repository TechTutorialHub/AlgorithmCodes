//Instance Simplification (presoring)

#include <iostream>
using namespace std;

// Function for Linear Search
void linearSearch(int arr[], int size, int target) {
    bool found = false;
    cout << "Searching for " << target << " in the array...\n";
    for (int i = 0; i < size; i++) {
        cout << "Checking index " << i << ": " << arr[i] << endl;
        if (arr[i] == target) {
            cout << "Element found at index " << i << "!\n";
            found = true;
            break;
        }
    }
    if (!found)
        cout << "Element not found in the array.\n";
}

int main() {
    int arr[5] = {10, 20, 30, 40, 50}; 
    int size = 5, target;

    cout << "Enter number to search: ";
    cin >> target;

    linearSearch(arr, size, target);

    return 0;
}
