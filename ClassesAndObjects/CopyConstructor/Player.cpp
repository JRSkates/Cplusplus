#include "Player.h"

// Three-arg constructor
// Default constructor parameters added in Player.h
Player::Player(std::string name_val , int health_val, int xp_val)
    : name{name_val}, health{health_val}, xp{xp_val} {
    cout << "Three-args constructor called for " << name << endl;
}

// No-args constructor
// Player::Player() : Player {"None", 0, 0} {
//     cout << "No-args constructor called for " << name << endl;
// }

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

void Player::set_name(string name_val) { name = name_val; };

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
