#include <iostream>
#include "Player.h"

using namespace std;

int main() {
    cout << "===========================================================" << endl;

    Player slayer;
    Player jack {"Jack"};
    Player hero {"Hero", 100, 50};

    cout << "Player name of jack is: " << jack.get_name() << endl;
    cout << "Player name of hero is: " << hero.get_name() << endl;

    cout << "===========================================================" << endl;

    return 0;
}


// Need to complie this manually with:
// clang++ -std=c++17 main.cpp Player.cpp -o main && ./main
// We can change the task.json file to allow this in a specific project
// But not for the general usage we have here