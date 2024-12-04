#include "Player.h"

// Three-arg constructor
// Default constructor parameters added in Player.h
Player::Player(std::string name_val , int health_val, int xp_val)
    : name{name_val}, health{health_val}, xp{xp_val} {
    cout << "Three-args constructor called for " << name << endl;
}

// // One-arg constructor
// Player::Player(string name_val) : Player {name_val, 0, 0} {
//     cout << "One-arg constructor called for " << name << endl;
// }

// Destructor
Player::~Player() {
    cout << "Destructor called for " << name << endl;
}

// Getter method
string Player::get_name() { return name; };

// Written literally for name = name_val using the this pointer
// This just points to its own object
void Player::set_name(string name_val) { this->name = name_val; };

int Player::get_health() { return health; };

int Player::get_xp() { return xp; };

void Player::display_player() {
    cout << "Player name is: " << name << endl;
    cout << "Health is: " << health << endl;
    cout << "XP is: " << xp << endl;
}

// We pass by reference the object of the same class we want to copy
// the original class object is passed as a const
// So it is not modified 
Player::Player(const Player &source) 
    : name{source.name},
      health{source.health}, 
      xp{source.xp} {
    cout << "Copy constructor called for " << name << endl;
};

// Function to compare a player to another player
void Player::compare_name(const Player &other) {
    if (this->name == other.name) {
        cout << "Player names are equal" << endl;
    } else {
        cout << "Player names are not equal" << endl;
    }
}