#include "User.h"
#include "Movie.h"

std::string User::getName() const {
    return this->name;
}

int User::getAge() const {
    return this->age;
}

std::string User::getAccountCreationDate() const
{
    return this->accountCreationDate;
}

void User::addReview(Movie movie, Review review)
{
    movie.addReview(review);
}

void createMovieList(std::string name, std::vector<Movie> movies)
{

}