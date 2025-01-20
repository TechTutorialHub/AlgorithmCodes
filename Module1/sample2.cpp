//linearsearch

#include <iostream>
using namespace std;

int linearSearch(int arr[], int n, int target) {
    for (int i = 0; i < n; i++) {
        cout << "Iteration " << i + 1 << ": Checking element " << arr[i] << endl;
        if (arr[i] == target) {
            return i;  // Target found
        }
    }
    return -1;  // Target not found
}

int main() {
    int n;
    cout << "Enter the number of elements: ";
    cin >> n;

    int arr[n];
    cout << "Enter " << n << " elements: ";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    int target;
    cout << "Enter the element to search: ";
    cin >> target;

    // Perform linear search
    int result = linearSearch(arr, n, target);

    // Display the result
    if (result != -1) {
        cout << "Element found at index " << result << endl;
    } else {
        cout << "Element not found" << endl;
    }

    return 0;
}
