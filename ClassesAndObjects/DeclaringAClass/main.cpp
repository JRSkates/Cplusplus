#include <iostream>
#include <vector>
#include <string>

using namespace std;

class Player {
// These attributes are public so they can be used by the user
public:
    // attributes
    string name;
    int health = 100;
    int xp = 0;
    bool dead_check = false;

    // methods
    void talk(string text_to_say) {
        cout << text_to_say << endl;
    }

    void is_dead() {
        cout << dead_check << endl;
    };
};

int main() {
    cout << "================================================================" << endl;
    cout << endl;

    Player player1;
    string say_hello {"Hello!"};
    player1.talk(say_hello);
    player1.is_dead();

    Player player2;
    // Create an array of player classs objects
    Player players[] = {player1, player2};

    vector <Player> player_vec {player1};
    player_vec.push_back(player2);

    // can create a player with a pointer
    Player *enemy1 {nullptr};
    enemy1 = new Player();
    delete enemy1;

    return 0;
}