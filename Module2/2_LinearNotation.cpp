#include <iostream>

using namespace std;

void printAllElementOfArray(int arr[], int size)
{
    for (int i = 0; i < size; i++)
    {
        cout << "\n" << arr[i];
    }
}

int main()
{
    int a[10]={1,2,3,4,5,6,7,8,9,10};
    int n=10;
    printAllElementOfArray(a,n);
    return 0;
}
