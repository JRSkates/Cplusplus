#include <iostream>
#include <vector>
#include <cctype> // for character based functions
#include <cstring>  // for c-style string functions

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
    char example_string[6] = "Frank";
    cout << "My name is: " << example_string << endl;

    // Using strcpy to copy a string
    // This function copies the source string to the destination array
    // The destination array must have enough space to hold the source string
    // The destination array must be large enough to hold the source string plus one null character
    char new_example [8];
    strcpy(new_example, "Frank");
    cout << "My name is still: " << new_example << endl;

    // Get length of the string
    cout << "Get string length with strlen(c): "<< strlen(example_string) << endl;

    cout << endl;
    cout << "================================================================" << endl;
    cout << endl;

    char first_name[20];
    char last_name[20];
    char full_name[50];
    char temp[50];

    cout << "Enter your first name: ";
    cin >> first_name;

    cout << "Enter your last name: ";
    cin >> last_name;
    cout << "--------------------------------" << endl;
    // These strlen(c) functions return a size_t type
    // size_t is an unsigned integer type used to represent the size of objects
    // It's the size of an object in bytes
    // In this case, it's used to represent the number of characters in a string

    cout << "Hello, " << first_name << " your first name has " << strlen(first_name) << " characters" << endl;
    cout << "Your last name " << last_name << " has " << strlen(last_name) << " characters" << endl;

    // copy first_name to full_name
    // using strcpy
    strcpy(full_name, first_name); 

    // Concatenate a space to the end of full_name
    strcat(full_name, " ");

    // Concatenate strings with strcat
    cout << "Your name concatenated is: " << strcat(full_name, last_name) << endl;
    
    // cin has to work differently in C strings too
    // You have to use getline instead of cin
    // getline takes two arguments
    // 1. A reference to the string object where the input will be stored
    // 2. The maximum number of characters to read from the input stream

    // cout << "Enter a new full name: " << endl;
    // cin.getline(new_name, 50);
    // cout << "Your name entered with getline is: " << new_name << endl;


    // Using strcmp to compare two strings
    // The strings are the same as it is copied using strcpy(c)
    cout << "--------------------------------" << endl;

    strcpy(temp, full_name);
    if(strcmp(temp, full_name) == 0){
        cout << temp << " and " << full_name << " are the same" << endl;
    } else {
        cout << temp << " and " << full_name << " are different" << endl;
    }
    cout << "--------------------------------" << endl;

    // for loop to loop over full_name string
    // changes each character to upper case using toupper(c)
    // counter with size_t type
    for(size_t i{0}; i < strlen(full_name); ++i) {
        if(isalpha(full_name[i]))
            full_name[i] = toupper(full_name[i]);
    }

    cout << "Name after loop to change to uppercase: " << full_name << endl;

    cout << "--------------------------------" << endl;

    cout << endl;
    cout << "================================================================" << endl;

    return 0;
}