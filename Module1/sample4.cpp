//count vowels
#include <iostream>
using namespace std;

int countVowels(char str[]) {
    int vowels = 0;
    for (int i = 0; str[i] != '\0'; i++) {
        cout << "Iteration " << i + 1 << ": Checking character " << str[i] << endl;
        if (str[i] == 'a' || str[i] == 'e' || str[i] == 'i' || str[i] == 'o' || str[i] == 'u' ||
            str[i] == 'A' || str[i] == 'E' || str[i] == 'I' || str[i] == 'O' || str[i] == 'U') {
            vowels++;
        }
    }
    return vowels;
}

int main() {
    char str[100];
    cout << "Enter a string: ";
    cin >> str;

    // Count vowels
    int result = countVowels(str);

    // Display the result
    cout << "Number of vowels: " << result << endl;

    return 0;
}
