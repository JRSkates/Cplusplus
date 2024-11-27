#include <iostream>
#include <vector>

using namespace std;

int main() {
    cout << "================================================================" << endl;
    cout << endl;

    int number {};

    // the condition at while is WHEN the loop is happening
    // the do is what happens within that loop
    // this means you MUST perform at least one iteration of the loop
    do {
        cout << "Enter a number between 1 and 5: ";
        cin >> number;

        if (number <= 1 || number >= 5) {
            cout << "Invalid input. Please enter a number between 1 and 5: " << endl;
        }
    } while (number <= 1 || number >= 5);

    cout << "Your number is: " << number << endl;
    cout << endl;

    char selection {};

    do {
        cout << "\n-----------------------------------" << endl;
        cout << "1. Do This" << endl;
        cout << "2. Do That" << endl;
        cout << "3. Do Both" << endl;
        cout << "Enter q or Q to quit: ";
        cout << "\nEnter your selection: ";
        cin >> selection;

        if (selection == '1') {
            cout << "You have chosen to do this." << endl;
        } else if (selection == '2') {
            cout << "You have chosen to do that." << endl;
        } else if (selection == '3') {
            cout << "You have chosen to do both." << endl;
        } else if (selection == 'q' || selection == 'Q') {
            cout << "Goodbye!" << endl;
        } else {
            cout << "Invalid selection. Please enter a valid option." << endl;
        }

    } while (selection != 'q' && selection != 'Q');

    cout << "================================================================" << endl;
    cout << endl;

    return 0;
}
