#include <iostream>
using namespace std;

void insertionSort(int arr[], int n) {
    for (int i = 1; i < n; ++i) {
        int key = arr[i];
        int j = i - 1;

        // Move elements of arr[0..i-1] that are greater than key to one position ahead
        while (j >= 0 && arr[j] > key) {
            arr[j + 1] = arr[j];
            --j;
        }
        arr[j + 1] = key;

        // Output after each iteration
        cout << "Iteration " << i << ": ";
        for (int k = 0; k <= i; ++k) {
            cout << arr[k] << " ";
        }
        cout << endl;
    }
}

int main() {
    int arr[] = {5, 2, 9, 1, 5, 6};
    int n = sizeof(arr) / sizeof(arr[0]);

    cout << "Original Array: ";
    for (int i = 0; i < n; ++i) cout << arr[i] << " ";
    cout << endl;

    insertionSort(arr, n);

    cout << "Sorted Array: ";
    for (int i = 0; i < n; ++i) cout << arr[i] << " ";
    cout << endl;

    return 0;
}
