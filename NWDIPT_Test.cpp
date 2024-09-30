/*
Nick Spizzirri
9/29/2024
CSC122
*/

// Libraries + Headers
#include <iostream>
#include <string>
#include "NWDIPT.h"
#include<cassert>

int main() {
	// Series of asserts to test various inputs
	assert(findstuff("1234567890", '1') == 0);
	assert(findstuff("1234567890", '2') == 1);
	assert(findstuff("1234567890", "a") == -1);
	assert(findstuff("1234567890", "234") == 1);
	assert(findstuff("1234567890", "12") == 0);
	assert(findstuff("1234567890", "543") == -1);
	return 0;
}