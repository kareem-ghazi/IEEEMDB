#ifndef IEEEMDB_ACTOR_H
#define IEEEMDB_ACTOR_H

#include <iostream>

class Actor {
private:
    std::string name;
    int age;

public:
    Actor(std::string name, int age);

    std::string getName() const;
    int getAge();
};


#endif //IEEEMDB_ACTOR_H
