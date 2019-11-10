#include <iostream>
#include "entity.h"

namespace playground
{
Entity::Entity(std::string name) : name(name)
{
    //
}

std::string Entity::getName() const
{
    return this->name;
}

void Entity::forceTest(Animal a)
{
    std::cout << "test: " << a.getName() << std::endl;
}
} // namespace playground
