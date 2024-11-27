#include <iostream>

using namespace std;

int main() {
    cout << "================================================================" << endl;
    cout << endl;

    cout << "Simple If Statement" << endl;

    int num {};
    const int min {10};
    const int max {100};

    cout << "Enter a number between " << min << " and " << max << endl;
    cin >> num;

    if(num >= min && num <= max) {
        cout << num << " is in range" << endl;
    }

    cout << endl;
    cout << "================================================================" << endl;

    cout << "If, Else If, Else Statement" << endl;

    int else_num {};
    int target_num {10};

    cout << "Enter a number to compare with: " << target_num << endl;
    cin >> else_num;

    if (else_num > target_num) {
        cout << else_num << " is greater than " << target_num << endl;
        int diff (else_num - target_num);
        cout << "The difference is " << diff << endl;
    } else if (else_num < target_num) {
        cout << else_num << " is less than " << target_num << endl;
        int diff (target_num - else_num);
        cout << "The difference is " << diff << endl;
    } else {
        cout << else_num << " is equal to " << target_num << endl;
    }

    cout << endl;
    cout << "================================================================" << endl;

    cout << "Nested If Statement" << endl;

    int score {};
    cout << "Enter your score (0-100): " << endl;
    cin >> score;
    char letter_grade {};

    if(score >= 0 && score <= 100) {
        if(score >= 90) {
            letter_grade = 'A';
        } else if(score >= 80) {
            letter_grade = 'B';
        } else if(score >= 70) {
            letter_grade = 'C';
        } else if(score >= 60) {
            letter_grade = 'D';
        } else {
            letter_grade = 'F';
        }

        if (letter_grade == 'F') {
            cout << "Your letter grade is: F. You need to retake the class " << endl;
        } else {
            cout << "Your letter grade is: " << letter_grade << endl;
        }

    } else {
        cout << "Invalid score! Please enter a number between 0 and 100." << endl;
    }

    return 0;
}