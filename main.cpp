#include <iostream>
#include <string>

// Visibility doesn't affect performance, it mainly helps with code readability

// Remember a class is default private meaning anything outside of the class scope cannot access it
class Entity
{

    // Private means only this class and a "friend" class/function can access the data
private:
    int X, Y;

public:
    Entity() { X = 0; }
};

class Player : public Entity
{
};

int main()
{
    Entity e;
    e.X = 2; // Although e is an Entity, X is private and cannot be called outside of the class scope

    std::cin.get();
}
