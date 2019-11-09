#include "entity.h"

namespace playground
{
class Animal : public Entity
{
public:
    Animal(std::string name);

    std::string getName() const override;

    virtual void say(std::string message);
};
} // namespace playground
