//Representation Change in Transform and Conquer
#include <iostream>
using namespace std;

void decimalToBinary(int num) {
    int binary[32]; 
    int index = 0;
    cout << "Converting " << num << " to binary..." << endl;
    while (num > 0) {
        binary[index] = num % 2;
        cout << "Step " << index + 1 << ": " << num << " % 2 = " << binary[index] << endl;
        num /= 2;
        index++;
    }
    cout << "Binary representation: ";
    for (int i = index - 1; i >= 0; i--) cout << binary[i];
    cout << endl;
}

int main() {
    int num;
    cout << "Enter a decimal number: ";
    cin >> num;
    decimalToBinary(num);
    return 0;
}
