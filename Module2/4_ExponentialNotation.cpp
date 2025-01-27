#include <iostream>
using namespace std;
int fibonacci(int num)
{
    if (num <= 1) return num;
    return fibonacci(num - 2) + fibonacci(num - 1);
}

int main()
{
    int x = 27;
    cout << fibonacci(x);
    return 0;
}

