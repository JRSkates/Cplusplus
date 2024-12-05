#include <iostream>
#include <string>
#include "Movie.h"
#include "Movies.h"

using namespace std;
// Example of what main should be able to do
// - create a Movies object
// - ask the Movies object to add a movie by providing 
//   name, rating and watch-count
// - ask the Movies object to increment the watched count by 
//   1 for a movie, given its name
// - ask the Movies objec to display all of its movies



int main() {
    cout << "=========================================================" << endl;
    cout << endl;

    Movie one_movie("Star Wars", "PG", 1);
    one_movie.display();

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