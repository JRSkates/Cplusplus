/******************************************************************
 * Section 13 Challenge Solution
 * Movie.h
 * 
 * Models a Movie with the following atttributes
 * 
 * std::string name - the name of the movie 
 * std::string rating - G, PG, PG-13, R
 * int watched - the number of times you've watched the movie
 * ***************************************************************/
#ifndef _MOVIE_H_
#define _MOVIE_H_

#include <string>

class Movie
{
private:
    std::string name;   // the name of the movie
    std::string rating;   // the movie rating G,PG, PG-13, R
    int watched;          // the number of times you've watched the movie
    double out_of_ten;   // the movie's rating out of 10, rounded to 2 decimal places
public:
    // Constructor - expects all 3 movie attributes
    Movie(std::string name, std::string rating, int watched, double out_of_ten);
    
    // Copy constructor 
    Movie(const Movie &source); 
    
    // Destructor
    ~Movie();
    
    // Basic getters and setters for private attributes
    // implement these inline and watch your const-correctness
    void set_name(std::string name) {this->name = name; }
    std::string get_name() const { return name; }
    
    void set_rating(std::string rating) {this->rating = rating; }
    std::string get_rating() const { return rating; }
    
    void set_watched(int watched) {this->watched = watched; }
    int get_watched() const { return watched; }

    void set_out_of_ten(double out_of_ten) { this->out_of_ten = out_of_ten; }
    
    double get_out_of_ten() const { return out_of_ten; }
    
    // Simply increment the watched attribute by 1
    void increment_watched() { ++watched; }
    
    // simply displays the movie information ex.) Big, PG-13, 2
    void display() const;
};

#endif // _MOVIE_H_

