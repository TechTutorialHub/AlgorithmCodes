//Decrease by a Constant Factor: Binary Search

#include <iostream>
using namespace std;

int binarySearch(const int arr[], int n, int target) {
    int left = 0, right = n - 1;
    int iteration = 1;

    while (left <= right) {
        // Calculate mid using the formula: mid = left + (right - left) / 2
        int mid = left + (right - left) / 2;

        // Display the simulation for this iteration
        cout << "Iteration " << iteration++ << ": \n";
        cout << "   Current range: [" << left << ", " << right << "]\n";
        cout << "   Mid calculation: mid = " << left << " + (" << right << " - " << left << ") / 2 = " << mid << "\n";
        cout << "   Value at mid: arr[" << mid << "] = " << arr[mid] << "\n";

        // Check if the target is found
        if (arr[mid] == target) {
            cout << "   Target found at index " << mid << ".\n\n";
            return mid;
        } else if (arr[mid] < target) {
            cout << "   Target is greater than arr[" << mid << "]. Adjusting left to " << mid + 1 << ".\n\n";
            left = mid + 1;
        } else {
            cout << "   Target is less than arr[" << mid << "]. Adjusting right to " << mid - 1 << ".\n\n";
            right = mid - 1;
        }
    }

    cout << "Target not found in the array.\n";
    return -1; // Target not found
}

int main() {
    // Array of sorted integers (with more random numbers)
    int arr[] = {3, 7, 12, 15, 22, 28, 34, 45, 56, 67, 78, 89, 92};
    int n = sizeof(arr) / sizeof(arr[0]);
    int target;

    // Display the array
    cout << "Array: ";
    for (int i = 0; i < n; ++i) cout << arr[i] << " ";
    cout << endl;

    // Input the target value
    cout << "Enter the target value to search for: ";
    cin >> target;

    // Perform binary search
    int result = binarySearch(arr, n, target);

    // Output the result
    if (result != -1) {
        cout << "Element found at index: " << result << endl;
    } else {
        cout << "Element not found." << endl;
    }

    return 0;
}
