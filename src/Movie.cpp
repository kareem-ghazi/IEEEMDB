#include "Movie.h"

Movie::Movie(std::string name) {
    this->name = name;
}

Movie::Movie(std::string name, std::string releaseDate) : Movie(name)
{
    this->releaseDate = releaseDate;
}

Movie::Movie(std::string name, std::string releaseDate, int durationInMinutes) : Movie(name, releaseDate)
{
    this->durationInMinutes = durationInMinutes;
}

Movie::Movie(std::string name, std::string releaseDate, int durationInMinutes, std::string description) : Movie(name, releaseDate, durationInMinutes)
{
    this->description = description;
}

Movie::Movie(std::string name, std::string releaseDate, int durationInMinutes, std::string description, std::vector<Actor> castMembers)
: Movie(name, releaseDate, durationInMinutes, description)
{
    this->castMembers = castMembers;
}

std::string Movie::getName() const
{
    return this->name;
}

std::string Movie::getReleaseDate() const
{
    return this->releaseDate;
}

int Movie::getDurationInMinutes() const
{
    return this->durationInMinutes;
}

std::string Movie::getDescription() const
{
    return this->description;
}

std::vector<Actor> Movie::getCastMembers() const
{
    return this->castMembers;
}

void Movie::setName(std::string name)
{
    this->name = name;
}

void Movie::setReleaseDate(std::string releaseDate)
{
    this->releaseDate = releaseDate;
}

void Movie::setDurationInMinutes(int durationInMinutes)
{
    this->durationInMinutes = durationInMinutes;
}

void Movie::setDescription(std::string description)
{
    this->description = description;
}

void Movie::setCastMembers(std::vector<Actor> castMembers)
{
    this->castMembers = castMembers;
}

void Movie::addCastMember(Actor actor) {
    this->castMembers.push_back(actor);
}

void Movie::addReview(User user, Review review)
{
    this->reviews.push_back(review);
}