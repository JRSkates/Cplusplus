#include "Player.h"
void Player::set_name(string name_val) { name = name_val; };
string Player::get_name() { return name; };
int Player::get_health() { return health; };
int Player::get_xp() { return xp; };

Player::Player() {
    name = "None";
    health = 0;
    xp = 0;
    cout << "No-args constructor called" << endl;
};

Player::Player(string name_val, int health_val, int xp_val) {
    name = name_val;
    health = health_val;
    xp = xp_val;
    cout << "Three-args constructor called" << endl;
};

Player::~Player() {
    cout << "Destructor called for " << name << endl;
}