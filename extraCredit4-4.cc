/*
 *        File: extraCredit4-4.cc
 *      Author: Meredith Wammes
 *        Date: April 4, 2019
 * Description: Counts the number of occurrences of a substring in a
 *              line of text.
 */
#include <iostream>
#include <cstdlib>
#include <iomanip>
#include <string>

using namespace std;

//function prototypes
int countOccurrences(string upperLine, string upperSubstring);
string convertToUpper(string s);

//************************************************************
// Function: int countOccurrences(string upperLine, string upperSubstring)
//
// Purpose: Count the number of occurrences of a substring in a line
//
// Parameters: upperLine - the line of text being searched
//             upperSubstring - the substring being searched for
//
// Pre Conditions: strings upperLine and upperSubstring must be valid
//
// Post Conditions: returns the number of times the substring appears
//************************************************************
// Function: string convertToUpper(string s)
//
// Purpose: Converts a string to all uppercase letters
//
// Parameters: s - string that will be converted
//
// Pre Conditions: string s must be a valid string
//
// Post Conditions: returns the string in all uppercase letters
//************************************************************

int main()
{
//Initialization
    string line;
    string substring;
    string upperLine;
    string upperSubstring;
    int count = 0;

//Input from user
    cout << "Enter a string line: " << endl;
    getline(cin, line);

    cout << "Enter a substring: " << endl;
    cin >> substring;

//Convert everything to uppercase in order to accurately search
    upperLine = convertToUpper(line);
    upperSubstring = convertToUpper(substring);

    count = countOccurrences(upperLine, upperSubstring);

//Display
    cout << "Occurrence of substring: " << count << endl;
    return (0);
}

//Count the number of occurrences
int countOccurrences(string upperLine, string upperSubstring){
    int location = 0;
    int count = 0;
    location = upperLine.find(upperSubstring, location);

    while (location != string::npos){
        count++;
        location = upperLine.find(upperSubstring, location + 1);
    }
    return (count);
}

//Convert all lowercase to uppercase
string convertToUpper(string s){
    for (size_t i = 0; i < s.length(); i++){
        s[i] = toupper(s[i]);
    }
    return (s);
}