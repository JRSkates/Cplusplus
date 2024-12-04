#include <iostream>
#include <string>
#include "Player.h"

using namespace std;
// Copy Constructor
// When objects are copied C++ must create a new object from an existing object
// When is a copy of an object made:
// - passing object by value as a parameter
// - returning an object from a function by value
// - constructing one object based on another of the same class
// C++ must have a way of accomplishing this 
// so it provides a complier-defined copy constructor if you don't


int main() {
    cout << "=============================================================" << endl;
    cout << endl;

    Player none;
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

    // This creates a true copy, as its passed by reference, not by value


    cout << endl;
    cout << "=============================================================" << endl;

    return 0;
}

// Need to complie this manually with:
// clang++ -std=c++17 main.cpp Player.cpp -o main && ./main
// We can change the task.json file to allow this in a specific project
// But not for the general usage we have here