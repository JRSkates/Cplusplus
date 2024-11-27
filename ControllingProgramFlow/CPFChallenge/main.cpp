#include <iostream>
#include <vector>

using namespace std;

int main() {
    cout << "================================================================" << endl;
    cout << endl;

    vector<int> numbers {};
    char selection {};

    do {
        cout << "\nP - Print numbers" << endl;
        cout << "A - Add a number" << endl;
        cout << "M - Display the mean of the numbers" << endl;
        cout << "S - Display the smallest number" << endl;
        cout << "L - Display the largest number" << endl;
        cout << "Q - Quit" << endl;
        cout << "\nEnter your selection: ";
        cin >> selection;

        switch (selection) {
            case 'A':
            case 'a': {
                int num {};
                cout << "Enter a number to add to the list: ";
                cin >> num;
                numbers.push_back(num);
                cout << num << " added to the list." << endl;
                break;
            }
            case 'P':
            case 'p': {
                if (numbers.size() == 0) {
                    cout << "The list is empty." << endl;
                } else {
                    cout << "Full list of numbers: ";
                    for (auto num : numbers) {
                        cout << num << " ";
                    }
                    cout << endl;
                }
                break;
            }
            case 'M':
            case 'm': {
                if (numbers.size() == 0) {
                    cout << "The list is empty." << endl;
                } else {
                    double sum {0.0};
                    for (auto num : numbers) {
                        sum += num;
                    }
                    cout << "Mean of the numbers: " << sum / numbers.size() << endl;
                }
                break;
            }
            case 'S':
            case 's': {
                if (numbers.size() == 0) {
                    cout << "The list is empty." << endl;
                } else {
                    int smallest = numbers[0];
                    for (auto num : numbers) {
                        if (num < smallest) {
                            smallest = num;
                        }
                    }
                    cout << "Smallest number in the list: " << smallest << endl;
                }
                break;
            }
            case 'L':
            case 'l': {
                if (numbers.size() == 0) {
                    cout << "The list is empty." << endl;
                } else {
                    int largest = numbers[0];
                    for (auto num : numbers) {
                        if (num > largest) {
                            largest = num;
                        }
                    }
                    cout << "Largest number in the list: " << largest << endl;
                }
                break;
            }
            case 'Q':
            case 'q':
                cout << "Goodbye!" << endl;
                break;
            default:
                cout << "Invalid selection. Please try again." << endl;
        }

    } while (selection != 'q' && selection != 'Q');

    cout << endl;
    return 0;
}
