#ifndef _PLAYER_H_
#define _PLAYER_H_

#include <iostream>
#include <string>

using namespace std;

class Player {
private:
    string name;
    int health;
    int xp;
public:
    // Overloaded Constructors
    Player(string name, int health, int xp);
    Player();
    Player(string name);
    // Destructor
    ~Player();
    string get_name();
    void set_name(string name);
    int get_health();
    int get_xp();
};

#endif // _PLAYER_H_
