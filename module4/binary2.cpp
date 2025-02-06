#include <iostream>
using namespace std;

// Binary Search function
int binarySearch(int arr[], int l, int r, int x) {
    while (l <= r) {
        int m = l + (r - l) / 2;

        cout << "Checking element at index " << m << ": " << arr[m] << endl;

        if (arr[m] == x)
            return m;

        if (arr[m] < x)
            l = m + 1;
        else
            r = m - 1;
    }

    return -1;
}

int main() {
    int arr[100], n, x;
    cout << "Enter 1 for predefined input, 2 for user input: ";
    int choice;
    cin >> choice;

    if (choice == 1) {
        int predefined[] = {2, 3, 4, 10, 40};
        n = sizeof(predefined) / sizeof(predefined[0]);
        for (int i = 0; i < n; i++)
            arr[i] = predefined[i];
        x = 10; // Predefined search value
    } else {
        cout << "Enter number of elements: ";
        cin >> n;
        cout << "Enter sorted elements: ";
        for (int i = 0; i < n; i++)
            cin >> arr[i];
        cout << "Enter element to search: ";
        cin >> x;
    }

    int result = binarySearch(arr, 0, n - 1, x);

    if (result == -1)
        cout << "Element not found in array" << endl;
    else
        cout << "Element found at index " << result << endl;

    return 0;
}

