#include <iostream>
using namespace std;
void printFirstElementOfArray(int arr[])
{
    cout << "First element of array = " << arr[0];
}

int main()
{
    int a[] = {10,2,3,4,5,6};
    printFirstElementOfArray(a);
    return 0;
}
