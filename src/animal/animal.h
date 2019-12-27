#include <string>

namespace playground {
    class Animal {
    private:
        std::string name;

    public:
        Animal(std::string name);

        std::string getName() const;
    };
}
