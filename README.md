# IEEEMDB

**IEEEMDB** is a platform where people can discover new movies and speak their thoughts on movies with other people.

### Functional Requirements

1. Users can find a movie and add it to their watched list or to-watch list and track their movies.
2. Users could leave reviews on movies if they want or give them a specific rating.
3. New movies are recommended to the user depending on their ratings and their reviews on similiar genres.
4. Users can create their own lists and share them with other users.

#### [Out of Scope]

- Custom ratings for users who review with upvote system
- Discussion forums about movies
- Users can fork user lists and build upon existing ones
- Movie of the week recommender that recommends the most popular movie currently

### Non-Functional Requirements

1. The system should prioritize strong availability to allow people to access the platform at anytime / see their saved movies.
2. The system should be able to handle high throughput during movie release events (250k+ users at a given moment).
3. The system should be low latency (< 1 min to return movie search results & movie meta-data & reviews).

#### [Out of Scope]

- GDPR privacy and security system
- Custom filtering for comments that break guidelines
- Secure encryption for account security

### Data Model (Core Entities)

- Movie
- Movie Collections
- Review
- Users

### API Design

- Create movies with the specific meta-data.
```
POST /movies -> Movies[]
{
    name,
    releaseDate,
    duration,
    description,
    castMembers[]
}
```

- Fetch a movie from the platform.
```
GET /movies/search?name={searchQuery}&time={dateRange} -> 2xx
```

- Add a review to a movie (get user data from header or JWToken).
```
POST /reviews/{movieid} -> 2xx
{
    comment,
    date
}
```

- Create a movie list with a given set of Movies.
```
POST /movielist/ -> MovieList
{
    name,
    Movies[],
    description
}
```

- Edit a movie list.
```
PATCH /movielist/{movielistId} -> 2xx
{
    name,
    Movies[],
    description
}
```

### High-level Architecture

File can be found in the repo with a `.excalidraw` extension.

