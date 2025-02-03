#include <iostream>
#include <string>
using namespace std;

int attempts = 0;
bool passwordFound = false;

void bruteForce(string password, string guess, int length) {
    // Base case: If the guess matches the password, stop recursion
    if (passwordFound) {
        return;
    }
    
    if (guess.length() == length) {
        attempts++;
        cout << "Attempt " << attempts << ": " << guess << endl;
        
        if (guess == password) {
            cout << "Password cracked! The password is: " << guess << endl;
            passwordFound = true; 
        }
        return;
    }
    
    for (char c = 'a'; c <= 'z'; c++) {
        bruteForce(password, guess + c, length); 
    }
}

int main() {
    string password;
    cout << "Enter a password (lowercase letters only): ";
    cin >> password;
    
    if (password.find_first_not_of("abcdefghijklmnopqrstuvwxyz") != string::npos) {
        cout << "Invalid input! Please enter a password with lowercase letters only." << endl;
        return 1;
    }
    
    cout << "Starting brute force password cracking..." << endl;
    
    for (int length = 1; length <= password.length(); length++) {
        bruteForce(password, "", length); 
        if (passwordFound) {
            break; 
        }
    }
    
     if (!passwordFound) {
        cout << "Password not found after " << attempts << " attempts." << endl;
    }
    
    return 0;
}


