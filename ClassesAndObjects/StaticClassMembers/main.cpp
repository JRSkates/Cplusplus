#include <iostream>
#include <string>
#include "Player.h"

using namespace std;
// Static Class Members
// A single data memeber that belongs to the class
// Useful to store class-wide information
// Class functions can be declared as static
// Independent of any objects
// Can be called using the class name


int main() {
    cout << "=========================================================" << endl;
    cout << endl;

    Player none;
    none.set_name("This Pointer");
    Player hero("Hero", 200, 100);

    cout << "==================" << endl;

    // Static num_players class wide integer
    none.display_active_players();

    Player third_player;

    none.display_active_players();
    
    cout << endl;
    cout << "========================================================" << endl;

    return 0;
}

// Need to complie this manually with:
// clang++ -std=c++17 main.cpp Player.cpp -o main && ./main
// We can change the task.json file to allow this in a specific project
// But not for the general usage we have here