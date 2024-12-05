#ifndef _MOVIES_H_
#define _MOVIES_H_

#include <iostream>
#include <string>
#include "Movie.h"


using namespace std;

// Movies class - models a collection of movie objects
// Movies needs to know about Movie since it is a collection of Movie objects
// However our main driver should only interact with the Movies class

class Movies {
private:
    string title;
    // Vector of Movie objects - a collection of Movie objects
    vector<Movie> movie_list;
public:

    // Constructor - should initialize an empty movie_list
    // Constructor, acceptes a vector of Movie objects
    Movies(string title = "My Movie List", vector<Movie> movie_list = {});

    // Copy constructor 
    Movies(const Movies &source);

    // Destructor - should delete all Movie objects in the movie_list
    ~Movies();

    // Getter and setter for title
    void set_title(string title) { this->title = title; }
    string get_title() const { return title; }

    vector<Movie> get_movie_list() const { return movie_list; }

    // Method to display the list of movie objects
    void display();

    // Method to add a Movie object to Movies object
    void add_movie(Movie &movie);

    // Method to increment the watched count of a movie by 1
    void increment_watched(const string &name);

    // Method to get average rating of all movies
    double get_average_rating() const;

    void display_average_rating();
};

// void add_movie(Movie &movie, Movies &movie_list);

#endif // _MOVIES_H_
