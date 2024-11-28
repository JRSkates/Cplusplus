#include <iostream>
#include <vector>
#include <string>

using namespace std;

int main() {
    cout << "================================================================" << endl;
    cout << endl;

    string alphabet ("abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ");
    string key ("XZNLWEBGJHQDYVTKFUOMPCIASRxznlwebgjhqdyvtkfuompciasr");

    string secret_message {};
    cout << "Enter your secret message: " << endl;
    getline(cin, secret_message);
    cout << "Encrypting message: " << endl;

    for (int i {0}; i < secret_message.size(); i++) {
        char c = secret_message[i];
        // cout << "Character: " << c << endl;

        if (isalpha(c)) {
            size_t index = alphabet.find(c);
            // cout << index << endl;
            char shifted_c = key[index];
            // cout << shifted_c << endl;

            secret_message[i] = shifted_c;
        }
    }

    cout << "Encrypted message: " << secret_message << endl;

    cout << "--------------------------------" << endl;

    string decrypted_message = secret_message;

    cout << "Decrypting message: " << endl;

    for (int i {0}; i < secret_message.size(); i++) {
        char c = secret_message[i];
        // cout << "Character: " << c << endl;

        if (isalpha(c)) {
            size_t index = key.find(c);
            // cout << index << endl;
            char shifted_c = alphabet[index];
            // cout << shifted_c << endl;

            decrypted_message[i] = shifted_c;
        }
    }

    cout << "Decrypted message: " << decrypted_message << endl;

    return 0;
}