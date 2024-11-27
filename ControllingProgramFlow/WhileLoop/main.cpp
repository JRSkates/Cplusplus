#include <iostream>
#include <vector>

using namespace std;

int main() {
    cout << "================================================================" << endl;
    cout << endl;

    int i {1};

    while (i <= 10) {
        if (i % 2 == 0) {
            cout << "Even Number: " << i << endl;
        }
        ++i;
    }
    // Even Number: 2
    // Even Number: 4
    // Even Number: 6
    // Even Number: 8
    // Even Number: 10


    int number {0};

    cout << "Enter a number less than 100: ";
    cin >> number;

    while (number >= 100) {
        cout << "Invalid input. Please enter a number less than 100: ";
        cin >> number;
    }

    cout << "Your number is: " << number << endl;
    cout << endl;
    

    bool done {false};
    int flag_num {0};

    while (!done) {
        cout << "Enter a number between 1 and 5: " << endl;
        cin >> flag_num;
        
        if (flag_num <= 1 || flag_num >= 5) {
            cout << "Invalid input. Please enter a number between 1 and 5: " << endl;
            cin >> flag_num;
        } else {
            cout << "Your number is: " << flag_num << endl;
            done = true;
        }
    }


    cout << "================================================================" << endl;
    cout << endl;

    return 0;
}