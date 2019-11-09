#include "dog.h"

namespace playground
{
Dog::Dog(std::string name) : Animal(name)
{
    //
}

void Dog::bark()
{
    this->say("Woof!");
}
} // namespace playground
