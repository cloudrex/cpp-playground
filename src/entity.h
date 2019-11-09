#include <string>

namespace playground
{
class Entity
{
protected:
    std::string name;

public:
    Entity(std::string name);

    virtual std::string getName() const = 0;
};
} // namespace playground
