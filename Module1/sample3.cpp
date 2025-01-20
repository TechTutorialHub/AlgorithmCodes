//binarySearch
#include <iostream>
using namespace std;

int binarySearch(int arr[], int n, int target) {
    int left = 0, right = n - 1;
    int iteration = 1;

    while (left <= right) {
        int mid = left + (right - left) / 2;

        cout << "Iteration " << iteration << ":" << endl;
        cout << "  Search range: [" << left << ", " << right << "]" << endl;
        cout << "  Middle element: " << arr[mid] << endl;

        if (arr[mid] == target) {
            return mid;  // Target found
        } else if (arr[mid] < target) {
            left = mid + 1;  // Search in the right half
        } else {
            right = mid - 1;  // Search in the left half
        }

        iteration++;
    }
    return -1;  // Target not found
}

int main() {
    int n;
    cout << "Enter the number of elements: ";
    cin >> n;

    int arr[n];
    cout << "Enter " << n << " sorted elements: ";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    int target;
    cout << "Enter the element to search: ";
    cin >> target;

    // Perform binary search
    int result = binarySearch(arr, n, target);

    // Display the result
    if (result != -1) {
        cout << "Element found at index " << result << endl;
    } else {
        cout << "Element not found" << endl;
    }

    return 0;
}
