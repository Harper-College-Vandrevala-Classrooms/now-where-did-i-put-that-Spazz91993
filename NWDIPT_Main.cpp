/*
Nick Spizzirri
9/29/2024
CSC122
*/

// Libraries + Headers
#include <iostream>
#include <string>
#include "NWDIPT.h"

// Main Space
int main() {
    int choice = 0;
    string theString = "";
    cout << "Hi! Please enter a string to search through: \n" << endl;
    cin >> theString;
    cout << "\nWould you like to search for a... (Enter 1 or 2)\n1. Character\n2. Substring\n" << endl;
    cin >> choice;
    if (choice == 1) {
        char chr = ' ';
        cout << "\nEnter the character to search for: \n" << endl;
        cin >> chr;
        int charIndex = findstuff(theString, chr);
        if (charIndex != -1)
            std::cout << "\nCharacter '" << chr << "' found at index: " << charIndex << endl;
        else
            std::cout << "\nCharacter '" << chr << "' not found!" << endl;
    }
    else if (choice == 2) {
        string subString = "";
        cout << "\nEnter the substring to search for: \n" << endl;
        cin >> subString;
        int charIndex = findstuff(theString, subString);
        if (charIndex != -1)
            std::cout << "\nString '" << subString << "' found at index: " << charIndex << endl;
        else
            std::cout << "\nString '" << subString << "' not found!" << endl;
    }
    else {
        cout << "\nSorry, your input was not valid. Try again..." << endl;
    }
    return 0;
}