//Instance Simplification 
#include <iostream>
using namespace std;

// Function to check uniqueness
bool areElementsUnique(int arr[], int size) {
    cout << "Checking uniqueness...\n";
    for (int i = 0; i < size; i++) {
        for (int j = i + 1; j < size; j++) {
            cout << "Comparing " << arr[i] << " and " << arr[j] << endl;
            if (arr[i] == arr[j]) {
                cout << "Duplicate found: " << arr[i] << endl;
                return false;
            }
        }
    }
    return true;
}

int main() {
    int arr[5] = {10, 20, 30, 40, 50};
    int size = 5;

    if (areElementsUnique(arr, size))
        cout << "All elements are unique.\n";
    else
        cout << "Array contains duplicate values.\n";

    return 0;
}
