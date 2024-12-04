#include <iostream>
#include <string>
#include "Player.h"

using namespace std;
// Constructor Initialization Lists
// More efficient than initializing in the constructor body
// Initialization List immediately follows the parameter list
// Initializes the data memebers as the object is created
// order of initialization is the order of declaration in the class


int main() {
    cout << "=============================================================" << endl;
    cout << endl;

    Player slayer("Slayer", 100, 10);
    cout << "Player name is: " << slayer.get_name() << endl;
    cout << "Health is: " << slayer.get_health() << endl;
    cout << "XP is: " << slayer.get_xp() << endl;

    cout << endl;
    
    cout << endl;
    cout << "=============================================================" << endl;

    return 0;
}

// Need to complie this manually with:
// clang++ -std=c++17 main.cpp Player.cpp -o main && ./main
// We can change the task.json file to allow this in a specific project
// But not for the general usage we have here