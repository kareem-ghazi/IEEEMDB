#ifndef IEEEMDB_MOVIE_H
#define IEEEMDB_MOVIE_H

#include <iostream>
#include <vector>
#include "Actor.h"
#include "Review.h"
#include "User.h"

class Movie {
private:
    std::string name;
    std::string releaseDate;
    int durationInMinutes;
    std::string description;
    std::vector<Actor> castMembers;
    std::vector<std::pair<User, std::vector<Review>>> reviews;

public:
    Movie(std::string name);
    Movie(std::string name, std::string releaseDate);
    Movie(std::string name, std::string releaseDate, int durationInMinutes);
    Movie(std::string name, std::string releaseDate, int durationInMinutes, std::string description);
    Movie(std::string name, std::string releaseDate, int durationInMinutes, std::string description, std::vector<Actor> castMembers);

    std::string getName() const;
    std::string getReleaseDate() const;
    int getDurationInMinutes() const;
    std::string getDescription() const;
    std::vector<Actor> getCastMembers() const;

    void setName(std::string name);
    void setReleaseDate(std::string releaseDate);
    void setDurationInMinutes(int durationInMinutes);
    void setDescription(std::string description);
    void setCastMembers(std::vector<Actor> castMembers);

    void addCastMember(Actor actor);
    void addReview(User user, Review review);
};


#endif //IEEEMDB_MOVIE_H
