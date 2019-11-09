#include <iostream>
#include "animal.h"

namespace playground
{
Animal::Animal(std::string name) : Entity(name)
{
    //
}

std::string Animal::getName() const
{
    return this->name;
}

void Animal::say(std::string message)
{
    std::cout << this->getName() << " says: " << message << std::endl;
}
} // namespace playground
