#ifndef IEEEMDB_MOVIELIST_H
#define IEEEMDB_MOVIELIST_H

#include <iostream>
#include "Movie.h"

class MovieList {
private:
    std::vector<Movie> movies;

public:
    MovieList(std::vector<Movie> movies);

    std::vector<Movie> getMovies() const;
};

#endif //IEEEMDB_MOVIELIST_H
