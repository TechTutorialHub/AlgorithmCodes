// problem reduction
#include <iostream>
using namespace std;

int findGCD(int a, int b) {
    cout << "Finding GCD of " << a << " and " << b << " using subtraction..." << endl;
    while (a != b) {
        if (a > b) {
            cout << "Step: " << a << " > " << b << ", so subtract " << b << " from " << a << endl;
            a -= b;
        } else {
            cout << "Step: " << b << " > " << a << ", so subtract " << a << " from " << b << endl;
            b -= a;
        }
    }
    cout << "GCD is: " << a << endl;
    return a;
}

int main() {
    int num1, num2;
    cout << "Enter two numbers: ";
    cin >> num1 >> num2;
    findGCD(num1, num2);
    return 0;
}
