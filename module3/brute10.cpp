//Brute Force String Matching 
//A brute force approach to find a pattern (substring) within a text by comparing the pattern with every possible substring of the text.
/*
  Steps:
  Align the pattern at the beginning of the text.
  Compare each character of the pattern with the corresponding character in the text.
*/

#include <iostream>
#include <string>
using namespace std;

int bruteForceStringMatch(string text, string pattern) {
    int n = text.length();
    int m = pattern.length();
    for (int i = 0; i <= n - m; i++) {
        int j = 0;
        while (j < m && text[i + j] == pattern[j]) {
            j++;
        }
        if (j == m) return i; // Pattern found at index i
    }
    return -1; // Pattern not found
}

int main() {
    string text = "ABACADABRAC";
    string pattern = "ABRA";
    int index = bruteForceStringMatch(text, pattern);
    if (index != -1) {
        cout << "Pattern found at index " << index << endl;
    } else {
        cout << "Pattern not found" << endl;
    }
    return 0;
}
