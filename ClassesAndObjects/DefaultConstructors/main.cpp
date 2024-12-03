#include <iostream>
#include <string>
#include "Player.h"

using namespace std;

int main() {
    cout << "=============================================================" << endl;
    cout << endl;

    Player player1;
    player1.set_name("Jack");

    cout << "Player name is: " << player1.get_name() << endl;
    cout << "Health is: " << player1.get_health() << endl;
    cout << "XP is: " << player1.get_xp() << endl;

    cout << endl;

    Player player2("Hero", 100, 50);
    cout << "Player name is: " << player2.get_name() << endl;
    cout << "Health is: " << player2.get_health() << endl;
    cout << "XP is: " << player2.get_xp() << endl;
    
    cout << endl;
    cout << "=============================================================" << endl;

    return 0;
}

// Need to complie this manually with:
// clang++ -std=c++17 main.cpp Player.cpp -o main && ./main
// We can change the task.json file to allow this in a specific project
// But not for the general usage we have here