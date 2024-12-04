#ifndef _PLAYER_H_
#define _PLAYER_H_

#include <iostream>
#include <string>

using namespace std;

class Player {
private:
    std::string name;
    int health;
    int xp;
public:
    // Overloaded Constructors
    // Three-arg constructor
    // Default constructor parameters added 
    Player(std::string name_val = "None", int health_val = 0, int xp_val = 0);
    // Player();
    // Player(string name);
    // Destructor
    ~Player();
    std::string get_name();
    void set_name(std::string name);
    int get_health();
    int get_xp();
};

#endif // _PLAYER_H_
