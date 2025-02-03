//password cracker

#include <iostream>
#include <string>
using namespace std;

void bruteForcePasswordCracker(string password) {
    string guess = ""; 
    int attempts = 0;  
    

    for (char c1 = 'a'; c1 <= 'z'; c1++) {
        guess = c1; 
        attempts++;
        cout << "Attempt " << attempts << ": " << guess << endl;
        
        if (guess == password) {
            cout << "Password cracked! The password is: " << guess << endl;
            return;
        }
        
        for (char c2 = 'a'; c2 <= 'z'; c2++) {
            guess = string(1, c1) + c2; 
            attempts++;
            cout << "Attempt " << attempts << ": " << guess << endl;
            

            if (guess == password) {
                cout << "Password cracked! The password is: " << guess << endl;
                return;
            }
            
            for (char c3 = 'a'; c3 <= 'z'; c3++) {
                guess = string(1, c1) + c2 + c3; 
                attempts++;
                cout << "Attempt " << attempts << ": " << guess << endl;
                if (guess == password) {
                    cout << "Password cracked! The password is: " << guess << endl;
                    return;
                }
            }
        }
    }
    cout << "Password not found after " << attempts << " attempts." << endl;
}

int main() {
    string password;
    cout << "Enter a password (3 lowercase letters only): ";
    cin >> password;
    
    if (password.length() != 3 || password.find_first_not_of("abcdefghijklmnopqrstuvwxyz") != string::npos) {
        cout << "Invalid input! Please enter a 3-letter lowercase password." << endl;
        return 1;
    }
    
    cout << "Starting brute force password cracking..." << endl;
    bruteForcePasswordCracker(password);
    
    return 0;
}
