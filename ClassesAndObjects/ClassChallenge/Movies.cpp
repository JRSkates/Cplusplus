#include <iostream>
#include "Movies.h"
#include "Movie.h"

Movies::Movies(string title, vector<Movie> movie_list) : title(title), movie_list(movie_list) {
};

Movies::Movies(const Movies &source) 
    : title(source.title), movie_list(source.movie_list) {
}


Movies::~Movies() {
}

void Movies::display() {
    cout << this->title << endl;
    cout << "----------------------------------------" << endl;
    for (auto &movie : this->movie_list) {
        // cout << "Name: " << movie.get_name() << movie;
        movie.display();
        cout << "----------------------------------------" << endl;
    }
    cout << endl;
}

void Movies::add_movie(Movie &movie) {
    this->movie_list.push_back(movie);
}

void Movies::increment_watched(const string &name) {
    for (auto &movie : this->movie_list) {
        if (movie.get_name() == name) {
            movie.increment_watched();
            break;
        }
    }
}

double Movies::get_average_rating() const {
    double total_rating = 0;
    for (const auto &movie : this->movie_list) {
        total_rating += movie.get_out_of_ten();
    }
    return total_rating / this->movie_list.size();
}

void Movies::display_average_rating() {
    double average_rating = this->get_average_rating();
    cout << this->title <<" Average Rating: " << average_rating << endl;
}