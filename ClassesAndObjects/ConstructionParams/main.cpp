#include <iostream>
#include <string>
#include "Player.h"

using namespace std;
// Default Constructor Parameters
// Allows us to initialize with default constructor parameters
// Means we can have flexible construction of the object
// Without errors around initialization


int main() {
    cout << "=============================================================" << endl;
    cout << endl;

    Player slayer("Slayer", 100, 10);
    cout << "Player name is: " << slayer.get_name() << endl;
    cout << "Health is: " << slayer.get_health() << endl;
    cout << "XP is: " << slayer.get_xp() << endl;

    cout << endl;

    // We can have just one argument, the others will be the default constructor parameters
    Player jack("Jack");
    cout << "Player name of jack is: " << jack.get_name() << endl;
    cout << "Health is: " << jack.get_health() << endl;
    cout << "XP is: " << jack.get_xp() << endl;

    // We can also have just two arguments
    Player hero("Hero", 200);
    cout << "Player name of hero is: " << hero.get_name() << endl;
    cout << "Health is: " << hero.get_health() << endl;
    cout << "XP is: " << hero.get_xp() << endl;

    // Or no arguments
    Player mystery_player;
    cout << "Player name of mystery player is: " << mystery_player.get_name() << endl;
    cout << "Health is: " << mystery_player.get_health() << endl;
    cout << "XP is: " << mystery_player.get_xp() << endl;

    cout << endl;

    cout << endl;
    
    cout << endl;
    cout << "=============================================================" << endl;

    return 0;
}

// Need to complie this manually with:
// clang++ -std=c++17 main.cpp Player.cpp -o main && ./main
// We can change the task.json file to allow this in a specific project
// But not for the general usage we have here