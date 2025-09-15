#ifndef IEEEMDB_USER_H
#define IEEEMDB_USER_H

#include <iostream>
#include "Movie.h"
#include "Review.h"
#include "MovieList.h"

class User {
private:
    std::string name;
    int age;
    std::string accountCreationDate;
    std::vector<Review> reviews;
    std::vector<MovieList> lists;

public:
    User(std::string name, int age);

    std::string getName() const;
    int getAge() const;
    std::string getAccountCreationDate() const;

    void addReview(Movie movie, Review review);
    void createMovieList(std::string name, std::vector<Movie> movies);
};

#endif //IEEEMDB_USER_H
