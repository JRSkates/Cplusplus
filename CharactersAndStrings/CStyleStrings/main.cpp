#include <iostream>
#include <vector>
#include <cctype>
#include <cstring>

using namespace std;

int main() {
    cout << "================================================================" << endl;
    cout << endl;
    // C Style Strings
    // Sequence of charaters in memory
    // implemented as an array of charaters
    // terminated by a null character (null - character with a value of zero)
    // Referred to as zero or null terminated strings
    
    cout << "This is an example of a C Style string literal" << endl;
    cout << "Example of how it's stored in memory: " << endl;
    cout << "\nC Style string" << endl;
    cout << "| C |  | S | t | y | l | e | | S | t | r | i | n | g | nullvalue |" << endl;
    cout << "Memory Address: 0x7ffdf800077b" << endl;

    // C++ String Class
    // Standard library string class in C++

    cout << endl;
    cout << "================================================================" << endl;
    cout << endl;

    // C Style Char Variables
    // If you created a char variable like this
    // you would need to declare array of charaters
    // you need one extra for the null character
    char my_name[6] {"Frank"};
    cout << "My name is: " << my_name << endl;

    // Using strcpy to copy a string
    // This function copies the source string to the destination array
    // The destination array must have enough space to hold the source string
    // The destination array must be large enough to hold the source string plus one null character
    char new_name [8] {};
    strcpy(new_name, "Frank");
    cout << "My name is still: " << new_name << endl;

    // Get length of the string
    cout << "Get string length with strlen(c): "<< strlen(my_name) << endl;

    cout << endl;
    cout << "================================================================" << endl;

    return 0;
}