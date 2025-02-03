
#include <iostream>
#include <string>
using namespace std;
int bruteForceStringMatch(string text, string pattern) {
    int n = text.length();
    int m = pattern.length();
    
    for (int i = 0; i <= n - m; i++) {
        cout << "Iteration " << i + 1 << ": Aligning pattern at index " << i << " of text" << endl;
        int j;
        for (j = 0; j < m; j++) {
            cout << "  Comparing text[" << i + j << "] (" << text[i + j] << ") with pattern[" << j << "] (" << pattern[j] << ")" << endl;
            if (text[i + j] != pattern[j]) {
                cout << "  Mismatch found! Shifting pattern to the right." << endl;
                break; // Mismatch found, 
            }
        }
        if (j == m) {
            return i; // Pattern found at index i
        }
    }
    return -1; // Pattern not found
}

int main() {
    string text, pattern;
    
    cout << "Enter the text: ";
    getline(cin, text);
    cout << "Enter the pattern: ";
    getline(cin, pattern);
    
    cout << "\nStarting brute force string matching..." << endl;
    int index = bruteForceStringMatch(text, pattern);
    
    if (index != -1) {
        cout << "\nPattern found at index " << index << "!" << endl;
    } else {
        cout << "\nPattern not found in the text." << endl;
    }
    
    return 0;
}
