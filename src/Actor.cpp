#include "Actor.h"

Actor::Actor(std::string name, int age) {
    this->name = name;
    this->age = age;
}

std::string Actor::getName() const {
    return this->name;
}

int Actor::getAge() {
    return this->age;
}