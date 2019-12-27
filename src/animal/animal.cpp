#include "animal.h"

namespace playground {
    Animal::Animal(std::string name) : name(name) {
        //
    }

    std::string Animal::getName() const {
        return this->name;
    }
}
