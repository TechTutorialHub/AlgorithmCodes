#include <iostream>
using namespace std;

void printAllPossibleOrderedPairs(int arr[], int size)
{
    for (int i = 0; i < size; i++)
    {
        for (int j = 0; j < size; j++)
        {
            cout << "  " << arr[i] << " " << arr[j] << endl;
        }
     }
}
int main()
{
    int a[10]={1,2,3,4,5,6,7,8,9,10};
    int n = 10;
    printAllPossibleOrderedPairs(a,n);
    return 0;
}


