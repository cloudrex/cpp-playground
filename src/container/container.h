#pragma once

namespace playground {
    template<typename T>
    class Container {
    private:
        T value;

    public:
        Container(T value) : value(value) {
            //
        }

        T &unwrap() {
            return this->value;
        }
    };
}
