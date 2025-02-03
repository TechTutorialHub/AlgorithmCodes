//With User Input
#include <iostream>
#include <iomanip> 
using namespace std;
int main() {
    int correctCombination;
    
    cout << "Enter the correct 3-digit padlock combination (000-999): ";
    cin >> correctCombination;
    

    if (correctCombination < 0 || correctCombination > 999) {
        cout << "Invalid combination! Please enter a number between 000 and 999.\n";
        return 1; 
    }
    
    bool found = false;
    int attempts = 0;
    
    cout << "Starting brute-force search for the padlock combination...\n";
    

    for (int i = 0; i <= 999; ++i) {
        ++attempts;
        

        cout << "Attempt " << attempts << ": Trying combination "
                  << setfill('0') << setw(3) << i << endl;
                    
        if (i == correctCombination) {
            cout << "Correct combination found: " << setfill('0') << setw(3) << i << "\n";
            cout << "It took " << attempts << " attempts to find the correct combination.\n";
            found = true;
            break;
        }
    }
    
    if (!found) {
        cout << "No correct combination found after " << attempts << " attempts.\n";
    }
    
    return 0;
}

