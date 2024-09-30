/*
Nick Spizzirri
9/29/2024
CSC122
*/

// Libraries + Headers
#pragma once
#include <iostream>
#include <string>
using namespace std;

// Functions
int findstuff(string str, char chr) {
    for (int i = 0; i < str.length(); i++) {
        if (str[i] == chr) {
            return i; 
        }
    }
    return -1;
}

int findstuff(string str, string substr) {
    for (int i = 0; i <= str.length() - substr.length(); i++) {
        int j;
        for (j = 0; j < substr.length(); j++) {
            if (str[i + j] != substr[j]) {
                break;
            }
        }
        if (j == substr.length()) {
            return i;
        }
    }
    return -1;
}