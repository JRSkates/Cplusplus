#include <iostream>
#include <vector>
#include <string> // Class in the Standard Template Library

using namespace std;

int main() {
    cout << "================================================================" << endl;
    cout << endl;
    // C++ Style Strings
    // This uses the std namespace
    // contiguous in memory and dynamic allocation
    // work with input and output streams with lots of useful functions
    // Cna be easily converted to C-Style Strings and back again

    string s1; // empty, but already initalized
    string s2 {"Frank"}; // Frank
    string s3 {s2}; // Frank
    string s4 {"Frank", 3}; //Fra
    string s5 {s3, 0, 2}; // Fr
    string s6 (3, 'X'); // XXX

    cout << s2 << endl;
    cout << s3 << endl;
    cout << s4 << endl;
    cout << s5 << endl;
    cout << s6 << endl;
    
    cout << "--------------------------------" << endl;

    // Concatenation using the + operator
    string part1 {"C++"};
    string part2 {"is a powerful"};

    string sentence;

    sentence = part1 + " " + part2 + " language";
    cout << sentence << endl;

    cout << "--------------------------------" << endl;

    // Accessing characters [] and at() method
    cout << part1[0] << endl;
    cout << part1.at(0) << endl;

    cout << "--------------------------------" << endl;

    for (char c: part1)
        cout << c << endl;

    // using int gives us the ASCII representation
    for (int c: part1)
        cout << c << endl;

    cout << "--------------------------------" << endl;

    string more_methods {"This is a test"};

    cout << more_methods.substr(0, 4) << endl; // This
    cout << more_methods.substr(5, 2) << endl; // is
    cout << more_methods.substr(10, 4) << endl; // test

    cout << "--------------------------------" << endl;

    cout << more_methods.find("This") << endl; // 0
    cout << more_methods.find("test") << endl; // 10
    cout << more_methods.find("is", 4) << endl; // 5

    cout << "--------------------------------" << endl;

    cout << more_methods.length() << endl; //
    cout << "--------------------------------" << endl;

    // Inputting strings
    // To get input with a space, use cin the 
    // getline function instead of cin
    // cin >> input; // This will only read until whitespace or newline is encountered
    // To read the entire line, use getline() function instead
    string input {};
    cout << "Enter something with spaces: " << endl;
    getline(cin, input);
    cout << "You entered: " << input << endl;

    // Delimiter can be included 
    // the character that getline stops reading input at
    cout << "\nEnter something else but end with an x: " << endl;
    getline(cin, input, 'x');
    cout << "You entered: " << input << endl;

    cout << "--------------------------------" << endl;

    cout << endl;
    cout << "================================================================" << endl;

    return 0;
}