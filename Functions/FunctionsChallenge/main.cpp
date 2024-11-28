#include <iostream>
#include <vector>
#include <string>
#include <cmath> // included to use C math library functions

using namespace std;

// Function prototypes
void display_menu();
char get_selection();
void handle_display(const vector<int> &v);

void display_list(const vector<int> &v);
void handle_add(vector<int> &v);
void handle_mean(const vector<int> &v);
void handle_smallest(const vector<int> &v);
void handle_largest(const vector<int> &v);
void handle_quit();
void handle_unknown();

int main()
{
    cout << "================================================================" << endl;
    cout << endl;

    vector<int> numbers;
    char selection {};

    do {
        display_menu();
        selection = get_selection();
        switch (selection) {
            case('P') :
            case('p') : 
                handle_display(numbers);
                break;
            case('A') :
            case('a') :
                handle_add(numbers);
                break;
            case('M') :
            case('m') :
                handle_mean(numbers);
                break;
            case('S') :
            case('s') :
                handle_smallest(numbers);
                break;
            case('L') :
            case('l') :
                handle_largest(numbers);
                break;
            case('Q') :
            case('q') :
                handle_quit();
                break;
            default:
                handle_unknown();
        } 
    } while (selection != 'Q');
    cout << endl;

    cout << "================================================================" << endl;
    cout << endl;

    return 0;
}

// Function definitions
void display_menu() {
    cout << "\nP - Print numbers" << endl;
    cout << "A - Add a number" << endl;
    cout << "M - Display the mean of the numbers" << endl;
    cout << "S - Display the smallest number" << endl;
    cout << "L - Display the largest number" << endl;
    cout << "Q - Quit" << endl;
    cout << "\nEnter your selection: ";
}

char get_selection() {
    char selection {};
    cin >> selection;
    return toupper(selection); // Converts lowercase to uppercase
}

void handle_display(const vector<int>& v) {
    if (v.empty()) {
        cout << "No numbers added yet." << endl;
    } else {
        display_list(v);
    }
}

void display_list(const vector<int>& v) {
    cout << "Numbers: ";
    for (int number : v) {
        cout << number << " ";
    }
    cout << endl;
}

void handle_add(vector<int>& v) {
    int num_to_add;
    cout << "Enter a number to add: ";
    cin >> num_to_add;
    v.push_back(num_to_add);
    cout << num_to_add << " added." << endl;
}

void handle_mean(const vector<int> &v) {
    if (v.empty()) {
        cout << "No numbers added yet." << endl;
    } else {
        double sum = 0;
        for (int number : v) {
            sum += number;
        }
        double mean = sum / v.size();
        cout << "The mean of the numbers is: " << mean << endl;
    }
}

void handle_smallest(const vector<int> &v) {
    if (v.empty()) {
        cout << "No numbers added yet." << endl;
    } else {
        int smallest = v[0];
        for (int number : v) {
            if (number < smallest) {
                smallest = number;
            }
        }
        cout << "The smallest of the numbers is: " << smallest << endl;
    }
}

void handle_largest(const vector<int> &v) {
    if (v.empty()) {
        cout << "No numbers added yet." << endl;
    } else {
        int largest = v[0];
        for (int number : v) {
            if (number > largest) {
                largest = number;
            }
        }
        cout << "The largest of the numbers is: " << largest << endl;
    }
}

void handle_quit() {
    cout << "Goodbye!" << endl;
}

void handle_unknown() {
    cout << "Invalid selection. Please try again." << endl;
}