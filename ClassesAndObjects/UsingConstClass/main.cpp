#include <iostream>
#include <string>
#include "Player.h"

using namespace std;
// Using Const with Class


int main() {
    cout << "=============================================================" << endl;
    cout << endl;

    Player none;
    none.set_name("This Pointer");
    cout << none.get_name() << endl;

    cout << endl;

    // Player with empty constructor
    // This pointer is used to access the object's members
    // This pointer is automatically passed to the constructor
    cout << "Player with empty constructor: " << none.get_name() << endl;
    cout << "Health is: " << none.get_health() << endl;
    cout << "XP is: " << none.get_xp() << endl;

    cout << "==================" << endl;

    Player hero("Hero", 200, 100);
    cout << "Player name of hero is: " << hero.get_name() << endl;
    cout << "Health is: " << hero.get_health() << endl;
    cout << "XP is: " << hero.get_xp() << endl;

    cout << endl;

    // Copy constructor example
    Player hero_copy(hero);
    cout << endl;
    // (const &hero);
    hero_copy.display_player();

    cout << endl;

    // Const 
    const Player villain {"Villain", 100, 99};
    // villain.set_name("Villain (Const)"); // This will throw an error
    cout << "Player name of villain (const) is: " << villain.get_name() << endl;
    cout << "Health is: " << villain.get_health() << endl;
    cout << "XP is: " << villain.get_xp() << endl;


    cout << endl;


    cout << endl;
    cout << "=============================================================" << endl;

    return 0;
}

// Need to complie this manually with:
// clang++ -std=c++17 main.cpp Player.cpp -o main && ./main
// We can change the task.json file to allow this in a specific project
// But not for the general usage we have here