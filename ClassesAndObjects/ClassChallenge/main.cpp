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

void add_movie(Movie &movie, Movies &movie_list) {

}

int main() {
    cout << "===============================================" << endl;
    cout << endl;

    Movie one_movie("Star Wars", "PG", 1, 9.8);
    one_movie.display();
    Movie two_movie("Pulp Fiction", "18", 1, 8.7);
    two_movie.display();
    Movie three_movie("Dune Part 2", "12A", 1, 8.2);
    three_movie.display();

    cout << endl;

    Movies first_list;
    // add movies
    first_list.add_movie(one_movie);
    first_list.add_movie(two_movie);
    first_list.add_movie(three_movie);
    // display the movies
    first_list.display();

    cout << "==================" << endl;
    // copy initializer
    Movies second_list(first_list);
    second_list.increment_watched("Star Wars");
    second_list.increment_watched("Dune Part 2");
    second_list.increment_watched("Dune Part 2");

    first_list.display();
    second_list.display();
    second_list.display_average_rating();

    cout << endl;
    cout << "==================" << endl;

    // Initiliaze with raw input
    Movie example_movie("Example Movie", "U", 1, 6.1);
    Movie example_movie_two("Second Example", "15", 1, 3.2);
    vector<Movie> example_vec {example_movie, example_movie_two};
    Movies third_list("Third List!!", example_vec);
    third_list.display();

    // initilize with movie_list from another Movies object
    Movies fourth_list("New Fourth List", third_list.get_movie_list());
    // fourth_list.set_title("New Fourth List");
    fourth_list.display();



    cout << endl;
    cout << "==============================================" << endl;

    return 0;
}



// Need to complie this manually with:
// clang++ -std=c++17 main.cpp Movie.cpp Movies.cpp -o main && ./main
// We can change the task.json file to allow this in a specific project
// But not for the general usage we have here