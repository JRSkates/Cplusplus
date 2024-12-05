#include <iostream>
#include <string>
#include "Movie.h"
#include "Movies.h"

using namespace std;
// Friends of Classes
// A class (or function) that has access to private class members
// It is not a member of the class it is accessing
// Function wise they can be regular non-member functions
// Can be member methods of another class
// Class wise - another class can have access to private class members

// Function prototyped out class scope


int main() {
    cout << "=========================================================" << endl;
    cout << endl;


    cout << "==================" << endl;
    cout << endl;



    cout << "==================" << endl;


    cout << endl;
    cout << "========================================================" << endl;

    return 0;
}



// Need to complie this manually with:
// clang++ -std=c++17 main.cpp Movie.cpp Movies.cpp -o main && ./main
// We can change the task.json file to allow this in a specific project
// But not for the general usage we have here