#include <iostream>
#include <vector>
#include <cctype>

using namespace std;

int main() {
    cout << "================================================================" << endl;
    cout << endl;

    char char1 {'J'};

    // Character Functions

    // boolean functions
    cout << "Current Character: " << char1 << endl;
    cout << "True if c is a letter: "<< isalpha(char1) << endl;
    cout << "True if c is an uppercase letter: "<< isupper(char1) << endl;
    cout << "True if c is a lowercase letter: "<< islower(char1) << endl;
    cout << endl;

    cout << "Current Character: " << char1 << endl;
    cout << "True if c is an alphabetic character: " << isalnum(char1) << endl;
    cout << "True if c is a digit: " << isdigit(char1) << endl;
    cout << endl;

    cout << "Current Character: " << char1 << endl;
    cout << "True if c is a whitespace character: " << isspace(char1) << endl;
    cout << "True if c is a control character: " << iscntrl(char1) << endl;
    cout << "True if c is a punctuation character: " << ispunct(char1) << endl;
    cout << endl;

    cout << "Current Character: " << char1 << endl;
    cout << "True if c is a printable character: " << isprint(char1) << endl;
    cout << "True if c is a graphic character: " << isgraph(char1) << endl;
    cout << endl;

    // transformative functions
    cout << "Current Character: " << char1 << endl;
    char1 = tolower(char1);
    cout << "Changed to lower case with tolower(c): " << char1 << endl;
    char1 = toupper(char1);
    cout << "Changed to upper case with toupper(c): " << char1 << endl;
    cout << endl;

    cout << "Current Character: " << char1 << endl;

    cout << endl;
    cout << "================================================================" << endl;

    return 0;
}