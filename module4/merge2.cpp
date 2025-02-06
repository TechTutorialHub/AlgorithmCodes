#include <iostream>
using namespace std;

// UDF for swapping
void swap(int &a, int &b) {
    int temp = a;
    a = b;
    b = temp;
}

// Function to merge two halves
void merge(int arr[], int l, int m, int r) {
    int n1 = m - l + 1;
    int n2 = r - m;

    int L[n1], R[n2];

    for (int i = 0; i < n1; i++)
        L[i] = arr[l + i];
    for (int j = 0; j < n2; j++)
        R[j] = arr[m + 1 + j];

    int i = 0, j = 0, k = l;
    while (i < n1 && j < n2) {
        if (L[i] <= R[j]) {
            arr[k] = L[i];
            i++;
        } else {
            arr[k] = R[j];
            j++;
        }
        k++;
    }

    while (i < n1) {
        arr[k] = L[i];
        i++;
        k++;
    }

    while (j < n2) {
        arr[k] = R[j];
        j++;
        k++;
    }

    // Output per iteration
    cout << "Merging: ";
    for (int i = l; i <= r; i++)
        cout << arr[i] << " ";
    cout << endl;
}

// Merge Sort function
void mergeSort(int arr[], int l, int r) {
    if (l < r) {
        int m = l + (r - l) / 2;

        cout << "Dividing: ";
        for (int i = l; i <= r; i++)
            cout << arr[i] << " ";
        cout << endl;

        mergeSort(arr, l, m);
        mergeSort(arr, m + 1, r);

        merge(arr, l, m, r);
    }
}

int main() {
    int arr[100], n;
    cout << "Enter 1 for predefined input, 2 for user input: ";
    int choice;
    cin >> choice;

    if (choice == 1) {
        int predefined[] = {12, 11, 13, 5, 6, 7};
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

    mergeSort(arr, 0, n - 1);

    cout << "Sorted array: ";
    for (int i = 0; i < n; i++)
        cout << arr[i] << " ";
    cout << endl;

    return 0;
}
