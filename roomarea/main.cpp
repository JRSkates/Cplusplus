#include <iostream>

using namespace std;

int main() {

    cout << "Enter the width of the room: ";
    int width;
    cin >> width;

    cout << "Enter the length of the room: ";
    int length;
    cin >> length;

    int area = width * length;

    cout << "The area of the room is " << area << " square meters" << endl;

    return 0;
}