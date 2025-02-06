#include <iostream>
using namespace std;

// UDF for swapping
void swap(int &a, int &b) {
    int temp = a;
    a = b;
    b = temp;
}

// Partition function
int partition(int arr[], int low, int high) {
    int pivot = arr[high];
    int i = low - 1;

    for (int j = low; j < high; j++) {
        if (arr[j] <= pivot) {
            i++;
            swap(arr[i], arr[j]);
        }
    }
    swap(arr[i + 1], arr[high]);

    // Output per iteration
    cout << "Partitioned: ";
    for (int k = low; k <= high; k++)
        cout << arr[k] << " ";
    cout << endl;

    return i + 1;
}

// Quick Sort function
void quickSort(int arr[], int low, int high) {
    if (low < high) {
        int pi = partition(arr, low, high);

        quickSort(arr, low, pi - 1);
        quickSort(arr, pi + 1, high);
    }
}

int main() {
    int arr[100], n;
    cout << "Enter 1 for predefined input, 2 for user input: ";
    int choice;
    cin >> choice;

    if (choice == 1) {
        int predefined[] = {10, 7, 8, 9, 1, 5};
        n = sizeof(predefined) / sizeof(predefined[0]);
        for (int i = 0; i < n; i++)
            arr[i] = predefined[i];
    } else {
        cout << "Enter number of elements: ";
        cin >> n;
        cout << "Enter elements: ";
        for (int i = 0; i < n; i++)
            cin >> arr[i];
    }

    cout << "Original array: ";
    for (int i = 0; i < n; i++)
        cout << arr[i] << " ";
    cout << endl;

    quickSort(arr, 0, n - 1);

    cout << "Sorted array: ";
    for (int i = 0; i < n; i++)
        cout << arr[i] << " ";
    cout << endl;

    return 0;
}
