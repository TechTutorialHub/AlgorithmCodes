/*
brute-force approach to finding the correct combination for a padlock. 
assumes the padlock has a 3-digit combination (from 000 to 999)
*/
#include <iostream>
#include <iomanip> // For formatting output
using namespace std;
int main() {

    int correctCombination = 789; 
    
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
