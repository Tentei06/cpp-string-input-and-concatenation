/*
Program: CSC450 CT2 - String Input Console Application
Author: Cody G. Walker
Course: CSC450 - Programming III
 
Description:
This program accepts two string inputs from the user, concatenates the strings, and displays the resulting string to the console.


Pseudocode:

START

DECLARE firstString as string
DECLARE secondString as string
DECLARE combinedString as string

PROMPT user to enter first string
GET firstString

PROMPT user to enter second string
GET secondString

SET combinedString to firstString + secondString

PRINT combinedString

END
*/

#include <iostream>
#include <string>

using namespace std;

int main() {

    // Declare variables to store the user's input and combined string
    string firstString;
    string secondString;
    string combinedString;

    // Ask the user for the first string
    cout << "Enter the first string: ";
    getline(cin, firstString);

    // Ask the user for the second string
    cout << "Enter the second string: ";
    getline(cin, secondString);

    // Concatenate the two strings
    combinedString = firstString + secondString;

    // Display the resulting string
    cout << "Concatenated string: " << combinedString << endl;

    return 0;
}
