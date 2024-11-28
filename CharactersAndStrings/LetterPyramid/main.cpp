#include <iostream>
#include <string>

using namespace std;
int main() {
    // Prompt user for input
    cout << "Enter a string to create a Letter Pyramid: ";
    string input;
    getline(cin, input);

    size_t length = input.size(); // Length of the input string

    // Loop through each character of the string
    for (size_t i = 0; i < length; ++i) {
        // Print leading spaces for alignment
        for (size_t j = 0; j < length - i - 1; ++j) {
            cout << " ";
        }

        // Print the left side of the pyramid (up to the current character)
        for (size_t j = 0; j <= i; ++j) {
            cout << input[j];
        }

        // Print the right side of the pyramid (from the current character back to the beginning)
        for (size_t j = i; j > 0; --j) {
            cout << input[j - 1];
        }

        // Move to the next line
        cout << endl;
    }

    return 0;
}
