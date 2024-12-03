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
    void set_name(string name_val);
    string get_name();
    int get_health();
    int get_xp();
    Player();
    Player(string name, int health, int xp);
    // Destructor
    ~Player();
};

#endif // _PLAYER_H_
