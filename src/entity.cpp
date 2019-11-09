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
} // namespace playground
