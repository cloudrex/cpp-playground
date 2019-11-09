#include <iostream>
#include "animal.h"

namespace playground
{
std::string Animal::getName() const
{
    return "Generic animal";
}

void Animal::say(std::string message)
{
    std::cout << this->getName() << " says: " << message << std::endl;
}
} // namespace playground
