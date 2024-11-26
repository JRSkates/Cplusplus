#include <iostream>

using namespace std;

int main() {
    cout << "Hello, welcome to Jack's Carpet Cleaning Service" << endl;
    cout << "\nHow many rooms would you like cleaned? " << endl;

    int number_of_rooms;
    cin >> number_of_rooms;
    const int room_price {30};
    const double tax {0.06};  // 6% tax rate
    const int estimate_expiry {30};

    cout << "\nEstimate for carpet cleaning service: " << endl;
    cout << "Number of rooms: " << number_of_rooms << endl;
    cout << "Price per room: £" << room_price << endl;
    cout << "Total cost: £" << number_of_rooms * room_price << endl;
    cout << "Tax: £" << room_price * number_of_rooms * tax << endl;
    cout << "================================================================" << endl;
    cout << "Total cost including tax: £" << (number_of_rooms * room_price) + (room_price * number_of_rooms * tax) << endl;
    cout << "================================================================" << endl;
    cout << "This estimate is valid for " << estimate_expiry << " days" << endl;
    cout << "\nThank you for choosing Jack's Carpet Cleaning Service!" << endl;

    return 0;
}