#pragma once

#include "animal.h"

namespace playground
{
class Dog : public Animal
{
public:
    Dog(std::string name);

    void bark();
};
} // namespace playground
