#include <iostream>

using namespace std;

int main() {
    cout << "================================================================" << endl;
    cout << endl;

    char letter_grade {};

    cout << "Enter your letter grade (capitalized): ";
    cin >> letter_grade;

    switch(letter_grade) {
        case 'A':
            cout << "Excellent!" << endl;
            break;
        case 'B':
            cout << "Good job!" << endl;
            break;
        case 'C':
            cout << "Average!" << endl;
            break;
        case 'D':
            cout << "Below average!" << endl;
            break;
        case 'F':
            cout << "Failed!" << endl;
            break;
        default:
            cout << "Invalid input. Please enter a letter grade." << endl;
    }

    return 0;
}