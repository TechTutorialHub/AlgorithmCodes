//permentation string
#include <iostream>
using namespace std;

void permute(char str[], int start, int end) {
    if (start == end) {
        cout << str << endl;
    } else {
        for (int i = start; i <= end; i++) {
            swap(str[start], str[i]);
            permute(str, start + 1, end);
            swap(str[start], str[i]);
        }
    }
}

int main() {
    char str[100];
    cout << "Enter a string: ";
    cin >> str;

    // Generate all permutations
    permute(str, 0, strlen(str) - 1);

    return 0;
}
