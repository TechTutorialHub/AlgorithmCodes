//palindrome
#include <iostream>
using namespace std;

bool isPalindrome(char str[]) {
    int start = 0;
    int end = strlen(str) - 1;

    while (start < end) {
        cout << "Iteration: Comparing " << str[start] << " and " << str[end] << endl;
        if (str[start] != str[end]) {
            return false;  // Not a palindrome
        }
        start++;
        end--;
    }
    return true;  // Palindrome
}

int main() {
    char str[100];
    cout << "Enter a string: ";
    cin >> str;

    // Check if the string is a palindrome
    if (isPalindrome(str)) {
        cout << "The string is a palindrome." << endl;
    } else {
        cout << "The string is not a palindrome." << endl;
    }

    return 0;
}
