#include <iostream>
#include <string>

// Visibility doesn't affect performance, it mainly helps with code readability

// Remember a class is default private meaning anything outside of the class scope cannot access it
class Entity
{

    // Public means that everything can access this data
public:
    int X, Y;
    void Print() {} // example method to further show visibility

public:
    Entity()
    {
        X = 0;
        Print();
    }
};

class Player : public Entity
{
public:
    Player()
    {
        X = 2;
        Print();
    }
};

int main()
{
    Entity e;
    e.Print(); // Now print can be used here as everything is public
    e.X = 2;   // same here

    std::cin.get();
}
