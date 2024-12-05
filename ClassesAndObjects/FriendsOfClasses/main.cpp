#include <iostream>
#include <string>
#include "Player.h"

using namespace std;
// Friends of Classes
// A class (or function) that has access to private class members
// It is not a member of the class it is accessing
// Function wise they can be regular non-member functions
// Can be member methods of another class
// Class wise - another class can have access to private class members

// Function prototyped out of Player class scope
void display_active_players();

int main() {
    cout << "=========================================================" << endl;
    cout << endl;

    Player none;
    none.set_name("This Pointer");
    Player hero("Hero", 200, 100);

    cout << "==================" << endl;
    cout << endl;

    display_friend_players(hero);

    cout << "==================" << endl;

    // Static num_players class wide integer
    display_active_players();

    Player third_player;

    display_active_players();
    
    cout << endl;
    cout << "========================================================" << endl;

    return 0;
}

void display_active_players() {
    cout << "Number of active players: " << Player::get_num_players() << endl;
}

// friend function, does not need to use getter and setter functions
void display_friend_players (Player &p) {
    cout << "Friend function display_friend_players called for " << p.name << endl;
    cout << "Number of active players: " << p.num_players << endl;
    cout << "Health is: " << p.health;
    cout << "XP is: " << p.xp << endl;
}



// Need to complie this manually with:
// clang++ -std=c++17 main.cpp Player.cpp -o main && ./main
// We can change the task.json file to allow this in a specific project
// But not for the general usage we have here