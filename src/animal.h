#include "entity.h"

namespace playground
{
class Animal : public Entity
{
    std::string getName() const override;

    virtual void say(std::string message);
} // namespace playground
