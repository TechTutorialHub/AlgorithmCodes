//Searching for a Key in a List (Linear Search)
//Brute Force Approach: Check each element of the list sequentially until the key is found.

#include <iostream>
using namespace std;

// Function to perform linear search
int linearSearch(int arr[], int n, int key) {
    for (int i = 0; i < n; i++) {
        cout << "Iteration " << i + 1 << ": Checking element at index " << i << " (" << arr[i] << ") against key (" << key << ")" << endl;
        if (arr[i] == key) {
            return i; // Return the index where the key is found
        }
    }
    return -1; // Return -1 if the key is not found
}

int main() {
    int n, key;
    
    // Input: Size of the list
    cout << "Enter the number of elements in the list: ";
    cin >> n;
    
    int arr[n];
    
    // Input: Elements of the list
    cout << "Enter the elements of the list:" << endl;
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    
    // Input: Key to search
    cout << "Enter the key to search: ";
    cin >> key;
    
    // Perform linear search
    cout << "\nStarting linear search..." << endl;
    int index = linearSearch(arr, n, key);
    
    // Output the result
    if (index != -1) {
        cout << "\nKey found at index " << index << "!" << endl;
    } else {
        cout << "\nKey not found in the list." << endl;
    }
    
    return 0;
}
