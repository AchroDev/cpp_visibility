#include <iostream>
#include <string>

// Visibility doesn't affect performance, it mainly helps with code readability

// Remember a class is default private meaning anything outside of the class scope cannot access it
class Entity
{

    // Private means only this class and a "friend" class/function can access the data
private:
    int X, Y;
    void Print() {} // example method to further show private usage

public:
    Entity()
    {
        X = 0;
        Print(); // Print can be used here as it is within the class scope
    }
};

class Player : public Entity
{
public:
    Player()
    {
        X = 2;   // Still can't access it here as Player is outside of the class scope
        Print(); // Cannot use Print here as Player is outside of the class scope
    }
};

int main()
{
    Entity e;
    e.Print(); // Cannot use Print here as 'e' is outside of the class scope
    e.X = 2;   // Although e is an Entity, X is private and cannot be called outside of the class scope

    std::cin.get();
}
