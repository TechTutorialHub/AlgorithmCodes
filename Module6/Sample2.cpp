#include <iostream>
using namespace std;

// Function for Bubble Sort (Transforming the array)
void bubbleSort(int arr[], int size) {
    for (int i = 0; i < size - 1; i++) {
        for (int j = 0; j < size - i - 1; j++) {
            if (arr[j] > arr[j + 1]) {
                swap(arr[j], arr[j + 1]);
            }
        }
        cout << "After iteration " << i + 1 << ": ";
        for (int k = 0; k < size; k++) {
            cout << arr[k] << " ";
        }
        cout << endl;
    }
}

// Function to compute median
double findMedian(int arr[], int size) {
    bubbleSort(arr, size); // Sorting first
    if (size % 2 == 1) {
        return arr[size / 2]; // Odd case
    } else {
        return (arr[size / 2 - 1] + arr[size / 2]) / 2.0; // Even case
    }
}

int main() {
    int arr[5] = {30, 10, 50, 20, 40}; 
    int size = 5;
    double median = findMedian(arr, size);
    cout << "Median is: " << median << endl;

    return 0;
}
