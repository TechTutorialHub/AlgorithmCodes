//Selection sort is a sorting algorithm that repeatedly finds the minimum element from the unsorted part of the array and places it at the beginning.
/*Steps:

    Find the minimum element in the unsorted part of the array.

    Swap it with the first element of the unsorted part.

    Repeat until the entire array is sorted.
*/
#include <iostream>
using namespace std;

void swap(int &a, int &b) {
    int temp = a;
    a = b;
    b = temp;
}

void selectionSort(int arr[], int n) {
    for (int i = 0; i < n - 1; i++) {
        int minIndex = i;
        for (int j = i + 1; j < n; j++) {
            if (arr[j] < arr[minIndex]) {
                minIndex = j;
            }
        }
        swap(arr[i], arr[minIndex]); 
        
        // Display the array after each pass
        cout << "Pass " << i + 1 << ", Iteration " << i + 1 << ": ";
        for (int k = 0; k < n; k++) {
            cout << arr[k] << " ";
        }
        cout << endl;
    }
}

int main() {
    int arr[] = {14, 33, 27, 10, 35, 19, 42, 44};
    int n = sizeof(arr) / sizeof(arr[0]);
    
    cout << "Original Array: ";
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl << endl;
    
    selectionSort(arr, n);
    
    cout << endl << "Sorted Array: ";
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
    
    return 0;
}
