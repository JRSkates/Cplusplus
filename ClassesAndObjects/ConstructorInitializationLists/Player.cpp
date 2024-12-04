#include "Player.h"

// No-args constructor
Player::Player() : name{"None"}, health{0}, xp{0} {
    cout << "No-args constructor called for " << name << endl;
}

// One-arg constructor
Player::Player(string name_val) : name{name_val}, health{0}, xp{0} {
    cout << "One-arg constructor called for " << name << endl;
}

// Three-arg constructor
Player::Player(string name_val, int health_val, int xp_val)
    : name{name_val}, health{health_val}, xp{xp_val} {
    cout << "Three-args constructor called for " << name << endl;
}

// Destructor
Player::~Player() {
    cout << "Destructor called for " << name << endl;
}

// Getter method
string Player::get_name() {
    return name;
}

void Player::set_name(string name_val) { name = name_val; };

int Player::get_health() { return health; };

int Player::get_xp() { return xp; };