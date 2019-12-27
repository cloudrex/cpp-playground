#pragma once

#include <set>
#include "container.h"

namespace playground {
    template<typename T>
    class Set : public Container<std::set < T>>

{
    public:

    Set(std::set <T> value = {}) : Container<T>(value) {
        //
    }

    bool contains(T item) {
        // TODO: Implement.

        return false;
    }

    bool insert(T item) {
        // TODO: Implement.

        return false;
    }

    bool remove(T item) {
        // TODO: Implement.

        return false;
    }

    void clear() {
        // TODO: Implement.

        return false;
    }
};
}
