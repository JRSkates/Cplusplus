#include <iostream>

using namespace std;

int main() {
    int favourite_number;
    cout << "Enter your favourite number between 1 and 100: ";

    cin >> favourite_number;
    
    cout << favourite_number << "? Amazing! That's my favourite number too!" << endl;

    cout << "No really!! " << favourite_number << " is my favourite number too!" << endl;

    return 0;
}
